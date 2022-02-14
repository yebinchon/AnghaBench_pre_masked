
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct nouveau_timer {scalar_t__ (* read ) (struct nouveau_timer*) ;} ;


 int VAR_0 ;
 struct nouveau_timer* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int) ;
 scalar_t__ FUNC_4 (struct nouveau_timer*) ;
 scalar_t__ FUNC_5 (struct nouveau_timer*) ;

bool
FUNC_6(void *VAR_1, u64 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct nouveau_timer *VAR_6 = FUNC_0(VAR_1);
 u64 VAR_7;

 VAR_7 = VAR_6->read(VAR_6);
 do {
  if (FUNC_1(VAR_1, VAR_0)) {
   if ((FUNC_2(VAR_1, VAR_3) & VAR_4) != VAR_5)
    return 1;
  } else {
   if ((FUNC_3(VAR_1, VAR_3) & VAR_4) != VAR_5)
    return 1;
  }
 } while (VAR_6->read(VAR_6) - VAR_7 < VAR_2);

 return 0;
}
