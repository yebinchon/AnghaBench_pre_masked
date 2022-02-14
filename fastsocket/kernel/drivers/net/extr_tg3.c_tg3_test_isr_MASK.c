
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3_napi {struct tg3_hw_status* hw_status; struct tg3* tp; } ;
struct tg3_hw_status {int status; } ;
struct tg3 {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tg3*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct tg3_napi *VAR_5 = VAR_4;
 struct tg3 *VAR_6 = VAR_5->tp;
 struct tg3_hw_status *VAR_7 = VAR_5->hw_status;

 if ((VAR_7->status & VAR_1) ||
     !(FUNC_2(VAR_2) & VAR_0)) {
  FUNC_1(VAR_6);
  return FUNC_0(1);
 }
 return FUNC_0(0);
}
