
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpc_get_counters_remote {int buf_stride; int nb_counters; int * buf; int classes; } ;
typedef int event_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct kpc_get_counters_remote *VAR_2 = VAR_1;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->buf != ((void*)0));

 int VAR_3 = FUNC_1() * VAR_2->buf_stride;
 int VAR_4 = FUNC_4(VAR_2->classes, ((void*)0), &VAR_2->buf[VAR_3]);


 FUNC_2(&(VAR_2->nb_counters), VAR_4);

 if (FUNC_3(&VAR_0, 1) == 0) {
  FUNC_5((event_t) &VAR_0);
 }
}
