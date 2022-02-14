
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_fattr {TYPE_1__* owner_name; int valid; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nfs_fattr *VAR_1)
{
 VAR_1->valid &= ~VAR_0;
 FUNC_0(VAR_1->owner_name->data);
}
