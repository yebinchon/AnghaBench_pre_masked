
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (unsigned int) ;

__attribute__((used)) static u32 FUNC_2(void)
{
 u32 VAR_4;
 unsigned int VAR_5;

 if (!FUNC_0(VAR_3))
  return 0;


 VAR_5 = FUNC_1(0x80000000);
 if (VAR_5 < VAR_2)
  return VAR_1;

 VAR_4 = FUNC_1(VAR_2);
 if (!(VAR_4 & VAR_0))

  return VAR_1;

 return VAR_4;
}
