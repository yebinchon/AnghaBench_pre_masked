
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int addr_len; } ;
struct hh_cache {scalar_t__ hh_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char const*,int ) ;

__attribute__((used)) static void FUNC_1(struct hh_cache *VAR_1,
       const struct net_device *VAR_2,
       const unsigned char * VAR_3)
{
 FUNC_0((u8 *)VAR_1->hh_data + 16 - VAR_0, VAR_3, VAR_2->addr_len);
}
