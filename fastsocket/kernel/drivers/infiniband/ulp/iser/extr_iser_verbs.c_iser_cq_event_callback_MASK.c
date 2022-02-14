
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_event {int event; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct ib_event *VAR_0, void *VAR_1)
{
 FUNC_0("got cq event %d \n", VAR_0->event);
}
