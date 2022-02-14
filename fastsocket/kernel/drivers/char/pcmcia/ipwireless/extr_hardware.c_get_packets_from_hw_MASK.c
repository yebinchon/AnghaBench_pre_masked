
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {int lock; scalar_t__ rx_ready; int blocking_rx; } ;


 int FUNC_0 (struct ipw_hardware*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ipw_hardware *VAR_0)
{
 int VAR_1 = 0;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 while (VAR_0->rx_ready && !VAR_0->blocking_rx) {
  VAR_1 = 1;
  VAR_0->rx_ready--;
  FUNC_2(&VAR_0->lock, VAR_2);

  FUNC_0(VAR_0);

  FUNC_1(&VAR_0->lock, VAR_2);
 }
 FUNC_2(&VAR_0->lock, VAR_2);

 return VAR_1;
}
