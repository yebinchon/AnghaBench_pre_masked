
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_sigdata {scalar_t__ context; TYPE_1__* lock; } ;
struct TYPE_2__ {unsigned int lock; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
 struct drm_sigdata *VAR_2 = (struct drm_sigdata *) VAR_1;
 unsigned int VAR_3, VAR_4, VAR_5;


 if (!VAR_2->lock || !FUNC_1(VAR_2->lock->lock)
     || FUNC_0(VAR_2->lock->lock) != VAR_2->context)
  return 1;



 do {
  VAR_3 = VAR_2->lock->lock;
  VAR_4 = VAR_3 | VAR_0;
  VAR_5 = FUNC_2(&VAR_2->lock->lock, VAR_3, VAR_4);
 } while (VAR_5 != VAR_3);
 return 0;
}
