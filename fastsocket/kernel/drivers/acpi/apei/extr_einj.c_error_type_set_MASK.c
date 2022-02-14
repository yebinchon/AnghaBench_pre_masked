
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(void *VAR_2, u64 VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6, VAR_7;





 VAR_7 = VAR_3 & 0x80000000;
 VAR_6 = VAR_3 & 0x7fffffff;


 if (VAR_6 & (VAR_6 - 1))
  return -VAR_0;
 if (!VAR_7) {
  VAR_4 = FUNC_0(&VAR_5);
  if (VAR_4)
   return VAR_4;
  if (!(VAR_3 & VAR_5))
   return -VAR_0;
 }
 VAR_1 = VAR_3;

 return 0;
}
