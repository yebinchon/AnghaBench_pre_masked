
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned short) ;
 scalar_t__ FUNC_1 (unsigned short) ;
 scalar_t__ FUNC_2 (unsigned short) ;
 scalar_t__ FUNC_3 (unsigned short) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int,int ) ;

int FUNC_9(unsigned short VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_0(VAR_6);
 int VAR_9 = -VAR_0;

 FUNC_4();
 if (FUNC_2(VAR_6)) {
  FUNC_8( "writing '%x' to '%x'\n",
    VAR_8, VAR_7 ? VAR_3 : VAR_2 );
  VAR_9 = FUNC_6(VAR_7 ? VAR_3 : VAR_2, VAR_8);
 } else if (FUNC_3(VAR_6)) {
  if (FUNC_5(VAR_1, VAR_8) > 0)
   VAR_9 = FUNC_6(VAR_7 ? VAR_5 :
        VAR_4, VAR_8);
 } else if (FUNC_1(VAR_6)) {
  if (FUNC_5(VAR_1, VAR_8) > 0)
   VAR_9 = FUNC_6(VAR_7 ? VAR_3 :
        VAR_2, VAR_8);
 }
 FUNC_7();
 return VAR_9;
}
