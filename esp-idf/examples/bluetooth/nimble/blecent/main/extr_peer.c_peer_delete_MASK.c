
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct peer_svc {int dummy; } ;
struct peer {int svcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct peer_svc* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct peer*,struct peer*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,struct peer*) ;
 struct peer* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct peer_svc*) ;
 int VAR_4 ;

int
FUNC_6(uint16_t VAR_5)
{
    struct peer_svc *VAR_6;
    struct peer *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_4(VAR_5);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(&VAR_4, VAR_7, VAR_7, VAR_2);

    while ((VAR_6 = FUNC_0(&VAR_7->svcs)) != ((void*)0)) {
        FUNC_2(&VAR_7->svcs, VAR_2);
        FUNC_5(VAR_6);
    }

    VAR_8 = FUNC_3(&VAR_3, VAR_7);
    if (VAR_8 != 0) {
        return VAR_1;
    }

    return 0;
}
