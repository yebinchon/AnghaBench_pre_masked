
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileproc {int f_flags; } ;
typedef int proc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct fileproc*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(proc_t VAR_1, int VAR_2, struct fileproc *VAR_3)
{
        int VAR_4;

 FUNC_1(VAR_1);

 VAR_3->f_flags |= VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, 1);

 FUNC_2(VAR_1);

 return (VAR_4);
}
