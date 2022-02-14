
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int * whead; int wait; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct dst_state *VAR_0)
{
 if (VAR_0->whead) {
  FUNC_0(VAR_0->whead, &VAR_0->wait);
  VAR_0->whead = ((void*)0);
 }
}
