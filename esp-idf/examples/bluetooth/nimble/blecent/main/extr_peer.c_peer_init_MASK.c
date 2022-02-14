
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer_svc {int dummy; } ;
struct peer_dsc {int dummy; } ;
struct peer_chr {int dummy; } ;
struct peer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,int *,char*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;

int
FUNC_4(int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
    int VAR_14;


    FUNC_3();

    VAR_6 = FUNC_1(
                   FUNC_0(VAR_10, sizeof (struct peer)));
    if (VAR_6 == ((void*)0)) {
        VAR_14 = VAR_0;
        goto err;
    }

    VAR_14 = FUNC_2(&VAR_7, VAR_10,
                         sizeof (struct peer), VAR_6,
                         "peer_pool");
    if (VAR_14 != 0) {
        VAR_14 = VAR_1;
        goto err;
    }

    VAR_8 = FUNC_1(
                       FUNC_0(VAR_11, sizeof (struct peer_svc)));
    if (VAR_8 == ((void*)0)) {
        VAR_14 = VAR_0;
        goto err;
    }

    VAR_14 = FUNC_2(&VAR_9, VAR_11,
                         sizeof (struct peer_svc), VAR_8,
                         "peer_svc_pool");
    if (VAR_14 != 0) {
        VAR_14 = VAR_1;
        goto err;
    }

    VAR_2 = FUNC_1(
                       FUNC_0(VAR_12, sizeof (struct peer_chr)));
    if (VAR_2 == ((void*)0)) {
        VAR_14 = VAR_0;
        goto err;
    }

    VAR_14 = FUNC_2(&VAR_3, VAR_12,
                         sizeof (struct peer_chr), VAR_2,
                         "peer_chr_pool");
    if (VAR_14 != 0) {
        VAR_14 = VAR_1;
        goto err;
    }

    VAR_4 = FUNC_1(
                       FUNC_0(VAR_13, sizeof (struct peer_dsc)));
    if (VAR_4 == ((void*)0)) {
        VAR_14 = VAR_0;
        goto err;
    }

    VAR_14 = FUNC_2(&VAR_5, VAR_13,
                         sizeof (struct peer_dsc), VAR_4,
                         "peer_dsc_pool");
    if (VAR_14 != 0) {
        VAR_14 = VAR_1;
        goto err;
    }

    return 0;

err:
    FUNC_3();
    return VAR_14;
}
