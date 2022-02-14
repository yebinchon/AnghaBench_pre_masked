
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef unsigned int u32 ;
struct inode {int dummy; } ;
struct gfs2_inode {int * i_hash_cache; struct gfs2_glock* i_gl; } ;
struct gfs2_glock {int dummy; } ;
struct file_ra_state {unsigned int start; } ;
struct buffer_head {int b_end_io; } ;
typedef int pgoff_t ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int VAR_3 ;
 struct buffer_head* FUNC_4 (struct gfs2_glock*,scalar_t__,int) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int,struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_4, unsigned VAR_5, u32 VAR_6,
          struct file_ra_state *VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_4);
 struct gfs2_glock *VAR_9 = VAR_8->i_gl;
 struct buffer_head *VAR_10;
 u64 VAR_11 = 0, VAR_12;
 unsigned VAR_13;


 if (!VAR_7 || VAR_6 + VAR_0 < VAR_7->start)
  return;

 VAR_7->start = FUNC_5((pgoff_t)VAR_6, VAR_7->start);
 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if (VAR_7->start >= VAR_5)
   break;

  VAR_12 = VAR_11;
  VAR_11 = FUNC_1(VAR_8->i_hash_cache[VAR_7->start]);
  VAR_7->start++;
  if (VAR_11 == VAR_12)
   continue;

  VAR_10 = FUNC_4(VAR_9, VAR_11, 1);
  if (FUNC_7(VAR_10)) {
   if (FUNC_3(VAR_10)) {
    FUNC_8(VAR_10);
    FUNC_2(VAR_10);
    continue;
   }
   VAR_10->b_end_io = VAR_3;
   FUNC_6(VAR_1 | VAR_2, VAR_10);
   continue;
  }
  FUNC_2(VAR_10);
 }
}
