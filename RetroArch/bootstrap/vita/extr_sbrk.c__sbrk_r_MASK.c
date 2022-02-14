
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _reent {int _errno; } ;
struct SceKernelLwMutexWork {int dummy; } ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct SceKernelLwMutexWork*,int,int ) ;
 int FUNC_1 (struct SceKernelLwMutexWork*,int) ;

void * FUNC_2(struct _reent *VAR_5, ptrdiff_t VAR_6) {
 if (FUNC_0((struct SceKernelLwMutexWork*)VAR_4, 1, 0) < 0)
  goto fail;
 if (!VAR_1 || VAR_2 + VAR_6 >= VAR_3) {
  FUNC_1((struct SceKernelLwMutexWork*)VAR_4, 1);
fail:
  VAR_5->_errno = VAR_0;
  return (void*)-1;
 }

 char *VAR_7 = VAR_2;
 VAR_2 += VAR_6;

 FUNC_1((struct SceKernelLwMutexWork*)VAR_4, 1);
 return (void*) VAR_7;
}
