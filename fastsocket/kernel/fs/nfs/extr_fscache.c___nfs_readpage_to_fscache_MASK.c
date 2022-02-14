
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int flags; int index; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int fscache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*,struct page*,struct page*,int ,int,...) ;
 int FUNC_2 (int ,struct page*) ;
 int FUNC_3 (int ,struct page*,int ) ;
 int FUNC_4 (struct inode*,int ,int) ;

void FUNC_5(struct inode *VAR_5, struct page *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_0,
   "NFS: readpage_to_fscache(fsc:%p/p:%p(i:%lx f:%lx)/%d)\n",
   FUNC_0(VAR_5)->fscache, VAR_6, VAR_6->index, VAR_6->flags, VAR_7);

 VAR_8 = FUNC_3(FUNC_0(VAR_5)->fscache, VAR_6, VAR_1);
 FUNC_1(VAR_0,
   "NFS:     readpage_to_fscache: p:%p(i:%lu f:%lx) ret %d\n",
   VAR_6, VAR_6->index, VAR_6->flags, VAR_8);

 if (VAR_8 != 0) {
  FUNC_2(FUNC_0(VAR_5)->fscache, VAR_6);
  FUNC_4(VAR_5,
          VAR_3, 1);
  FUNC_4(VAR_5, VAR_2, 1);
 } else {
  FUNC_4(VAR_5,
          VAR_4, 1);
 }
}
