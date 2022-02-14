
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spider_pic {int host; scalar_t__ regs; } ;
struct irq_desc {TYPE_1__* chip; struct spider_pic* handler_data; } ;
struct TYPE_2__ {int (* eoi ) (unsigned int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_3, struct irq_desc *VAR_4)
{
 struct spider_pic *VAR_5 = VAR_4->handler_data;
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_5->regs + VAR_2) >> 24;
 if (VAR_6 == VAR_1)
  VAR_7 = VAR_0;
 else
  VAR_7 = FUNC_2(VAR_5->host, VAR_6);
 if (VAR_7 != VAR_0)
  FUNC_0(VAR_7);
 VAR_4->chip->eoi(VAR_3);
}
