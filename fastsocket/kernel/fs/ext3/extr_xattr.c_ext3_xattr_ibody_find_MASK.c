
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext3_xattr_info {int name; int name_index; } ;
struct ext3_xattr_ibody_header {int dummy; } ;
struct TYPE_4__ {int not_found; scalar_t__ base; void* end; scalar_t__ here; scalar_t__ first; } ;
struct ext3_xattr_ibody_find {TYPE_1__ s; int iloc; } ;
struct ext3_inode {int dummy; } ;
struct TYPE_6__ {scalar_t__ i_extra_isize; int i_state; } ;
struct TYPE_5__ {int s_inode_size; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ext3_xattr_ibody_header*) ;
 struct ext3_xattr_ibody_header* FUNC_3 (struct inode*,struct ext3_inode*) ;
 struct ext3_inode* FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,void*) ;
 int FUNC_6 (scalar_t__*,int ,int ,void*,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_2, struct ext3_xattr_info *VAR_3,
        struct ext3_xattr_ibody_find *VAR_4)
{
 struct ext3_xattr_ibody_header *VAR_5;
 struct ext3_inode *VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_2)->i_extra_isize == 0)
  return 0;
 VAR_6 = FUNC_4(&VAR_4->iloc);
 VAR_5 = FUNC_3(VAR_2, VAR_6);
 VAR_4->s.base = VAR_4->s.first = FUNC_2(VAR_5);
 VAR_4->s.here = VAR_4->s.first;
 VAR_4->s.end = (void *)VAR_6 + FUNC_1(VAR_2->i_sb)->s_inode_size;
 if (FUNC_0(VAR_2)->i_state & VAR_1) {
  VAR_7 = FUNC_5(FUNC_2(VAR_5), VAR_4->s.end);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_6(&VAR_4->s.here, VAR_3->name_index,
           VAR_3->name, VAR_4->s.end -
           (void *)VAR_4->s.base, 0);
  if (VAR_7 && VAR_7 != -VAR_0)
   return VAR_7;
  VAR_4->s.not_found = VAR_7;
 }
 return 0;
}
