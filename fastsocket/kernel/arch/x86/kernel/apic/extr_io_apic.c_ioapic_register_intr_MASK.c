
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int status; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int *,int ,char*) ;

__attribute__((used)) static void FUNC_3(int VAR_8, struct irq_desc *VAR_9, unsigned long VAR_10)
{

 if ((VAR_10 == VAR_0 && FUNC_0(VAR_8)) ||
     VAR_10 == VAR_1)
  VAR_9->status |= VAR_2;
 else
  VAR_9->status &= ~VAR_2;

 if (FUNC_1(VAR_8)) {
  VAR_9->status |= VAR_3;
  if (VAR_10)
   FUNC_2(VAR_8, &VAR_7,
            VAR_5,
           "fasteoi");
  else
   FUNC_2(VAR_8, &VAR_7,
            VAR_4, "edge");
  return;
 }

 if ((VAR_10 == VAR_0 && FUNC_0(VAR_8)) ||
     VAR_10 == VAR_1)
  FUNC_2(VAR_8, &VAR_6,
           VAR_5,
           "fasteoi");
 else
  FUNC_2(VAR_8, &VAR_6,
           VAR_4, "edge");
}
