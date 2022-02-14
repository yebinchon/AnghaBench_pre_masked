
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer_svc {int chrs; } ;
struct peer_chr {int dummy; } ;


 struct peer_chr* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct peer_svc*) ;
 int FUNC_3 (struct peer_chr*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct peer_svc *VAR_2)
{
    struct peer_chr *VAR_3;

    while ((VAR_3 = FUNC_0(&VAR_2->chrs)) != ((void*)0)) {
        FUNC_1(&VAR_2->chrs, VAR_0);
        FUNC_3(VAR_3);
    }

    FUNC_2(&VAR_1, VAR_2);
}
