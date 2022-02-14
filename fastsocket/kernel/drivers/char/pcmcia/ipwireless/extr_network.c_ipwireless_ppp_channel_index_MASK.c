
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_network {int lock; int * ppp_channel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ipw_network *VAR_0)
{
 int VAR_1 = -1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 if (VAR_0->ppp_channel != ((void*)0))
  VAR_1 = FUNC_0(VAR_0->ppp_channel);
 FUNC_2(&VAR_0->lock, VAR_2);

 return VAR_1;
}
