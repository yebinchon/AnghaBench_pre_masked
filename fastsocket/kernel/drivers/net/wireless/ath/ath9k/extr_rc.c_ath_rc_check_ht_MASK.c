
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static inline bool FUNC_3(u8 VAR_0, u8 VAR_1, u16 VAR_2,
       u32 VAR_3, u32 VAR_4)
{
 if (VAR_0 != VAR_1 || !FUNC_1(VAR_3))
  return 0;

 if (!FUNC_2(VAR_2, VAR_4))
  return 0;

 if (!(VAR_2 & FUNC_0(VAR_4)))
  return 0;

 return 1;
}
