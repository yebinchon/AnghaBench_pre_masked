
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_state_scrub {int dummy; } ;
struct pf_frent {int dummy; } ;
struct pf_frcache {int dummy; } ;
struct pf_fragment {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int,int ,int ,int ,char*,int *) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(void)
{
 FUNC_1(&VAR_9, sizeof (struct pf_frent), 0, 0, 0, "pffrent",
     ((void*)0));
 FUNC_1(&VAR_7, sizeof (struct pf_fragment), 0, 0, 0, "pffrag",
     ((void*)0));
 FUNC_1(&VAR_4, sizeof (struct pf_fragment), 0, 0, 0,
     "pffrcache", ((void*)0));
 FUNC_1(&VAR_6, sizeof (struct pf_frcache), 0, 0, 0, "pffrcent",
     ((void*)0));
 FUNC_1(&VAR_10, sizeof (struct pf_state_scrub), 0, 0, 0,
     "pfstscr", ((void*)0));

 FUNC_3(&VAR_7, VAR_0);
 FUNC_2(&VAR_9, VAR_3, ((void*)0), 0);
 FUNC_2(&VAR_4, VAR_1, ((void*)0), 0);
 FUNC_2(&VAR_6, VAR_2, ((void*)0), 0);

 FUNC_0(&VAR_8);
 FUNC_0(&VAR_5);
}
