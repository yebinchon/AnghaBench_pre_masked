
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_data {int * cpu_kpc_reload; int * cpu_kpc_shadow; int ** cpu_kpc_buf; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpu_data*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct cpu_data*) ;
 int FUNC_3 (int *,int ,int ) ;

boolean_t
FUNC_4(struct cpu_data *VAR_3)
{
 FUNC_0(VAR_3);
 FUNC_0(VAR_3->cpu_kpc_buf[0] == ((void*)0));
 FUNC_0(VAR_3->cpu_kpc_buf[1] == ((void*)0));
 FUNC_0(VAR_3->cpu_kpc_shadow == ((void*)0));
 FUNC_0(VAR_3->cpu_kpc_reload == ((void*)0));
 if ((VAR_3->cpu_kpc_buf[0] = FUNC_1(VAR_0)) == ((void*)0))
  goto error;
 if ((VAR_3->cpu_kpc_buf[1] = FUNC_1(VAR_0)) == ((void*)0))
  goto error;
 if ((VAR_3->cpu_kpc_shadow = FUNC_1(VAR_0)) == ((void*)0))
  goto error;
 if ((VAR_3->cpu_kpc_reload = FUNC_1(VAR_0)) == ((void*)0))
  goto error;

 FUNC_3(VAR_3->cpu_kpc_buf[0], 0, VAR_0);
 FUNC_3(VAR_3->cpu_kpc_buf[1], 0, VAR_0);
 FUNC_3(VAR_3->cpu_kpc_shadow, 0, VAR_0);
 FUNC_3(VAR_3->cpu_kpc_reload, 0, VAR_0);


 return VAR_2;

error:
 FUNC_2(VAR_3);
 return VAR_1;
}
