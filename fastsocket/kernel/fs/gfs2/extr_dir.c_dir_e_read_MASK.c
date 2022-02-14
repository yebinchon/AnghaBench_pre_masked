
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_depth; int * i_hash_cache; } ;
struct file_ra_state {scalar_t__ start; } ;
typedef int filldir_t ;
typedef int __be64 ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct gfs2_inode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int *,void*,int ,int*,unsigned int*,int ) ;
 int FUNC_7 (struct inode*,int,int,struct file_ra_state*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0, u64 *VAR_1, void *VAR_2,
        filldir_t VAR_3, struct file_ra_state *VAR_4)
{
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_0);
 u32 VAR_6, VAR_7 = 0;
 u32 VAR_8, VAR_9;
 __be64 *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 unsigned VAR_13 = 0;

 VAR_6 = 1 << VAR_5->i_depth;
 VAR_8 = FUNC_5(*VAR_1);
 VAR_9 = VAR_8 >> (32 - VAR_5->i_depth);

 if (VAR_4 && VAR_5->i_hash_cache == ((void*)0))
  VAR_4->start = 0;
 VAR_10 = FUNC_4(VAR_5);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 FUNC_7(VAR_0, VAR_6, VAR_9, VAR_4);

 while (VAR_9 < VAR_6) {
  VAR_12 = FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3,
        &VAR_11, &VAR_13,
        FUNC_3(VAR_10[VAR_9]));
  if (VAR_12)
   break;

  VAR_7 = 1 << (VAR_5->i_depth - VAR_13);
  VAR_9 = (VAR_9 & ~(VAR_7 - 1)) + VAR_7;
 }

 if (VAR_12 > 0)
  VAR_12 = 0;
 return VAR_12;
}
