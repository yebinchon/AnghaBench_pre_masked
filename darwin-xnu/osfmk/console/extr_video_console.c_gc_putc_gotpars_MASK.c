
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_columns; int v_rows; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int ,int,int) ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_2 (unsigned int,int,char,int ) ;
 int* VAR_13 ;
 int FUNC_3 (unsigned char) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_1__ VAR_20 ;

__attribute__((used)) static void
FUNC_6(unsigned char VAR_21)
{
 unsigned int VAR_22;

 if (VAR_21 < ' ') {


  FUNC_3(VAR_21);
  VAR_17 = VAR_6;
  return;
 }
 VAR_17 = VAR_7;
 switch (VAR_21) {
 case 'A':
  VAR_19 -= VAR_13[0] ? VAR_13[0] : 1;
  if (VAR_19 < VAR_16)
   VAR_19 = VAR_16;
  break;
 case 'B':
  VAR_19 += VAR_13[0] ? VAR_13[0] : 1;
  if (VAR_19 >= VAR_15)
   VAR_19 = VAR_15 - 1;
  break;
 case 'C':
  VAR_18 += VAR_13[0] ? VAR_13[0] : 1;
  if (VAR_18 >= VAR_20.v_columns)
   VAR_18 = VAR_20.v_columns-1;
  break;
 case 'D':
  if (VAR_13[0] > VAR_18)
   VAR_18 = 0;
  else if (VAR_13[0])
   VAR_18 -= VAR_13[0];
  else if (VAR_18)
   --VAR_18;
  break;
 case 'H':
 case 'f':
  VAR_18 = VAR_13[1] ? VAR_13[1] - 1 : 0;
  VAR_19 = VAR_13[0] ? VAR_13[0] - 1 : 0;
  if (VAR_14)
   VAR_19 += VAR_16;
  VAR_11 = 0;
  break;
 case 'X':
  if (VAR_12) {
   for (VAR_22 = VAR_18; VAR_22 < VAR_18 + VAR_13[0]; VAR_22++)
    FUNC_2(VAR_22, VAR_19, ' ', VAR_1);
  }
  break;
 case 'J':
  FUNC_1(VAR_18, VAR_19, 0, VAR_20.v_rows, VAR_13[0]);
  break;
 case 'K':
  FUNC_0(VAR_18, VAR_19, VAR_13[0]);
  break;
 case 'g':
  switch (VAR_13[0]) {
   case 1:
   case 2:

    break;
   case 3:
    {
     for (VAR_22 = 0; VAR_22 <= VAR_20.v_columns; VAR_22++)
      FUNC_4(VAR_22, VAR_8);
    }
    break;
   case 0:
    FUNC_4(VAR_18, VAR_8);
    break;
  }
  break;
 case 'm':
  for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
   switch (VAR_13[VAR_22]) {
   case 0:
    VAR_10 = VAR_1;
    FUNC_5(VAR_4, VAR_8);
    FUNC_5(VAR_5, VAR_9 );
    break;
   case 1:
    VAR_10 |= VAR_0;
    break;
   case 4:
    VAR_10 |= VAR_3;
    break;
   case 7:
    VAR_10 |= VAR_2;
    break;
   case 22:
    VAR_10 &= ~VAR_0;
    break;
   case 24:
    VAR_10 &= ~VAR_3;
    break;
   case 27:
    VAR_10 &= ~VAR_2;
    break;
   case 5:
   case 25:
    break;
   default:
    if (VAR_13[VAR_22] >= 30 && VAR_13[VAR_22] <= 37)
     FUNC_5(VAR_13[VAR_22] - 30, VAR_9);
    if (VAR_13[VAR_22] >= 40 && VAR_13[VAR_22] <= 47)
     FUNC_5(VAR_13[VAR_22] - 40, VAR_8);
    break;
   }
  }
  break;
 case 'r':
  VAR_18 = VAR_19 = 0;

  if ((VAR_12 > 0) && (VAR_13[0] < VAR_20.v_rows)) {
   VAR_16 = VAR_13[0] ? VAR_13[0] - 1 : 0;
  } else {
   VAR_16 = 0;
  }
  if ((VAR_12 > 1) && (VAR_13[1] <= VAR_20.v_rows) && (VAR_13[1] > VAR_13[0])) {
   VAR_15 = VAR_13[1];
   if (VAR_15 > VAR_20.v_rows)
    VAR_15 = VAR_20.v_rows;
  } else {
   VAR_15 = VAR_20.v_rows;
  }
  if (VAR_14)
   VAR_19 = VAR_16;
  break;
 }

}
