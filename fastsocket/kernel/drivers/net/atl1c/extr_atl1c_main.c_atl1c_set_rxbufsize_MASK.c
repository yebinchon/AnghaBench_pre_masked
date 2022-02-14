
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct atl1c_adapter {int rx_buffer_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct atl1c_adapter *VAR_4,
    struct net_device *VAR_5)
{
 int VAR_6 = VAR_5->mtu;

 VAR_4->rx_buffer_len = VAR_6 > VAR_0 ?
  FUNC_0(VAR_6 + VAR_2 + VAR_1 + VAR_3, 8) : VAR_0;
}
