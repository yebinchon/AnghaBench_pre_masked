
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct peer_svc {int dummy; } ;
struct peer {int disc_prev_chr_val; void* disc_cb_arg; int * disc_cb; int svcs; } ;
typedef int peer_disc_fn ;


 int VAR_0 ;
 struct peer_svc* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,struct peer*) ;
 int VAR_1 ;
 struct peer* FUNC_3 (int ) ;
 int FUNC_4 (struct peer_svc*) ;
 int VAR_2 ;

int
FUNC_5(uint16_t VAR_3, peer_disc_fn *VAR_4, void *VAR_5)
{
    struct peer_svc *VAR_6;
    struct peer *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_3(VAR_3);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }


    while ((VAR_6 = FUNC_0(&VAR_7->svcs)) != ((void*)0)) {
        FUNC_1(&VAR_7->svcs, VAR_1);
        FUNC_4(VAR_6);
    }

    VAR_7->disc_prev_chr_val = 1;
    VAR_7->disc_cb = VAR_4;
    VAR_7->disc_cb_arg = VAR_5;

    VAR_8 = FUNC_2(VAR_3, VAR_2, VAR_7);
    if (VAR_8 != 0) {
        return VAR_8;
    }

    return 0;
}
