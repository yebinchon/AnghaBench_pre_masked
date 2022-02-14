
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_host {int host_data; } ;
typedef size_t irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static int FUNC_2(struct irq_host *VAR_7, unsigned int VAR_8,
      irq_hw_number_t VAR_9)
{
 FUNC_1(VAR_8, VAR_7->host_data);

 if (VAR_6[VAR_9] == VAR_0 ||
     VAR_6[VAR_9] == VAR_1) {
  FUNC_0(VAR_8, &VAR_5,
   VAR_3);
 } else {
  FUNC_0(VAR_8, &VAR_4,
   VAR_2);
 }
 return 0;
}
