
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fd {int fd; struct irq_fd* next; } ;


 struct irq_fd* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

int FUNC_2(void)
{
 struct irq_fd *VAR_1;
 int VAR_2;

 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->next) {
  VAR_2 = FUNC_0(VAR_1->fd);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_1();

 return 0;
}
