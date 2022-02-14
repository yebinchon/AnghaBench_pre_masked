
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct inode {scalar_t__ i_ino; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ mmu_private; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct file*,struct page*,int ,int ) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 struct page* FUNC_4 (struct address_space*,scalar_t__,unsigned int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (char*,int ,unsigned long long,unsigned int) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, struct address_space *VAR_4,
    loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
    struct page **VAR_8, void **VAR_9)
{
 struct inode *VAR_10 = VAR_4->host;
 struct page *VAR_11;
 pgoff_t VAR_12;
 int VAR_13 = 0;

 FUNC_6("AFFS: write_begin(%u, %llu, %llu)\n", (u32)VAR_10->i_ino, (unsigned long long)VAR_5, (unsigned long long)VAR_5 + VAR_6);
 if (VAR_5 > FUNC_0(VAR_10)->mmu_private) {



  VAR_13 = FUNC_3(VAR_10, VAR_5);
  if (VAR_13)
   return VAR_13;
 }

 VAR_12 = VAR_5 >> VAR_1;
 VAR_11 = FUNC_4(VAR_4, VAR_12, VAR_7);
 if (!VAR_11)
  return -VAR_0;
 *VAR_8 = VAR_11;

 if (FUNC_1(VAR_11))
  return 0;


 VAR_13 = FUNC_2(VAR_3, VAR_11, 0, VAR_2);
 if (VAR_13) {
  FUNC_7(VAR_11);
  FUNC_5(VAR_11);
 }
 return VAR_13;
}
