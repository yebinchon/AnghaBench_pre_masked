
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attributes; } ;
struct ncp_entry_info {TYPE_1__ i; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int nwattr; int opened; scalar_t__ flags; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,struct ncp_entry_info*) ;
 int FUNC_3 (struct inode*,TYPE_1__*) ;
 int FUNC_4 (struct inode*,struct ncp_entry_info*) ;

void FUNC_5(struct inode* VAR_0, struct ncp_entry_info *VAR_1)
{
 FUNC_0(VAR_0)->flags = 0;
 if (!FUNC_1(&FUNC_0(VAR_0)->opened)) {
  FUNC_0(VAR_0)->nwattr = VAR_1->i.attributes;
  FUNC_2(VAR_0, VAR_1);
 }

 FUNC_3(VAR_0, &VAR_1->i);
 FUNC_4(VAR_0, VAR_1);
}
