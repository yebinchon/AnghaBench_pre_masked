
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccrng_state {int dummy; } ;
struct TYPE_2__ {struct ccrng_state* (* ccrng_fn ) (int*) ;} ;


 int FUNC_0 (struct ccrng_state*,size_t,void*) ;
 TYPE_1__* VAR_0 ;
 struct ccrng_state* FUNC_1 (int*) ;

int
FUNC_2(void *VAR_1, size_t VAR_2)
{
 struct ccrng_state *VAR_3 = ((void*)0);
 int VAR_4 = -1;

 if (VAR_0) {
  VAR_3 = VAR_0->ccrng_fn(&VAR_4);
  if (VAR_3 != ((void*)0)) {
   VAR_4 = FUNC_0(VAR_3, VAR_2, VAR_1);
  }
 }

 return VAR_4;
}
