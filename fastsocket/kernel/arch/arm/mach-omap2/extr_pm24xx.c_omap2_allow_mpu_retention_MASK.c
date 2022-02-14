
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_1(void)
{
 u32 VAR_11;


 VAR_11 = FUNC_0(VAR_1, VAR_0);
 if (VAR_11 & (VAR_2 | VAR_8 |
   VAR_7 | VAR_6 |
   VAR_5 | VAR_4))
  return 0;

 VAR_11 = FUNC_0(VAR_1, VAR_3);
 if (VAR_11 & VAR_9)
  return 0;
 if (VAR_10)
  return 0;

 return 1;
}
