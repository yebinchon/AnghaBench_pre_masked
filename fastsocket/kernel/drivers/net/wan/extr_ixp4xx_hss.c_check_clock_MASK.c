
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
         u32 *VAR_5, u32 *VAR_6, u32 *VAR_7)
{

 u64 VAR_8;
 u32 VAR_9;

 VAR_8 = VAR_0 * (u64)(VAR_4 + 1);
 FUNC_1(VAR_8, VAR_2 * (VAR_4 + 1) + VAR_3 + 1);
 VAR_9 = FUNC_0((u32)VAR_8 - VAR_1);

 if (VAR_9 < *VAR_6) {
  *VAR_5 = VAR_8;
  *VAR_6 = VAR_9;
  *VAR_7 = (VAR_2 << 22) | (VAR_3 << 12) | VAR_4;
 }
 return VAR_9;
}
