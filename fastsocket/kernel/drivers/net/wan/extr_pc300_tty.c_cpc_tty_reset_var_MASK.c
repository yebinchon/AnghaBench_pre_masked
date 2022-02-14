
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int dummy; } ;
typedef int st_cpc_tty_area ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_2 ;

void FUNC_2(void)
{
 int VAR_3 ;

 FUNC_0("hdlcX-tty: reset variables\n");

 FUNC_1(&VAR_2, 0, sizeof(struct tty_driver));
 for (VAR_3=0; VAR_3 < VAR_0; VAR_3++){
  FUNC_1(&VAR_1[VAR_3],0, sizeof(st_cpc_tty_area));
 }
}
