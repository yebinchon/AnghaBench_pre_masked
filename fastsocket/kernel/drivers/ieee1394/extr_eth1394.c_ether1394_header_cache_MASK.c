
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int addr_len; } ;
struct neighbour {int ha; struct net_device* dev; } ;
struct hh_cache {scalar_t__ hh_type; int hh_len; scalar_t__ hh_data; } ;
struct eth1394hdr {int h_dest; scalar_t__ h_proto; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct neighbour *VAR_2,
      struct hh_cache *VAR_3)
{
 __be16 VAR_4 = VAR_3->hh_type;
 struct net_device *VAR_5 = VAR_2->dev;
 struct eth1394hdr *VAR_6 =
  (struct eth1394hdr *)((u8 *)VAR_3->hh_data + 16 - VAR_0);

 if (VAR_4 == FUNC_0(VAR_1))
  return -1;

 VAR_6->h_proto = VAR_4;
 FUNC_1(VAR_6->h_dest, VAR_2->ha, VAR_5->addr_len);

 VAR_3->hh_len = VAR_0;
 return 0;
}
