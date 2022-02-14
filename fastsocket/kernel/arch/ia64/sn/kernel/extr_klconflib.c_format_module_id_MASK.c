
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int moduleid_t ;


 unsigned char VAR_0 ;

 unsigned char VAR_1 ;



 unsigned char VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

void
FUNC_9(char *VAR_6, moduleid_t VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 unsigned char VAR_11;

 VAR_9 = FUNC_2(VAR_7);
 VAR_11 = FUNC_1(VAR_7);




 switch (VAR_11)
 {
 case 135:
 case 132:
  VAR_11 = VAR_0;
  break;

 case 129:
 case 130:
 case 131:
 case 128:


  VAR_11 = VAR_2;
  break;

 case 133:
 case 134:

  VAR_11 = VAR_1;
  break;
 }

 VAR_10 = FUNC_0(VAR_7);

 if ((VAR_8 == VAR_3) || (VAR_8 == VAR_4)) {



  *VAR_6++ = '0' + FUNC_3(VAR_9);
  *VAR_6++ = '0' + FUNC_4(VAR_9);
  *VAR_6++ = '0' + FUNC_5(VAR_9);


  *VAR_6++ = VAR_11;
 }
 else if (VAR_8 == VAR_5) {


  FUNC_7(VAR_6, "rack" "/"); VAR_6 += FUNC_8(VAR_6);

  *VAR_6++ = '0' + FUNC_3(VAR_9);
  *VAR_6++ = '0' + FUNC_4(VAR_9);
  *VAR_6++ = '0' + FUNC_5(VAR_9);

  FUNC_7(VAR_6, "/" "bay" "/"); VAR_6 += FUNC_8(VAR_6);
 }


 if (VAR_10 < 10)
  *VAR_6++ = '0';
 FUNC_6(VAR_6, "%d", VAR_10);
}
