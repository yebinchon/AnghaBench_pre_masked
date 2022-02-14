
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_columns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned char,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;

__attribute__((used)) static void
FUNC_3(unsigned char VAR_13)
{
 switch (VAR_13) {
 case '\a':
        break;
 case 127:
 case '\b':
  if (VAR_5) {
   VAR_5 = 0;
  } else
   if (VAR_10 > 0) {
    VAR_10--;
   }
  break;
 case '\t':
  if (VAR_2) while (VAR_10 < VAR_12.v_columns && !FUNC_0(++VAR_10));

  if (VAR_10 >= VAR_12.v_columns)
   VAR_10 = VAR_12.v_columns-1;
  break;
 case 0x0b:
 case 0x0c:
 case '\n':
  if (VAR_11 >= VAR_6 -1 ) {
   FUNC_2(1, VAR_7, VAR_6);
   VAR_11 = VAR_6 - 1;
  } else {
   VAR_11++;
  }
  break;
 case '\r':
  VAR_10 = 0;
  VAR_5 = 0;
  break;
 case 0x0e:
  VAR_4 = 1;
  break;
 case 0x0f:
  VAR_4 = 0;
  break;
 case 0x18 :
 case 0x1A :

  break;
 case '\033':
  VAR_8 = VAR_0;
  VAR_5 = 0;
  break;
 default:
  if (VAR_13 >= ' ') {
   if (VAR_5) {
    VAR_10 = 0;
    if (VAR_11 >= VAR_6 -1 ) {
     FUNC_2(1, VAR_7, VAR_6);
     VAR_11 = VAR_6 - 1;
    } else {
     VAR_11++;
    }
    VAR_5 = 0;
   }
   FUNC_1(VAR_10, VAR_11, (VAR_13 >= 0x60 && VAR_13 <= 0x7f) ? VAR_13 + VAR_3[VAR_4]
        : VAR_13, VAR_1);
   if (VAR_10 == VAR_12.v_columns - 1) {
    VAR_5 = VAR_9;
   } else {
    VAR_10++;
   }
  }
  break;
 }

}
