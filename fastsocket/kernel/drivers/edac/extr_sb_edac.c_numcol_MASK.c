
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_2(u32 VAR_1)
{
 int VAR_2 = (FUNC_0(VAR_1) + 10);

 if (VAR_2 > 12) {
  FUNC_1("Invalid number of cols: %d (max = 4) raw value = %x (%04x)",
   VAR_2, (unsigned int)FUNC_0(VAR_1), VAR_1);
  return -VAR_0;
 }

 return 1 << VAR_2;
}
