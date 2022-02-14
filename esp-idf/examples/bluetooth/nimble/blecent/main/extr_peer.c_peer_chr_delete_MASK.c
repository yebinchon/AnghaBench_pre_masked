
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer_dsc {int dscs; } ;
struct peer_chr {int dscs; } ;


 struct peer_dsc* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct peer_dsc*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct peer_chr *VAR_3)
{
    struct peer_dsc *VAR_4;

    while ((VAR_4 = FUNC_0(&VAR_3->dscs)) != ((void*)0)) {
        FUNC_1(&VAR_3->dscs, VAR_0);
        FUNC_2(&VAR_2, VAR_4);
    }

    FUNC_2(&VAR_1, VAR_3);
}
