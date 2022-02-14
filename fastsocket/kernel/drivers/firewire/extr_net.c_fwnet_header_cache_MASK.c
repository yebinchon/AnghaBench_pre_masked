
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int addr_len; } ;
struct neighbour {int ha; struct net_device* dev; } ;
struct hh_cache {scalar_t__ hh_type; int hh_len; scalar_t__ hh_data; } ;
struct fwnet_header {scalar_t__ h_proto; int h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct neighbour *VAR_2,
         struct hh_cache *VAR_3)
{
 struct net_device *VAR_4;
 struct fwnet_header *VAR_5;

 if (VAR_3->hh_type == FUNC_0(VAR_0))
  return -1;
 VAR_4 = VAR_2->dev;
 VAR_5 = (struct fwnet_header *)((u8 *)VAR_3->hh_data + 16 - sizeof(*VAR_5));
 VAR_5->h_proto = VAR_3->hh_type;
 FUNC_1(VAR_5->h_dest, VAR_2->ha, VAR_4->addr_len);
 VAR_3->hh_len = VAR_1;

 return 0;
}
