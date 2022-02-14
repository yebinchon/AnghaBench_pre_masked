
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int events; int tq_work; int event_lock; } ;
typedef TYPE_1__ vrc4173_socket_t ;
typedef int uint16_t ;


 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(int VAR_1, void *VAR_2)
{
 vrc4173_socket_t *VAR_3 = (vrc4173_socket_t *)VAR_2;
 uint16_t VAR_4;

 FUNC_0(&VAR_3->tq_work, VAR_0, VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_3(&VAR_3->event_lock);
  VAR_3->events |= VAR_4;
  FUNC_4(&VAR_3->event_lock);
  FUNC_2(&VAR_3->tq_work);
 }
}
