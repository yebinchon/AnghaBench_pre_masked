
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_leaf {scalar_t__ lf_entries; int lf_next; scalar_t__ lf_depth; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_dirent {int dummy; } ;
struct dirent_gather {unsigned int offset; struct gfs2_dirent const** pdent; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_size; scalar_t__ b_data; } ;
typedef int filldir_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 struct gfs2_sbd* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct gfs2_dirent const*) ;
 int FUNC_4 (struct gfs2_dirent const*) ;
 unsigned int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct gfs2_inode*,scalar_t__*,void*,int ,struct gfs2_dirent const**,unsigned int,int*) ;
 int FUNC_9 (struct gfs2_sbd*,char*,unsigned long long,unsigned int,unsigned int) ;
 int FUNC_10 (struct gfs2_inode*,scalar_t__,struct buffer_head**) ;
 struct buffer_head** FUNC_11 (unsigned int) ;
 int VAR_2 ;
 struct gfs2_dirent* FUNC_12 (struct inode*,scalar_t__,int ,int ,int *,struct dirent_gather*) ;
 int FUNC_13 (struct buffer_head**) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_3, u64 *VAR_4, void *VAR_5,
         filldir_t VAR_6, int *VAR_7, unsigned *VAR_8,
         u64 VAR_9)
{
 struct gfs2_inode *VAR_10 = FUNC_1(VAR_3);
 struct gfs2_sbd *VAR_11 = FUNC_2(VAR_3);
 struct buffer_head *VAR_12;
 struct gfs2_leaf *VAR_13;
 unsigned VAR_14 = 0, VAR_15 = 0;
 unsigned VAR_16 = 0;
 const struct gfs2_dirent **VAR_17, *VAR_18;
 struct dirent_gather VAR_19;
 struct buffer_head **VAR_20;
 int VAR_21 = 0;
 int VAR_22, VAR_23;
 u64 VAR_24 = VAR_9;

 do {
  VAR_22 = FUNC_10(VAR_10, VAR_24, &VAR_12);
  if (VAR_22)
   goto out;
  VAR_13 = (struct gfs2_leaf *)VAR_12->b_data;
  if (VAR_16 == 0)
   *VAR_8 = FUNC_5(VAR_13->lf_depth);
  VAR_14 += FUNC_5(VAR_13->lf_entries);
  VAR_16++;
  VAR_24 = FUNC_6(VAR_13->lf_next);
  FUNC_7(VAR_12);
 } while(VAR_24);

 if (!VAR_14)
  return 0;

 VAR_22 = -VAR_1;






 VAR_20 = FUNC_11((VAR_16 + VAR_14 + 99) * sizeof(void *));
 if (!VAR_20)
  goto out;
 VAR_17 = (const struct gfs2_dirent **)(VAR_20 + VAR_16);
 VAR_19.pdent = VAR_17;
 VAR_19.offset = 0;
 VAR_24 = VAR_9;

 do {
  VAR_22 = FUNC_10(VAR_10, VAR_24, &VAR_12);
  if (VAR_22)
   goto out_free;
  VAR_13 = (struct gfs2_leaf *)VAR_12->b_data;
  VAR_24 = FUNC_6(VAR_13->lf_next);
  if (VAR_13->lf_entries) {
   VAR_15 += FUNC_5(VAR_13->lf_entries);
   VAR_18 = FUNC_12(VAR_3, VAR_12->b_data, VAR_12->b_size,
      VAR_2, ((void*)0), &VAR_19);
   VAR_22 = FUNC_4(VAR_18);
   if (FUNC_3(VAR_18))
    goto out_free;
   if (VAR_15 != VAR_19.offset) {
    FUNC_9(VAR_11, "Number of entries corrupt in dir "
      "leaf %llu, entries2 (%u) != "
      "g.offset (%u)\n",
     (unsigned long long)VAR_12->b_blocknr,
     VAR_15, VAR_19.offset);

    VAR_22 = -VAR_0;
    goto out_free;
   }
   VAR_22 = 0;
   VAR_20[VAR_21++] = VAR_12;
  } else {
   FUNC_7(VAR_12);
  }
 } while(VAR_24);

 FUNC_0(VAR_15 != VAR_14);
 VAR_22 = FUNC_8(VAR_10, VAR_4, VAR_5, VAR_6, VAR_17,
    VAR_14, VAR_7);
out_free:
 for(VAR_23 = 0; VAR_23 < VAR_21; VAR_23++)
  FUNC_7(VAR_20[VAR_23]);
 FUNC_13(VAR_20);
out:
 return VAR_22;
}
