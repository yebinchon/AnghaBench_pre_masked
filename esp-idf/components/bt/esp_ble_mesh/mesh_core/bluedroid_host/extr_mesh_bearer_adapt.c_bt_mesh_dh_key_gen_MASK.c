
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8_t ;
typedef int (* bt_mesh_dh_key_cb_t ) (int const*,int const) ;
struct TYPE_6__ {int const* x; int const* y; int member_0; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_2__ Point ;
typedef int DWORD ;
typedef int const* BT_OCTET32 ;


 int FUNC_0 (char*,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int const*,int) ;
 int const* VAR_2 ;
 int FUNC_3 (int const*,int const*,size_t) ;

int FUNC_4(const u8_t VAR_3[64], bt_mesh_dh_key_cb_t VAR_4, const u8_t VAR_5)
{
    BT_OCTET32 VAR_6 = {0};
    Point VAR_7 = {0};
    Point VAR_8 = {0};

    FUNC_0("private key = %s", FUNC_2(VAR_2, VAR_0));

    FUNC_3(VAR_6, VAR_2, VAR_0);
    FUNC_3(VAR_7.x, VAR_3, VAR_0);
    FUNC_3(VAR_7.y, &VAR_3[VAR_0], VAR_0);

    FUNC_0("remote public key x = %s", FUNC_2(VAR_7.x, VAR_0));
    FUNC_0("remote public key y = %s", FUNC_2(VAR_7.y, VAR_0));

    FUNC_1(&VAR_8, &VAR_7, (DWORD *)VAR_6, VAR_1);

    FUNC_0("new public key x = %s", FUNC_2(VAR_8.x, 32));
    FUNC_0("new public key y = %s", FUNC_2(VAR_8.y, 32));

    if (VAR_4 != ((void*)0)) {
        VAR_4((const u8_t *)VAR_8.x, VAR_5);
    }

    return 0;
}
