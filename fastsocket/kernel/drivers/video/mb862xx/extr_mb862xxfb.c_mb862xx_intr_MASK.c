
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb862xxfb_par {scalar_t__ type; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,unsigned long) ;

irqreturn_t FUNC_2(int VAR_9, void *VAR_10)
{
 struct mb862xxfb_par *VAR_11 = (struct mb862xxfb_par *) VAR_10;
 unsigned long VAR_12, VAR_13;

 if (!VAR_11)
  return VAR_6;

 if (VAR_11->type == VAR_0) {

  VAR_12 = FUNC_0(VAR_7, VAR_2);
  VAR_13 = FUNC_0(VAR_7, VAR_1);
  if (VAR_12 == 0)
   return VAR_5;

  VAR_12 &= VAR_13;
  if (VAR_12 == 0)
   return VAR_5;


  FUNC_1(VAR_7, 0x0, VAR_12);
 } else {

  VAR_12 = FUNC_0(VAR_8, VAR_4);
  VAR_13 = FUNC_0(VAR_8, VAR_3);

  VAR_12 &= VAR_13;
  if (VAR_12 == 0)
   return VAR_5;


  FUNC_1(VAR_8, VAR_4, ~VAR_12);
 }
 return VAR_5;
}
