
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseudo_init {int ps_count; int (* ps_func ) (int ) ;} ;
typedef int kern_return_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 struct pseudo_init* VAR_0 ;
 int FUNC_3 (int ) ;

kern_return_t
FUNC_4(void)
{
 FUNC_2("bsd_autoconf: calling kminit\n");
 FUNC_1();




 {
     struct pseudo_init *VAR_1;

     for (VAR_1 = VAR_0; VAR_1->ps_func; VAR_1++)
  (*VAR_1->ps_func) (VAR_1->ps_count);
 }

 return( FUNC_0());
}
