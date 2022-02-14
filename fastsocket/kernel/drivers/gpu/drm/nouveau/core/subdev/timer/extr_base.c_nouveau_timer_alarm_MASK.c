
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_timer {int (* alarm ) (struct nouveau_timer*,int ,struct nouveau_alarm*) ;} ;
struct nouveau_alarm {int dummy; } ;


 struct nouveau_timer* FUNC_0 (void*) ;
 int FUNC_1 (struct nouveau_timer*,int ,struct nouveau_alarm*) ;

void
FUNC_2(void *VAR_0, u32 VAR_1, struct nouveau_alarm *VAR_2)
{
 struct nouveau_timer *VAR_3 = FUNC_0(VAR_0);
 VAR_3->alarm(VAR_3, VAR_1, VAR_2);
}
