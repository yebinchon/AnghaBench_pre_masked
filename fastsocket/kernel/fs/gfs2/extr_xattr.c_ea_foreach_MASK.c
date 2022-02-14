
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_diskflags; int i_gl; int i_inode; int i_eattr; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ea_call_t ;
typedef int __be64 ;
struct TYPE_3__ {int sd_inptrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct gfs2_inode*,struct buffer_head*,int ,void*) ;
 int FUNC_4 (int ,int ,int ,struct buffer_head**) ;
 scalar_t__ FUNC_5 (TYPE_1__*,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_6(struct gfs2_inode *VAR_4, ea_call_t VAR_5, void *VAR_6)
{
 struct buffer_head *VAR_7, *VAR_8;
 __be64 *VAR_9, *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_4->i_gl, VAR_4->i_eattr, VAR_0, &VAR_7);
 if (VAR_11)
  return VAR_11;

 if (!(VAR_4->i_diskflags & VAR_2)) {
  VAR_11 = FUNC_3(VAR_4, VAR_7, VAR_5, VAR_6);
  goto out;
 }

 if (FUNC_5(FUNC_0(&VAR_4->i_inode), VAR_7, VAR_3)) {
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_9 = (__be64 *)(VAR_7->b_data + sizeof(struct gfs2_meta_header));
 VAR_10 = VAR_9 + FUNC_0(&VAR_4->i_inode)->sd_inptrs;

 for (; VAR_9 < VAR_10; VAR_9++) {
  u64 VAR_12;

  if (!*VAR_9)
   break;
  VAR_12 = FUNC_1(*VAR_9);

  VAR_11 = FUNC_4(VAR_4->i_gl, VAR_12, VAR_0, &VAR_8);
  if (VAR_11)
   break;
  VAR_11 = FUNC_3(VAR_4, VAR_8, VAR_5, VAR_6);
  FUNC_2(VAR_8);
  if (VAR_11)
   break;
 }
out:
 FUNC_2(VAR_7);
 return VAR_11;
}
