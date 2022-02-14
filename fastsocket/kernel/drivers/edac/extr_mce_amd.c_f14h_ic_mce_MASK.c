
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static bool FUNC_5(u16 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = FUNC_2(VAR_2);
 bool VAR_5 = 1;

 if (FUNC_1(VAR_2)) {
  if (FUNC_3(VAR_2) != 0 || FUNC_0(VAR_2) != 1)
   VAR_5 = 0;

  if (VAR_4 == VAR_0)
   FUNC_4("Data/tag array parity error for a tag hit.\n");
  else if (VAR_4 == VAR_1)
   FUNC_4("Tag error during snoop/victimization.\n");
  else
   VAR_5 = 0;
 }
 return VAR_5;
}
