
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mk_timer_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int * FUNC_1 (int,int,int,char*) ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3(void)
{
 int VAR_3 = sizeof (mk_timer_data_t);

 FUNC_0(!(VAR_2 != ((void*)0)));

 VAR_2 = FUNC_1(VAR_3, (4096 * VAR_3), (16 * VAR_3), "mk_timer");

 FUNC_2(VAR_2, VAR_1, VAR_0);
}
