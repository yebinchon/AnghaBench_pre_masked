
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ eng_st; int queue_th; scalar_t__ reg; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_7->reg + VAR_5);
 if (!(VAR_10 & VAR_6))
  return VAR_4;

 VAR_10 &= ~VAR_6;
 FUNC_3(VAR_10, VAR_7->reg + VAR_2);
 FUNC_3(VAR_10, VAR_7->reg + VAR_5);
 FUNC_0(VAR_7->eng_st != VAR_0);
 VAR_7->eng_st = VAR_1;
 FUNC_2(VAR_7->queue_th);
 return VAR_3;
}
