
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int iocfc; int queue_process; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2)
{
 struct bfa_s *VAR_3 = VAR_2;

 VAR_3->queue_process = VAR_0;
 FUNC_0(&VAR_3->iocfc, VAR_1);
}
