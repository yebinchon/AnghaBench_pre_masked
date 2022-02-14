
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct hfsplus_unistr {int unicode; int length; } ;
struct TYPE_6__ {int unicode; void* length; } ;
struct TYPE_5__ {TYPE_2__ name; int parent; } ;
struct TYPE_7__ {void* key_len; TYPE_1__ cat; } ;
typedef TYPE_3__ hfsplus_btree_key ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(hfsplus_btree_key *VAR_0, u32 VAR_1,
          struct hfsplus_unistr *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->length);
 VAR_0->cat.parent = FUNC_2(VAR_1);
 VAR_0->cat.name.length = FUNC_1(VAR_3);
 VAR_3 *= 2;
 FUNC_3(VAR_0->cat.name.unicode, VAR_2->unicode, VAR_3);
 VAR_0->key_len = FUNC_1(6 + VAR_3);
}
