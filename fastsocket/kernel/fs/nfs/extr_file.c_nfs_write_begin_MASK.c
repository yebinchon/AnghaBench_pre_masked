
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_12__ {TYPE_4__* dentry; } ;
struct file {TYPE_5__ f_path; } ;
struct address_space {TYPE_7__* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_14__ {int i_ino; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_11__ {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_9__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ,int ,int ,unsigned int,long long) ;
 struct page* FUNC_2 (struct address_space*,int,unsigned int) ;
 int FUNC_3 (struct file*,struct page*) ;
 int FUNC_4 (struct file*,struct page*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct file*,struct page*,int,unsigned int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_6, struct address_space *VAR_7,
   loff_t VAR_8, unsigned VAR_9, unsigned VAR_10,
   struct page **VAR_11, void **VAR_12)
{
 int VAR_13;
 pgoff_t VAR_14 = VAR_8 >> VAR_3;
 struct page *VAR_15;
 int VAR_16 = 0;

 FUNC_1(VAR_2, "NFS: write_begin(%s/%s(%ld), %u@%lld)\n",
  VAR_6->f_path.dentry->d_parent->d_name.name,
  VAR_6->f_path.dentry->d_name.name,
  VAR_7->host->i_ino, VAR_9, (long long) VAR_8);

start:




 VAR_13 = FUNC_8(&FUNC_0(VAR_7->host)->flags, VAR_1,
   VAR_5, VAR_4);
 if (VAR_13)
  return VAR_13;

 VAR_15 = FUNC_2(VAR_7, VAR_14, VAR_10);
 if (!VAR_15)
  return -VAR_0;
 *VAR_11 = VAR_15;

 VAR_13 = FUNC_3(VAR_6, VAR_15);
 if (VAR_13) {
  FUNC_7(VAR_15);
  FUNC_6(VAR_15);
 } else if (!VAR_16 &&
     FUNC_5(VAR_6, VAR_15, VAR_8, VAR_9)) {
  VAR_16 = 1;
  VAR_13 = FUNC_4(VAR_6, VAR_15);
  FUNC_6(VAR_15);
  if (!VAR_13)
   goto start;
 }
 return VAR_13;
}
