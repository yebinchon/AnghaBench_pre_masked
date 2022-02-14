
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int UCHAR ;


 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

char *FUNC_4(UCHAR VAR_7)
{
 char VAR_8[VAR_0];
 FUNC_2(VAR_8, sizeof(VAR_8), "");

 if (VAR_7 & VAR_2)
 {
  FUNC_1(VAR_8, sizeof(VAR_8), "FIN+");
 }

 if (VAR_7 & VAR_5)
 {
  FUNC_1(VAR_8, sizeof(VAR_8), "SYN+");
 }

 if (VAR_7 & VAR_4)
 {
  FUNC_1(VAR_8, sizeof(VAR_8), "RST+");
 }

 if (VAR_7 & VAR_3)
 {
  FUNC_1(VAR_8, sizeof(VAR_8), "PSH+");
 }

 if (VAR_7 & VAR_1)
 {
  FUNC_1(VAR_8, sizeof(VAR_8), "ACK+");
 }

 if (VAR_7 & VAR_6)
 {
  FUNC_1(VAR_8, sizeof(VAR_8), "URG+");
 }

 if (FUNC_3(VAR_8) >= 1)
 {
  if (VAR_8[FUNC_3(VAR_8) - 1] == '+')
  {
   VAR_8[FUNC_3(VAR_8) - 1] = 0;
  }
 }

 return FUNC_0(VAR_8);
}
