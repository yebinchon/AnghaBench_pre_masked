
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ pad; int fork_type; void* start_block; void* cnid; } ;
struct TYPE_5__ {TYPE_1__ ext; int key_len; } ;
typedef TYPE_2__ hfsplus_btree_key ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(hfsplus_btree_key *VAR_1, u32 VAR_2,
      u32 VAR_3, u8 VAR_4)
{
 VAR_1->key_len = FUNC_0(VAR_0 - 2);
 VAR_1->ext.cnid = FUNC_1(VAR_2);
 VAR_1->ext.start_block = FUNC_1(VAR_3);
 VAR_1->ext.fork_type = VAR_4;
 VAR_1->ext.pad = 0;
}
