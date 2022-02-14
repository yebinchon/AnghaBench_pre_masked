
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx24110_state {int dummy; } ;
typedef size_t fe_code_rate_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int const) ;

__attribute__((used)) static int FUNC_2 (struct cx24110_state* VAR_2, fe_code_rate_t VAR_3)
{


 static const int VAR_4[]={-1,1,2,3,5,7,-1};
 static const int VAR_5[]={-1,0x01,0x02,0x05,0x15,0x45,-1};
 static const int VAR_6[]={-1,0x01,0x03,0x06,0x1a,0x7a,-1};





 if (VAR_3>VAR_1)
  VAR_3=VAR_1;

 if (VAR_3==VAR_1) {
  FUNC_1(VAR_2,0x37,FUNC_0(VAR_2,0x37)&0xdf);

  FUNC_1(VAR_2,0x18,0xae);

  FUNC_1(VAR_2,0x05,(FUNC_0(VAR_2,0x05)&0xf0)|0x3);

  FUNC_1(VAR_2,0x22,(FUNC_0(VAR_2,0x22)&0xf0)|0x3);

  FUNC_1(VAR_2,0x1a,0x05); FUNC_1(VAR_2,0x1b,0x06);

  return 0;
 } else {
  FUNC_1(VAR_2,0x37,FUNC_0(VAR_2,0x37)|0x20);

  if(VAR_4[VAR_3]>0) {
   FUNC_1(VAR_2,0x05,(FUNC_0(VAR_2,0x05)&0xf0)|VAR_4[VAR_3]);

   FUNC_1(VAR_2,0x22,(FUNC_0(VAR_2,0x22)&0xf0)|VAR_4[VAR_3]);

   FUNC_1(VAR_2,0x1a,VAR_5[VAR_3]);
   FUNC_1(VAR_2,0x1b,VAR_6[VAR_3]);

    } else
     return -VAR_0;

 };
 return 0;
}
