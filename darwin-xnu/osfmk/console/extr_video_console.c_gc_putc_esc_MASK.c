
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_rows; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__ VAR_19 ;

__attribute__((used)) static void
FUNC_5(unsigned char VAR_20)
{
 VAR_16 = VAR_1;

 switch (VAR_20) {
 case '[':
  VAR_16 = VAR_4;
  break;
 case 'c':
  FUNC_1();
  FUNC_0(VAR_17, VAR_18, 0, VAR_19.v_rows, 2);
  VAR_17 = VAR_18 = 0;
  break;
 case 'D':
 case 'E':
  if (VAR_18 >= VAR_14 -1) {
   FUNC_3(1, VAR_15, VAR_14);
   VAR_18 = VAR_14 - 1;
  } else {
   VAR_18++;
  }
  if (VAR_20 == 'E') VAR_17 = 0;
  break;
 case 'H':
  FUNC_4(VAR_17, VAR_5);
  break;
 case 'M':
  if (VAR_18 <= VAR_15) {
   FUNC_2(1, VAR_15, VAR_14);
   VAR_18 = VAR_15;
  } else {
   VAR_18--;
  }
  break;
 case '>':
  FUNC_1();
  break;
 case '7':
  VAR_12 = VAR_17;
  VAR_13 = VAR_18;
  VAR_11 = VAR_6;
  VAR_10 = VAR_9;
  VAR_8[0] = VAR_7[0];
  VAR_8[1] = VAR_7[1];
  break;
 case '8':
  VAR_17 = VAR_12;
  VAR_18 = VAR_13;
  VAR_6 = VAR_11;
  VAR_9 = VAR_10;
  VAR_7[0] = VAR_8[0];
  VAR_7[1] = VAR_8[1];
  break;
 case 'Z':
  break;
 case '#':
  VAR_16 = VAR_0;
  break;
 case '(':
  VAR_16 = VAR_2;
  break;
 case ')':
  VAR_16 = VAR_3;
  break;
 case '=':
  break;
 default:

  break;
 }

}
