
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; int name; } ;
struct TYPE_6__ {TYPE_2__ CName; int ParID; } ;
struct TYPE_8__ {TYPE_1__ cat; } ;
typedef TYPE_3__ btree_key ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

int FUNC_2(const btree_key *VAR_0, const btree_key *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->cat.ParID) - FUNC_0(VAR_1->cat.ParID);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0->cat.CName.name, VAR_0->cat.CName.len,
        VAR_1->cat.CName.name, VAR_1->cat.CName.len);

 return VAR_2;
}
