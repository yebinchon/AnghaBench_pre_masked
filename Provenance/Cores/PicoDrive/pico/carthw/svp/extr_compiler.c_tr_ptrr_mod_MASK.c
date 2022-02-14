
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* r; TYPE_1__* gr; } ;
struct TYPE_3__ {int h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int ,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int ,int) ;
 int FUNC_3 (int ,int ,int,int,int,int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int,int,int ,int) ;
 int FUNC_9 (int,int,int ,int) ;
 int FUNC_10 (int,int,int,int) ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(int VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16 = -1;

 if (VAR_13 == 0) return;

 if (!VAR_14 || VAR_13 == 1)
  VAR_16 = 8;
 else if (VAR_14 && (VAR_10 & VAR_6)) {
  VAR_16 = VAR_11.gr[VAR_7].h & 7;
  if (VAR_16 == 0) VAR_16 = 8;
 }

 if (VAR_16 == -1)
 {
  int VAR_17 = (VAR_12 < 4) ? 8 : 9;
  FUNC_11(VAR_12);
  if (VAR_8 & VAR_6) {

   FUNC_2(1, 6, 0, 0x70);
   FUNC_9(1, 1, 0, 0x10);
   FUNC_2(1, 1, 0, 0x70);
   FUNC_0(1, 1, 0, 0x10);
  } else {
   FUNC_3(VAR_0,VAR_3,1,6,1,0,0x70);
   FUNC_3(VAR_1,VAR_4,0,0,1,0,0x80);
  }
  FUNC_6(1, 1, 4);
  FUNC_8(2, 1, 0, 8);
  FUNC_4(3, 8/2, VAR_15);
  if (VAR_12&3)
   FUNC_0(1, 1, 0, (VAR_12&3)*8);
  FUNC_5(VAR_17,VAR_17,1);
  if (VAR_13 == 2)
       FUNC_10(VAR_17,VAR_17,3,2);
  else FUNC_1(VAR_17,VAR_17,3,2);
  FUNC_8(1, 1, 0, 32);
  FUNC_5(VAR_17,VAR_17,1);
  VAR_9[1] = VAR_9[2] = VAR_9[3] = -1;
 }
 else if (VAR_10 & (1 << (VAR_12 + 8)))
 {
  int VAR_18 = (1 << VAR_16) - 1;
  if (VAR_13 == 2)
       VAR_11.r[VAR_12] = (VAR_11.r[VAR_12] & ~VAR_18) | ((VAR_11.r[VAR_12] - VAR_15) & VAR_18);
  else VAR_11.r[VAR_12] = (VAR_11.r[VAR_12] & ~VAR_18) | ((VAR_11.r[VAR_12] + VAR_15) & VAR_18);
 }
 else
 {
  int VAR_19 = (VAR_12 < 4) ? 8 : 9;
  int VAR_20 = ((VAR_12&3) + 1)*8 - (8 - VAR_16);
  FUNC_7(VAR_19,VAR_19,VAR_20);

  FUNC_3(VAR_0,(VAR_13==2)?VAR_5:VAR_2,0,VAR_19,VAR_19, 8/2, VAR_15 << (8 - VAR_16));
  FUNC_7(VAR_19,VAR_19,32-VAR_20);
 }
}
