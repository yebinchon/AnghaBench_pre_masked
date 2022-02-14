
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; int index; } ;
struct afs_writeback {int dummy; } ;
struct afs_vnode {int cache; } ;
struct TYPE_2__ {int host; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (char*,int ,unsigned long) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct afs_writeback*) ;
 int FUNC_10 (int ,struct page*) ;
 int FUNC_11 (int ,struct page*) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*,int ) ;

__attribute__((used)) static void FUNC_14(struct page *VAR_0, unsigned long VAR_1)
{
 struct afs_writeback *VAR_2 = (struct afs_writeback *) FUNC_12(VAR_0);

 FUNC_7("{%lu},%lu", VAR_0->index, VAR_1);

 FUNC_1(!FUNC_4(VAR_0));


 if (VAR_1 == 0) {
  if (FUNC_5(VAR_0)) {
   if (VAR_2 && !FUNC_6(VAR_0)) {
    FUNC_13(VAR_0, 0);
    FUNC_9(VAR_2);
   }

   if (!FUNC_12(VAR_0))
    FUNC_2(VAR_0);
  }
 }

 FUNC_8("");
}
