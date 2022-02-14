
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uic {int dummy; } ;
struct irq_host {struct uic* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct uic*) ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct irq_host *VAR_3, unsigned int VAR_4,
   irq_hw_number_t VAR_5)
{
 struct uic *VAR_6 = VAR_3->host_data;

 FUNC_1(VAR_4, VAR_6);


 FUNC_0(VAR_4, &VAR_2, VAR_1);


 FUNC_2(VAR_4, VAR_0);

 return 0;
}
