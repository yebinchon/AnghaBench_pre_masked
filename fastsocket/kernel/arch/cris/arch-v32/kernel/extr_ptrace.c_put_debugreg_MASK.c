
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,long) ;
 long VAR_3 ;

__attribute__((used)) static int FUNC_5(long VAR_4, unsigned int VAR_5, long VAR_6)
{
 int VAR_7 = 0;
 register int VAR_8;
 if (!VAR_3)
  VAR_3 = VAR_4;
 else if (VAR_3 != VAR_4) {


  return (VAR_6 == 0) ? VAR_7 : -1;
 }


 FUNC_1(VAR_2, VAR_8);

 FUNC_3(VAR_0);

 switch (VAR_5 - VAR_1) {
 case 0:
  FUNC_4(0, VAR_6); break;
 case 1:
 case 2:
  if (VAR_6)
   VAR_7 = -1;
  break;
 case 3:
  FUNC_4(3, VAR_6); break;
 case 4:
  FUNC_4(4, VAR_6); break;
 case 5:
  FUNC_4(5, VAR_6); break;
 case 6:
  FUNC_4(6, VAR_6); break;
 case 7:
  FUNC_4(7, VAR_6); break;
 case 8:
  FUNC_4(8, VAR_6); break;
 case 9:
  FUNC_4(9, VAR_6); break;
 case 10:
  FUNC_4(10, VAR_6); break;
 case 11:
  FUNC_4(11, VAR_6); break;
 case 12:
  FUNC_4(12, VAR_6); break;
 case 13:
  FUNC_4(13, VAR_6); break;
 case 14:
  FUNC_4(14, VAR_6); break;
 default:
  VAR_7 = -1;
  break;
 }


 FUNC_2(VAR_2, VAR_8);

 FUNC_0();
 FUNC_0();
 FUNC_0();

 return VAR_7;
}
