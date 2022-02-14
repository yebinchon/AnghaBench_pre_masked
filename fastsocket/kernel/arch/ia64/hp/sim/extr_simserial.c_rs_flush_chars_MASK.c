
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; scalar_t__ driver_data; } ;
struct TYPE_2__ {scalar_t__ head; scalar_t__ tail; int buf; } ;
struct async_struct {TYPE_1__ xmit; } ;


 int FUNC_0 (struct async_struct*,int *) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct async_struct *VAR_1 = (struct async_struct *)VAR_0->driver_data;

 if (VAR_1->xmit.head == VAR_1->xmit.tail || VAR_0->stopped || VAR_0->hw_stopped ||
     !VAR_1->xmit.buf)
  return;

 FUNC_0(VAR_1, ((void*)0));
}
