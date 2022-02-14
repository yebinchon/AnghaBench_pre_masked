
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,void*,size_t,int ) ;
 int FUNC_1 (void*,size_t) ;
 int VAR_2 ;

void FUNC_2(void *VAR_3, size_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 != 0 && (VAR_4 & (VAR_0 - 1))) {

  VAR_4 = (VAR_4 + VAR_0 - 1) & ~(VAR_0 - 1);
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 }
 if (VAR_5 != 0) {
  FUNC_0(VAR_2,
   "munmap(%p, %zu) failed: %d\n", VAR_3, VAR_4, VAR_1);
 }
}
