
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {scalar_t__ num; scalar_t__ max; int rvq; scalar_t__ big_packets; scalar_t__ mergeable_rx_bufs; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct virtnet_info*,int ) ;
 int FUNC_1 (struct virtnet_info*,int ) ;
 int FUNC_2 (struct virtnet_info*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct virtnet_info *VAR_1, gfp_t VAR_2)
{
 int VAR_3;
 bool VAR_4;

 do {
  if (VAR_1->mergeable_rx_bufs)
   VAR_3 = FUNC_1(VAR_1, VAR_2);
  else if (VAR_1->big_packets)
   VAR_3 = FUNC_0(VAR_1, VAR_2);
  else
   VAR_3 = FUNC_2(VAR_1, VAR_2);

  VAR_4 = VAR_3 == -VAR_0;
  if (VAR_3 < 0)
   break;
  ++VAR_1->num;
 } while (VAR_3 > 0);
 if (FUNC_3(VAR_1->num > VAR_1->max))
  VAR_1->max = VAR_1->num;
 FUNC_4(VAR_1->rvq);
 return !VAR_4;
}
