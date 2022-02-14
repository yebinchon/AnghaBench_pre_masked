
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (long,int,int) ;

__attribute__((used)) static inline u8 FUNC_1(long VAR_0)
{
 int VAR_1;
 VAR_0 = FUNC_0(VAR_0, 1, 128) >> 1;
 for (VAR_1 = 0; VAR_1 < 7; VAR_1++) {
  if (VAR_0 == 0)
   break;
  VAR_0 >>= 1;
 }
 return ((u8) VAR_1);
}
