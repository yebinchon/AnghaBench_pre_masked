
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spl_t ;
typedef int kern_return_t ;
typedef TYPE_1__* alarm_t ;
struct TYPE_4__ {scalar_t__ al_status; scalar_t__ al_port; struct TYPE_4__* al_next; int al_time; int al_type; int al_port_type; struct TYPE_4__* al_prev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 alarm_t VAR_7;
 kern_return_t VAR_8;
 spl_t VAR_9;

 FUNC_1(VAR_9);
 while ((VAR_7 = VAR_5) != ((void*)0)) {
  if ((VAR_5 = VAR_7->al_next) != ((void*)0))
   VAR_5->al_prev = (alarm_t)&VAR_5;
  FUNC_2(VAR_9);

  VAR_8 = (VAR_7->al_status == VAR_0? VAR_4: VAR_3);
  if (VAR_7->al_port != VAR_2) {

   if (FUNC_0(VAR_7->al_port)) {
    FUNC_3(VAR_7->al_port, VAR_7->al_port_type, VAR_8,
              VAR_7->al_type, VAR_7->al_time);
   }

   FUNC_1(VAR_9);
   VAR_7->al_status = VAR_1;
   VAR_7->al_next = VAR_6;
   VAR_6 = VAR_7;
  }
  else
   FUNC_4("clock_alarm_deliver");
 }

 FUNC_2(VAR_9);
}
