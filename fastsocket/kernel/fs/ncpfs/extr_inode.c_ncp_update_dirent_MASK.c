
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirEntNum; int DosDirNum; } ;
struct ncp_entry_info {int volume; TYPE_1__ i; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int volNumber; int dirEntNum; int DosDirNum; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_0, struct ncp_entry_info *VAR_1)
{
 FUNC_0(VAR_0)->DosDirNum = VAR_1->i.DosDirNum;
 FUNC_0(VAR_0)->dirEntNum = VAR_1->i.dirEntNum;
 FUNC_0(VAR_0)->volNumber = VAR_1->volume;
}
