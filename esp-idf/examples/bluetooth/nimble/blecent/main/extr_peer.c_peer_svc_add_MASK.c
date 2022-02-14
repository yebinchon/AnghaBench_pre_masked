
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_gatt_svc {int start_handle; } ;
struct peer_svc {int chrs; struct ble_gatt_svc svc; } ;
struct peer {int svcs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct peer_svc*,struct peer_svc*,int ) ;
 int FUNC_2 (int *,struct peer_svc*,int ) ;
 int FUNC_3 (struct peer_svc*,int ,int) ;
 int VAR_1 ;
 struct peer_svc* FUNC_4 (int *) ;
 struct peer_svc* FUNC_5 (struct peer*,int ,struct peer_svc**) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct peer *VAR_3, const struct ble_gatt_svc *VAR_4)
{
    struct peer_svc *VAR_5;
    struct peer_svc *VAR_6;

    VAR_6 = FUNC_5(VAR_3, VAR_4->start_handle, &VAR_5);
    if (VAR_6 != ((void*)0)) {

        return 0;
    }

    VAR_6 = FUNC_4(&VAR_2);
    if (VAR_6 == ((void*)0)) {

        return VAR_0;
    }
    FUNC_3(VAR_6, 0, sizeof * VAR_6);

    VAR_6->svc = *VAR_4;
    FUNC_0(&VAR_6->chrs);

    if (VAR_5 == ((void*)0)) {
        FUNC_2(&VAR_3->svcs, VAR_6, VAR_1);
    } else {
        FUNC_1(VAR_5, VAR_6, VAR_1);
    }

    return 0;
}
