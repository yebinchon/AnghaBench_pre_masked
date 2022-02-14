
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc4_prov {scalar_t__ recv; } ;
typedef enum fc_fh_type { ____Placeholder_fc_fh_type } fc_fh_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;

void FUNC_5(enum fc_fh_type VAR_4, struct fc4_prov *VAR_5)
{
 FUNC_0(VAR_4 >= VAR_0);
 FUNC_1(&VAR_3);
 if (VAR_5->recv)
  FUNC_3(VAR_2[VAR_4], ((void*)0));
 else
  FUNC_3(VAR_1[VAR_4], ((void*)0));
 FUNC_2(&VAR_3);
 FUNC_4();
}
