
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_4, int VAR_5,
          int VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_4 + VAR_0);

 if (VAR_5 <= 32)
  VAR_7 |= VAR_2;
 else if (VAR_5 <= 64)
  VAR_7 |= VAR_3;
 else
  VAR_7 |= VAR_1;

 FUNC_1(VAR_7, VAR_4 + VAR_0);

 return;
}
