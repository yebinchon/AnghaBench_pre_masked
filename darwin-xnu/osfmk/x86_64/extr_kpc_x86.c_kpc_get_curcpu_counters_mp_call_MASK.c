
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpc_get_counters_remote {int buf_stride; int nb_counters; struct kpc_get_counters_remote* buf; int classes; } ;


 int FUNC_0 (struct kpc_get_counters_remote*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int *,struct kpc_get_counters_remote*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct kpc_get_counters_remote *VAR_1 = VAR_0;
 int VAR_2=0, VAR_3=0;

 FUNC_0(VAR_1);
 FUNC_0(VAR_1->buf);

 VAR_2 = FUNC_1() * VAR_1->buf_stride;
 VAR_3 = FUNC_3(VAR_1->classes, ((void*)0), &VAR_1->buf[VAR_2]);


 FUNC_2(&(VAR_1->nb_counters), VAR_3);
}
