
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int PortAddr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(PortAddr VAR_7)
{
 uchar VAR_8;

 VAR_8 =
     FUNC_0(VAR_7) &
     (~(VAR_2 | VAR_3 | VAR_0));
 FUNC_2(VAR_7, (uchar)(VAR_8 | VAR_1));
 FUNC_3(VAR_7, VAR_5);
 FUNC_3(VAR_7, VAR_6);
 if ((FUNC_1(VAR_7) & VAR_4) == 0) {
  return (0);
 }
 return (1);
}
