
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int iocfc; int plog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ,char*) ;

void
FUNC_2(struct bfa_s *VAR_3)
{
 FUNC_1(VAR_3->plog, VAR_1, VAR_0, 0,
       "IOC Disable");

 FUNC_0(&VAR_3->iocfc, VAR_2);
}
