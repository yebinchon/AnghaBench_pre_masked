
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(int VAR_13)
{
 u32 VAR_14 = (VAR_0 | VAR_3 | VAR_4 |
   VAR_2 | VAR_1);
 u32 VAR_15 = 0;

 switch (VAR_13) {
  case 0:
   FUNC_0(VAR_5, VAR_14);
   FUNC_0(VAR_9, VAR_15);
   break;
  case 1:
   FUNC_0(VAR_6, VAR_14);
   FUNC_0(VAR_10, VAR_15);
   break;
  case 2:
   FUNC_0(VAR_7, VAR_14);
   FUNC_0(VAR_11, VAR_15);
   break;
  case 3:
   FUNC_0(VAR_8, VAR_14);
   FUNC_0(VAR_12, VAR_15);
   break;
  default:
   FUNC_1("Bad ctr number!\n");
 }
}
