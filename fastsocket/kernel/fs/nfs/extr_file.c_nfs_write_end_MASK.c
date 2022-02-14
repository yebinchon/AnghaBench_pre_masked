
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_11__ {TYPE_4__* dentry; } ;
struct file {TYPE_5__ f_path; } ;
struct address_space {TYPE_6__* host; } ;
typedef int loff_t ;
struct TYPE_12__ {int i_ino; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_10__ {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,char*,int ,int ,int ,unsigned int,long long) ;
 unsigned int FUNC_3 (struct page*) ;
 int FUNC_4 (struct file*,struct page*,unsigned int,unsigned int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,unsigned int,int) ;
 int FUNC_8 (struct page*,int ,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2, struct address_space *VAR_3,
   loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
   struct page *VAR_7, void *VAR_8)
{
 unsigned VAR_9 = VAR_4 & (VAR_1 - 1);
 int VAR_10;

 FUNC_2(VAR_0, "NFS: write_end(%s/%s(%ld), %u@%lld)\n",
  VAR_2->f_path.dentry->d_parent->d_name.name,
  VAR_2->f_path.dentry->d_name.name,
  VAR_3->host->i_ino, VAR_5, (long long) VAR_4);





 if (!FUNC_0(VAR_7)) {
  unsigned VAR_11 = FUNC_3(VAR_7);
  unsigned VAR_12 = VAR_9 + VAR_5;

  if (VAR_11 == 0) {
   FUNC_8(VAR_7, 0, VAR_9,
     VAR_12, VAR_1);
   FUNC_1(VAR_7);
  } else if (VAR_12 >= VAR_11) {
   FUNC_7(VAR_7, VAR_12, VAR_1);
   if (VAR_9 == 0)
    FUNC_1(VAR_7);
  } else
   FUNC_7(VAR_7, VAR_11, VAR_1);
 }

 VAR_10 = FUNC_4(VAR_2, VAR_7, VAR_9, VAR_6);

 FUNC_6(VAR_7);
 FUNC_5(VAR_7);

 if (VAR_10 < 0)
  return VAR_10;
 return VAR_6;
}
