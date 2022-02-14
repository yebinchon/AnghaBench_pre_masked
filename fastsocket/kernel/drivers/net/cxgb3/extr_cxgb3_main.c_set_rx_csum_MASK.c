
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct port_info {int rx_offload; int first_qset; int nqsets; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 VAR_3)
{
 struct port_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3) {
  VAR_4->rx_offload |= VAR_1;
 } else {
  int VAR_5;

  VAR_4->rx_offload &= ~(VAR_1 | VAR_0);
  for (VAR_5 = VAR_4->first_qset; VAR_5 < VAR_4->first_qset + VAR_4->nqsets; VAR_5++)
   FUNC_1(VAR_2, VAR_5, 0);
 }
 return 0;
}
