
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 uintptr_t VAR_0 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (int ,uintptr_t,uintptr_t,size_t,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;

int
FUNC_3(void *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 if (VAR_3 == 0) {





  return 0;
 }





 VAR_4 = ((uintptr_t) VAR_2) & VAR_0;
 VAR_2 = (void *) (((uintptr_t) VAR_2) & ~VAR_0);
 VAR_3 += VAR_4;

 if (&FUNC_1) {
  FUNC_1(VAR_1, (uintptr_t)FUNC_2(), (uintptr_t)VAR_2, VAR_3, 0, 0);
 }

 int VAR_5 = FUNC_0(VAR_2, VAR_3);

 return VAR_5;
}
