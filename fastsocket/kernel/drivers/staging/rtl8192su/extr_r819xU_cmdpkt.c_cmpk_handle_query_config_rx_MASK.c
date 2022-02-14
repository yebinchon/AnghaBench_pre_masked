
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int cfg_action; int cfg_type; int cfg_size; int cfg_page; int cfg_offset; int value; int mask; } ;
typedef TYPE_1__ cmpk_query_cfg_t ;



__attribute__((used)) static void
FUNC_0(
 struct net_device *VAR_0,
 u8* VAR_1)
{
 cmpk_query_cfg_t VAR_2;
 VAR_2.cfg_action = (VAR_1[4] & 0x80000000)>>31;
 VAR_2.cfg_type = (VAR_1[4] & 0x60) >> 5;
 VAR_2.cfg_size = (VAR_1[4] & 0x18) >> 3;
 VAR_2.cfg_page = (VAR_1[6] & 0x0F) >> 0;
 VAR_2.cfg_offset = VAR_1[7];
 VAR_2.value = (VAR_1[8] << 24) | (VAR_1[9] << 16) |
          (VAR_1[10] << 8) | (VAR_1[11] << 0);
 VAR_2.mask = (VAR_1[12] << 24) | (VAR_1[13] << 16) |
          (VAR_1[14] << 8) | (VAR_1[15] << 0);

}
