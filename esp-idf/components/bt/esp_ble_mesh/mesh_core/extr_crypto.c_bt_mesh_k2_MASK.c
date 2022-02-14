
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct bt_mesh_sg {int const* data; size_t len; } ;
typedef int pad ;
typedef int out ;


 int FUNC_0 (struct bt_mesh_sg*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int*,struct bt_mesh_sg*,int ,int*) ;
 int FUNC_4 (int*,int const*,int,int*) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (int*,int*,int) ;

int FUNC_7(const u8_t VAR_0[16], const u8_t *VAR_1, size_t VAR_2,
               u8_t VAR_3[1], u8_t VAR_4[16], u8_t VAR_5[16])
{
    struct bt_mesh_sg VAR_6[3];
    u8_t VAR_7[16];
    u8_t VAR_8[16];
    u8_t VAR_9[16];
    u8_t VAR_10;
    int VAR_11;

    FUNC_1("n %s", FUNC_2(VAR_0, 16));
    FUNC_1("p %s", FUNC_2(VAR_1, VAR_2));

    VAR_11 = FUNC_5("smk2", VAR_7);
    if (VAR_11) {
        return VAR_11;
    }

    VAR_11 = FUNC_4(VAR_7, VAR_0, 16, VAR_9);
    if (VAR_11) {
        return VAR_11;
    }

    VAR_10 = 0x01;

    VAR_6[0].data = ((void*)0);
    VAR_6[0].len = 0;
    VAR_6[1].data = VAR_1;
    VAR_6[1].len = VAR_2;
    VAR_6[2].data = &VAR_10;
    VAR_6[2].len = sizeof(VAR_10);

    VAR_11 = FUNC_3(VAR_9, VAR_6, FUNC_0(VAR_6), VAR_8);
    if (VAR_11) {
        return VAR_11;
    }

    VAR_3[0] = VAR_8[15] & 0x7f;

    VAR_6[0].data = VAR_8;
    VAR_6[0].len = sizeof(VAR_8);
    VAR_10 = 0x02;

    VAR_11 = FUNC_3(VAR_9, VAR_6, FUNC_0(VAR_6), VAR_8);
    if (VAR_11) {
        return VAR_11;
    }

    FUNC_6(VAR_4, VAR_8, 16);

    VAR_10 = 0x03;

    VAR_11 = FUNC_3(VAR_9, VAR_6, FUNC_0(VAR_6), VAR_8);
    if (VAR_11) {
        return VAR_11;
    }

    FUNC_6(VAR_5, VAR_8, 16);

    FUNC_1("NID 0x%02x enc_key %s", VAR_3[0], FUNC_2(VAR_4, 16));
    FUNC_1("priv_key %s", FUNC_2(VAR_5, 16));

    return 0;
}
