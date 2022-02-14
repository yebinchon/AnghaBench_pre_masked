
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at91_cf_socket {unsigned int present; int socket; TYPE_1__* board; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int det_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct at91_cf_socket*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct at91_cf_socket *VAR_5 = VAR_4;

 if (VAR_3 == VAR_5->board->det_pin) {
  unsigned VAR_6 = FUNC_0(VAR_5);


  if (VAR_6 != VAR_5->present) {
   VAR_5->present = VAR_6;
   FUNC_2("%s: card %s\n", VAR_2,
     VAR_6 ? "present" : "gone");
   FUNC_1(&VAR_5->socket, VAR_1);
  }
 }

 return VAR_0;
}
