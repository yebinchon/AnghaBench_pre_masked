
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct cifs_writedata {int nr_pages; int * pages; TYPE_2__* cfile; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cifs_writedata*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct cifs_writedata *VAR_1)
{
 int VAR_2, VAR_3;
 struct inode *VAR_4 = VAR_1->cfile->dentry->d_inode;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_pages; VAR_2++) {
  FUNC_4(VAR_1->pages[VAR_2]);
  FUNC_2(VAR_1->pages[VAR_2]);
 }

 do {
  VAR_3 = FUNC_1(VAR_1);
 } while (VAR_3 == -VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_pages; VAR_2++) {
  FUNC_7(VAR_1->pages[VAR_2]);
  if (VAR_3 != 0) {
   FUNC_0(VAR_1->pages[VAR_2]);
   FUNC_3(VAR_1->pages[VAR_2]);
   FUNC_6(VAR_1->pages[VAR_2]);
  }
 }

 FUNC_5(VAR_4->i_mapping, VAR_3);
}
