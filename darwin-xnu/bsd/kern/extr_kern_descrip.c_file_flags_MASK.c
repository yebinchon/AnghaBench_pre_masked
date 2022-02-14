
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileproc {scalar_t__ f_flag; } ;
typedef int proc_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int,struct fileproc*,int) ;
 int FUNC_2 (int ,int,struct fileproc**,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_0, int *VAR_1)
{

 proc_t VAR_2 = FUNC_0();
 struct fileproc *VAR_3;
 int VAR_4;

 FUNC_3(VAR_2);
 if ( (VAR_4 = FUNC_2(VAR_2, VAR_0, &VAR_3, 1)) ) {
  FUNC_4(VAR_2);
  return(VAR_4);
 }
 *VAR_1 = (int)VAR_3->f_flag;
 FUNC_1(VAR_2, VAR_0, VAR_3,1);
 FUNC_4(VAR_2);

 return(0);
}
