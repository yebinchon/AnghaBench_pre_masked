
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct bt_mesh_model {scalar_t__* keys; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,struct bt_mesh_model*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct bt_mesh_model*) ;

__attribute__((used)) static u8_t FUNC_5(struct bt_mesh_model *VAR_5, u16_t VAR_6)
{
    int VAR_7;

    FUNC_1("model %p key_idx 0x%03x", VAR_5, VAR_6);

    if (!FUNC_3(VAR_6)) {
        return VAR_3;
    }

    for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->keys); VAR_7++) {

        if (VAR_5->keys[VAR_7] == VAR_6) {
            return VAR_4;
        }
    }

    for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->keys); VAR_7++) {
        if (VAR_5->keys[VAR_7] == VAR_0) {
            VAR_5->keys[VAR_7] = VAR_6;

            if (FUNC_2(VAR_1)) {
                FUNC_4(VAR_5);
            }

            return VAR_4;
        }
    }

    return VAR_2;
}
