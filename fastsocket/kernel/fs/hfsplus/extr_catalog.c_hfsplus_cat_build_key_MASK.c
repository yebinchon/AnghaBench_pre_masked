
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int len; int name; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_5__ {TYPE_4__ name; int parent; } ;
struct TYPE_6__ {int key_len; TYPE_1__ cat; } ;
typedef TYPE_2__ hfsplus_btree_key ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,TYPE_4__*,int ,int ) ;

void FUNC_4(struct super_block *VAR_0, hfsplus_btree_key *VAR_1,
      u32 VAR_2, struct qstr *VAR_3)
{
 int VAR_4;

 VAR_1->cat.parent = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_0, &VAR_1->cat.name, VAR_3->name, VAR_3->len);
  VAR_4 = FUNC_0(VAR_1->cat.name.length);
 } else {
  VAR_1->cat.name.length = 0;
  VAR_4 = 0;
 }
 VAR_1->key_len = FUNC_1(6 + 2 * VAR_4);
}
