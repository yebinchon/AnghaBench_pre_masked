
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct bt_mesh_model {scalar_t__* keys; TYPE_1__* pub; } ;
struct TYPE_2__ {scalar_t__ key; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,struct bt_mesh_model*,scalar_t__,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bt_mesh_model*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct bt_mesh_model*) ;

__attribute__((used)) static u8_t FUNC_6(struct bt_mesh_model *VAR_5, u16_t VAR_6, bool VAR_7)
{
    int VAR_8;

    FUNC_1("model %p key_idx 0x%03x store %u", VAR_5, VAR_6, VAR_7);

    if (!FUNC_4(VAR_6)) {
        return VAR_3;
    }

    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->keys); VAR_8++) {
        if (VAR_5->keys[VAR_8] != VAR_6) {
            continue;
        }

        VAR_5->keys[VAR_8] = VAR_1;

        if (FUNC_2(VAR_2) && VAR_7) {
            FUNC_5(VAR_5);
        }

        if (VAR_5->pub && VAR_5->pub->key == VAR_6) {
            FUNC_3(VAR_5, VAR_0,
                         0, 0, 0, 0, 0, VAR_7);
        }
    }

    return VAR_4;
}
