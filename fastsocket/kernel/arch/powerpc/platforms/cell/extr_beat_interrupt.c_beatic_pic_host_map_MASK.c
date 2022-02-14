
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_host {int dummy; } ;
struct irq_desc {int status; } ;
typedef int irq_hw_number_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int VAR_2 ;
 struct irq_desc* FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_host *VAR_4, unsigned int VAR_5,
          irq_hw_number_t VAR_6)
{
 struct irq_desc *VAR_7 = FUNC_1(VAR_5);
 int64_t VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (VAR_8 < 0)
  return -VAR_0;

 VAR_7->status |= VAR_1;
 FUNC_2(VAR_5, &VAR_2, VAR_3);
 return 0;
}
