
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int i_lock; } ;
struct gfs2_inode {int i_diskflags; int i_depth; int * i_hash_cache; struct inode i_inode; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*,char*,int ,int,int) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static __be64 *FUNC_12(struct gfs2_inode *VAR_6)
{
 struct inode *VAR_7 = &VAR_6->i_inode;
 int VAR_8;
 u32 VAR_9;
 __be64 *VAR_10;

 FUNC_0(!(VAR_6->i_diskflags & VAR_3));

 VAR_10 = VAR_6->i_hash_cache;
 if (VAR_10)
  return VAR_10;

 VAR_9 = 1 << VAR_6->i_depth;
 VAR_9 *= sizeof(__be64);
 if (VAR_9 != FUNC_5(VAR_7)) {
  FUNC_3(VAR_6);
  return FUNC_1(-VAR_0);
 }

 VAR_10 = FUNC_8(VAR_9, VAR_2 | VAR_5);
 if (VAR_10 == ((void*)0))
  VAR_10 = FUNC_2(VAR_9, VAR_2, VAR_4);

 if (VAR_10 == ((void*)0))
  return FUNC_1(-VAR_1);

 VAR_8 = FUNC_4(VAR_6, (char *)VAR_10, 0, VAR_9, 1);
 if (VAR_8 < 0) {
  if (FUNC_6(VAR_10))
   FUNC_11(VAR_10);
  else
   FUNC_7(VAR_10);
  return FUNC_1(VAR_8);
 }

 FUNC_9(&VAR_7->i_lock);
 if (VAR_6->i_hash_cache) {
  if (FUNC_6(VAR_10))
   FUNC_11(VAR_10);
  else
   FUNC_7(VAR_10);
 } else {
  VAR_6->i_hash_cache = VAR_10;
 }
 FUNC_10(&VAR_7->i_lock);

 return VAR_6->i_hash_cache;
}
