
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_cm_listener {int * cm_id; int listener_state; } ;
struct nes_cm_core {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nes_cm_core*,struct nes_cm_listener*,int) ;

__attribute__((used)) static int FUNC_1(struct nes_cm_core *VAR_1,
         struct nes_cm_listener *VAR_2)
{
 VAR_2->listener_state = VAR_0;
 VAR_2->cm_id = ((void*)0);
 return FUNC_0(VAR_1, VAR_2, 1);
}
