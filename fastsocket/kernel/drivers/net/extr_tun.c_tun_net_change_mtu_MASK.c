
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ hard_header_len; int mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct net_device *VAR_3, int VAR_4)
{
 if (VAR_4 < VAR_2 || VAR_4 + VAR_3->hard_header_len > VAR_1)
  return -VAR_0;
 VAR_3->mtu = VAR_4;
 return 0;
}
