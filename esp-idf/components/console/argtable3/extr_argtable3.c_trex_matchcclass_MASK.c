
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TRexChar ;
typedef int TRexBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static TRexBool FUNC_9(int VAR_2,TRexChar VAR_3)
{
    int VAR_4 = VAR_3;
 switch(VAR_2) {
 case 'a': return FUNC_1(VAR_4)?VAR_1:VAR_0;
 case 'A': return !FUNC_1(VAR_4)?VAR_1:VAR_0;
 case 'w': return (FUNC_0(VAR_4) || VAR_4 == '_')?VAR_1:VAR_0;
 case 'W': return (!FUNC_0(VAR_4) && VAR_4 != '_')?VAR_1:VAR_0;
 case 's': return FUNC_6(VAR_4)?VAR_1:VAR_0;
 case 'S': return !FUNC_6(VAR_4)?VAR_1:VAR_0;
 case 'd': return FUNC_3(VAR_4)?VAR_1:VAR_0;
 case 'D': return !FUNC_3(VAR_4)?VAR_1:VAR_0;
 case 'x': return FUNC_8(VAR_4)?VAR_1:VAR_0;
 case 'X': return !FUNC_8(VAR_4)?VAR_1:VAR_0;
 case 'c': return FUNC_2(VAR_4)?VAR_1:VAR_0;
 case 'C': return !FUNC_2(VAR_4)?VAR_1:VAR_0;
 case 'p': return FUNC_5(VAR_4)?VAR_1:VAR_0;
 case 'P': return !FUNC_5(VAR_4)?VAR_1:VAR_0;
 case 'l': return FUNC_4(VAR_4)?VAR_1:VAR_0;
 case 'u': return FUNC_7(VAR_4)?VAR_1:VAR_0;
 }
 return VAR_0;
}
