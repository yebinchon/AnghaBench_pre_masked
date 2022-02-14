
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct metapage {scalar_t__ data; } ;
struct jfs_sb_info {int nbperpage; struct bmap* bmap; struct inode* ipbmap; } ;
struct inode {int i_sb; } ;
struct dmap {int dummy; } ;
struct bmap {int db_mapsize; int db_agsize; int db_l2nbperpage; } ;
typedef int s64 ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 struct jfs_sb_info* FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct bmap*,struct dmap*,int,int) ;
 int FUNC_5 (int ,char*) ;
 struct metapage* FUNC_6 (struct inode*,int,int ,int ) ;
 int FUNC_7 (struct metapage*) ;
 int FUNC_8 (struct metapage*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5, s64 VAR_6, s64 VAR_7, s64 VAR_8)
{
 struct jfs_sb_info *VAR_9 = FUNC_3(VAR_5->i_sb);
 s64 VAR_10, VAR_11, VAR_12;
 uint VAR_13;
 struct metapage *VAR_14;
 struct dmap *VAR_15;
 int VAR_16;
 struct inode *VAR_17 = VAR_9->ipbmap;
 struct bmap *VAR_18;




 if (((VAR_13 = VAR_6 & (VAR_9->nbperpage - 1))) &&
     (VAR_13 + VAR_7 + VAR_8 > VAR_9->nbperpage))
  return -VAR_2;


 VAR_11 = VAR_6 + VAR_7 - 1;




 VAR_12 = VAR_11 + 1;

 FUNC_1(VAR_17, VAR_4);


 VAR_18 = VAR_9->bmap;
 if (VAR_11 < 0 || VAR_11 >= VAR_18->db_mapsize) {
  FUNC_2(VAR_17);
  FUNC_5(VAR_5->i_sb,
     "dbExtend: the block is outside the filesystem");
  return -VAR_1;
 }
 if (VAR_8 > VAR_0 || VAR_12 >= VAR_18->db_mapsize ||
     (VAR_12 & (VAR_18->db_agsize - 1)) == 0) {
  FUNC_2(VAR_17);
  return -VAR_2;
 }




 VAR_10 = FUNC_0(VAR_12, VAR_18->db_l2nbperpage);
 VAR_14 = FUNC_6(VAR_17, VAR_10, VAR_3, 0);
 if (VAR_14 == ((void*)0)) {
  FUNC_2(VAR_17);
  return -VAR_1;
 }

 VAR_15 = (struct dmap *) VAR_14->data;




 VAR_16 = FUNC_4(VAR_18, VAR_15, VAR_12, (int) VAR_8);

 FUNC_2(VAR_17);


 if (VAR_16 == 0)
  FUNC_8(VAR_14);
 else

  FUNC_7(VAR_14);


 return (VAR_16);
}
