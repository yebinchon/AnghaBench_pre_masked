
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ status_word; } ;
struct TYPE_4__ {struct TYPE_4__* next; TYPE_1__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 int VAR_7 = 0;

get_one_packet:
 if (VAR_3->status.status_word == 0) {

  if (VAR_7 == 0) {
   if (VAR_3->next->status.status_word != 0) {
    VAR_3 = VAR_3->next;
    goto real_rx;
   }
  }
  FUNC_2(FUNC_1() |
        VAR_0 | VAR_1);
  return VAR_2;
 }

real_rx:
 FUNC_0(VAR_6);
 VAR_7++;
 goto get_one_packet;
}
