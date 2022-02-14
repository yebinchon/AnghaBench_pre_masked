
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,unsigned char) ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static unsigned char FUNC_4(void)
{
 u32 VAR_5 = 0;
 unsigned char VAR_6;

 while (!(VAR_5 & VAR_2))
  VAR_5 = FUNC_1((u32 *)(VAR_4 + VAR_1));

 VAR_6 = FUNC_0((u8 *)(VAR_3 + VAR_0 + 2));
 FUNC_2((u8 *)(VAR_3 + VAR_0 + 2), VAR_6);
 FUNC_3((u32 *)(VAR_4 + VAR_1),
   VAR_5 & ~VAR_2);

 return VAR_6;
}
