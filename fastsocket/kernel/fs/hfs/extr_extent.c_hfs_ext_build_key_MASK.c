
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int FABN; int FNum; int FkType; } ;
struct TYPE_5__ {int key_len; TYPE_1__ ext; } ;
typedef TYPE_2__ hfs_btree_key ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(hfs_btree_key *VAR_0, u32 VAR_1, u16 VAR_2, u8 VAR_3)
{
 VAR_0->key_len = 7;
 VAR_0->ext.FkType = VAR_3;
 VAR_0->ext.FNum = FUNC_1(VAR_1);
 VAR_0->ext.FABN = FUNC_0(VAR_2);
}
