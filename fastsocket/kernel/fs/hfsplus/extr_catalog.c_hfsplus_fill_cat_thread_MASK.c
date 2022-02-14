
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
struct TYPE_7__ {int length; } ;
struct TYPE_5__ {TYPE_4__ nodeName; int parentID; scalar_t__ reserved; } ;
struct TYPE_6__ {TYPE_1__ thread; int type; } ;
typedef TYPE_2__ hfsplus_cat_entry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0,
       hfsplus_cat_entry *VAR_1, int VAR_2,
       u32 VAR_3, struct qstr *VAR_4)
{
 VAR_1->type = FUNC_1(VAR_2);
 VAR_1->thread.reserved = 0;
 VAR_1->thread.parentID = FUNC_2(VAR_3);
 FUNC_3(VAR_0, &VAR_1->thread.nodeName, VAR_4->name, VAR_4->len);
 return 10 + FUNC_0(VAR_1->thread.nodeName.length) * 2;
}
