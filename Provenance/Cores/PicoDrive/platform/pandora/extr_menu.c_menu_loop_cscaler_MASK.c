
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scaling; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int FUNC_0 (unsigned int,int *,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,int,int,int) ;
 int FUNC_6 (int,int,char*,int,int) ;

__attribute__((used)) static int FUNC_7(int VAR_16, int VAR_17)
{
 unsigned int VAR_18;

 VAR_8.scaling = VAR_7;

 FUNC_5(1, VAR_11, VAR_12, VAR_10, VAR_9);
 FUNC_4();

 for (;;)
 {
  FUNC_2(0, 1);
  FUNC_1(VAR_14, 0, VAR_15 * VAR_13 * 2);
  FUNC_6(2, 480 - 18, "%dx%d | d-pad to resize, R+d-pad to move", VAR_10, VAR_9);
  FUNC_3();

  VAR_18 = FUNC_0(VAR_6|VAR_0|VAR_1|VAR_5
       |VAR_4|VAR_3|VAR_2, ((void*)0), 40);
  if (VAR_18 & VAR_6) VAR_12--;
  if (VAR_18 & VAR_0) VAR_12++;
  if (VAR_18 & VAR_1) VAR_11--;
  if (VAR_18 & VAR_5) VAR_11++;
  if (!(VAR_18 & VAR_4)) {
   if (VAR_18 & VAR_6) VAR_9 += 2;
   if (VAR_18 & VAR_0) VAR_9 -= 2;
   if (VAR_18 & VAR_1) VAR_10 += 2;
   if (VAR_18 & VAR_5) VAR_10 -= 2;
  }
  if (VAR_18 & (VAR_3|VAR_2))
   break;

  if (VAR_18 & (VAR_6|VAR_0|VAR_1|VAR_5)) {
   if (VAR_11 < 0) VAR_11 = 0;
   if (VAR_11 > 640) VAR_11 = 640;
   if (VAR_12 < 0) VAR_12 = 0;
   if (VAR_12 > 420) VAR_12 = 420;
   if (VAR_10 < 160) VAR_10 = 160;
   if (VAR_9 < 60) VAR_9 = 60;
   if (VAR_11 + VAR_10 > 800)
    VAR_10 = 800 - VAR_11;
   if (VAR_12 + VAR_9 > 480)
    VAR_9 = 480 - VAR_12;
   FUNC_5(1, VAR_11, VAR_12, VAR_10, VAR_9);
  }
 }

 FUNC_5(0, VAR_11, VAR_12, VAR_10, VAR_9);

 return 0;
}
