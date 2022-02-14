
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_data {int * cpu_kpc_reload; int * cpu_kpc_shadow; int ** cpu_kpc_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpu_data*) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct cpu_data *VAR_1)
{
 FUNC_0(VAR_1);
 if (VAR_1->cpu_kpc_buf[0] != ((void*)0)) {
  FUNC_1(VAR_1->cpu_kpc_buf[0], VAR_0);
  VAR_1->cpu_kpc_buf[0] = ((void*)0);
 }
 if (VAR_1->cpu_kpc_buf[1] != ((void*)0)) {
  FUNC_1(VAR_1->cpu_kpc_buf[1], VAR_0);
  VAR_1->cpu_kpc_buf[1] = ((void*)0);
 }
 if (VAR_1->cpu_kpc_shadow != ((void*)0)) {
  FUNC_1(VAR_1->cpu_kpc_shadow, VAR_0);
  VAR_1->cpu_kpc_shadow = ((void*)0);
 }
 if (VAR_1->cpu_kpc_reload != ((void*)0)) {
  FUNC_1(VAR_1->cpu_kpc_reload, VAR_0);
  VAR_1->cpu_kpc_reload = ((void*)0);
 }
}
