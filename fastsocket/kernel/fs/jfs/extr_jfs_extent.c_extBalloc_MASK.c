
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jfs_sb_info {int nbperpage; struct bmap* bmap; } ;
struct jfs_inode_info {scalar_t__ fileset; int active_ag; int ag_lock; } ;
struct inode {int i_mode; int i_sb; } ;
struct bmap {int db_maxfreebud; int * db_active; } ;
typedef int s64 ;


 int FUNC_0 (int,struct jfs_sb_info*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 struct jfs_sb_info* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int,int,int*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_2, s64 VAR_3, s64 * VAR_4, s64 * VAR_5)
{
 struct jfs_inode_info *VAR_6 = FUNC_1(VAR_2);
 struct jfs_sb_info *VAR_7 = FUNC_2(VAR_2->i_sb);
 s64 VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13 = VAR_7->nbperpage;
 struct bmap *VAR_14 = VAR_7->bmap;
 int VAR_15;







 VAR_11 = (s64) 1 << VAR_14->db_maxfreebud;
 if (*VAR_4 >= VAR_11 && *VAR_4 > VAR_13)
  VAR_8 = VAR_9 = (VAR_11 > VAR_13) ? VAR_11 : VAR_13;
 else
  VAR_8 = VAR_9 = *VAR_4;


 while ((VAR_12 = FUNC_6(VAR_2, VAR_3, VAR_8, &VAR_10)) != 0) {



  if (VAR_12 != -VAR_0)
   return (VAR_12);


  VAR_8 = FUNC_8(VAR_9, FUNC_7(VAR_8));


  if (VAR_8 < VAR_13)
   return (VAR_12);
 }

 *VAR_4 = VAR_8;
 *VAR_5 = VAR_10;

 if (FUNC_3(VAR_2->i_mode) && (VAR_6->fileset == VAR_1)) {
  VAR_15 = FUNC_0(VAR_10, VAR_7);
  FUNC_9(&VAR_6->ag_lock);
  if (VAR_6->active_ag == -1) {
   FUNC_5(&VAR_14->db_active[VAR_15]);
   VAR_6->active_ag = VAR_15;
  } else if (VAR_6->active_ag != VAR_15) {
   FUNC_4(&VAR_14->db_active[VAR_6->active_ag]);
   FUNC_5(&VAR_14->db_active[VAR_15]);
   VAR_6->active_ag = VAR_15;
  }
  FUNC_10(&VAR_6->ag_lock);
 }

 return (0);
}
