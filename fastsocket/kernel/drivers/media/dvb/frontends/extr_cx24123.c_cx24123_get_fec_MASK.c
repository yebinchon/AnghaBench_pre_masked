
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx24123_state {int dummy; } ;
typedef int fe_code_rate_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cx24123_state*,int) ;

__attribute__((used)) static int FUNC_1(struct cx24123_state *VAR_8, fe_code_rate_t *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_0(VAR_8, 0x1b);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = VAR_10 & 0x07;

 switch (VAR_10) {
 case 1:
  *VAR_9 = VAR_0;
  break;
 case 2:
  *VAR_9 = VAR_1;
  break;
 case 3:
  *VAR_9 = VAR_2;
  break;
 case 4:
  *VAR_9 = VAR_3;
  break;
 case 5:
  *VAR_9 = VAR_4;
  break;
 case 6:
  *VAR_9 = VAR_5;
  break;
 case 7:
  *VAR_9 = VAR_6;
  break;
 default:

  *VAR_9 = VAR_7;
 }

 return 0;
}
