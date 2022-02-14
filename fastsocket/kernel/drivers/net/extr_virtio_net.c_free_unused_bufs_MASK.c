
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {scalar_t__ num; scalar_t__ big_packets; scalar_t__ mergeable_rx_bufs; int rvq; int svq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct virtnet_info*,void*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct virtnet_info *VAR_0)
{
 void *VAR_1;
 while (1) {
  VAR_1 = FUNC_3(VAR_0->svq);
  if (!VAR_1)
   break;
  FUNC_1(VAR_1);
 }
 while (1) {
  VAR_1 = FUNC_3(VAR_0->rvq);
  if (!VAR_1)
   break;
  if (VAR_0->mergeable_rx_bufs || VAR_0->big_packets)
   FUNC_2(VAR_0, VAR_1);
  else
   FUNC_1(VAR_1);
  --VAR_0->num;
 }
 FUNC_0(VAR_0->num != 0);
}
