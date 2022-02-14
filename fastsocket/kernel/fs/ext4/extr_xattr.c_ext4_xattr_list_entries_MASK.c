
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {size_t (* list ) (struct inode*,char*,size_t,int ,int ) ;} ;
struct inode {int dummy; } ;
struct ext4_xattr_entry {int e_name_len; int e_name; int e_name_index; } ;


 int VAR_0 ;
 struct ext4_xattr_entry* FUNC_0 (struct ext4_xattr_entry*) ;
 int FUNC_1 (struct ext4_xattr_entry*) ;
 struct xattr_handler* FUNC_2 (int ) ;
 size_t FUNC_3 (struct inode*,char*,size_t,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_1, struct ext4_xattr_entry *VAR_2,
   char *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = VAR_4;

 for (; !FUNC_1(VAR_2); VAR_2 = FUNC_0(VAR_2)) {
  struct xattr_handler *VAR_6 =
   FUNC_2(VAR_2->e_name_index);

  if (VAR_6) {
   size_t VAR_7 = VAR_6->list(VAR_1, VAR_3, VAR_5,
          VAR_2->e_name,
          VAR_2->e_name_len);
   if (VAR_3) {
    if (VAR_7 > VAR_5)
     return -VAR_0;
    VAR_3 += VAR_7;
   }
   VAR_5 -= VAR_7;
  }
 }
 return VAR_4 - VAR_5;
}
