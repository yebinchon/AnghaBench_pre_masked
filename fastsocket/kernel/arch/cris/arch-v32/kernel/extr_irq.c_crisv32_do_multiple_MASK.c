
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,struct pt_regs*) ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;

void
FUNC_6(struct pt_regs* VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12[VAR_2];
 int VAR_13;
 int VAR_14;

 VAR_10 = FUNC_5();




 FUNC_3();

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {

  VAR_12[VAR_14] = FUNC_0(VAR_5, VAR_6[VAR_10],
   VAR_7, VAR_14);


  VAR_11 = FUNC_0(VAR_5, VAR_6[VAR_10], VAR_8, VAR_14);
  VAR_11 &= ~VAR_12[VAR_14];






  if ((VAR_14 == 0) && (VAR_12[0] & VAR_4))
   VAR_11 |= VAR_4;


  FUNC_1(VAR_5, VAR_6[VAR_10], VAR_8, VAR_14, VAR_11);
  if ((VAR_14 == 0) && (VAR_12[VAR_14] & VAR_4)) {
    VAR_12[VAR_14] &= ~VAR_4;
    FUNC_2(VAR_3, VAR_9);
  }

 }







 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  for (VAR_13 = 0; VAR_13 < 32; VAR_13++) {
   if (VAR_12[VAR_14] & (1 << VAR_13))
    FUNC_2(VAR_13 + VAR_0 + VAR_14*32, VAR_9);
  }
 }


 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  VAR_11 = FUNC_0(VAR_5, VAR_6[VAR_10], VAR_8, VAR_14);
  VAR_11 |= VAR_12[VAR_14];
  FUNC_1(VAR_5, VAR_6[VAR_10], VAR_8, VAR_14, VAR_11);
 }


 FUNC_4();
}
