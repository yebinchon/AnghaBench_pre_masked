
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int qf_qflags; } ;




 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int*) ;

void
FUNC_3(struct quotafile *VAR_1, int VAR_2)
{

        FUNC_0();

        switch (VAR_2) {

 case 128:
 case 129:
         VAR_1->qf_qflags &= ~VAR_2;
  break;
 }
 if ( (VAR_1->qf_qflags & VAR_0) ) {
         VAR_1->qf_qflags &= ~VAR_0;
  FUNC_2(&VAR_1->qf_qflags);
 }
 FUNC_1();
}
