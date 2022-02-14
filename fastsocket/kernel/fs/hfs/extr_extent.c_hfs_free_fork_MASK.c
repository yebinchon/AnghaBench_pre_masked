
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct hfs_find_data {TYPE_2__* key; } ;
struct hfs_extent {int count; } ;
struct hfs_cat_file {struct hfs_extent* RExtRec; int RPyLen; struct hfs_extent* ExtRec; int PyLen; int FlNum; } ;
struct TYPE_6__ {int ext_tree; scalar_t__ alloc_blksz; } ;
struct TYPE_4__ {int FABN; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct hfs_find_data*,struct hfs_extent*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct hfs_find_data*) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (int ,struct hfs_find_data*) ;
 int FUNC_7 (struct super_block*,struct hfs_extent*,scalar_t__,scalar_t__) ;

int FUNC_8(struct super_block *VAR_1, struct hfs_cat_file *VAR_2, int VAR_3)
{
 struct hfs_find_data VAR_4;
 u32 VAR_5, VAR_6, VAR_7;
 u32 VAR_8 = FUNC_3(VAR_2->FlNum);
 struct hfs_extent *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_3 == VAR_0) {
  VAR_5 = FUNC_3(VAR_2->PyLen);
  VAR_9 = VAR_2->ExtRec;
 } else {
  VAR_5 = FUNC_3(VAR_2->RPyLen);
  VAR_9 = VAR_2->RExtRec;
 }
 VAR_5 /= FUNC_0(VAR_1)->alloc_blksz;
 if (!VAR_5)
  return 0;

 VAR_6 = 0;
 for (VAR_11 = 0; VAR_11 < 3; VAR_9++, VAR_11++)
  VAR_6 += FUNC_2(VAR_9[VAR_11].count);

 VAR_10 = FUNC_7(VAR_1, VAR_9, VAR_6, VAR_6);
 if (VAR_10)
  return VAR_10;
 if (VAR_5 == VAR_6)
  return 0;

 FUNC_6(FUNC_0(VAR_1)->ext_tree, &VAR_4);
 do {
  VAR_10 = FUNC_1(&VAR_4, VAR_9, VAR_8, VAR_5, VAR_3);
  if (VAR_10)
   break;
  VAR_7 = FUNC_2(VAR_4.key->ext.FABN);
  FUNC_7(VAR_1, VAR_9, VAR_5 - VAR_7, VAR_5);
  FUNC_4(&VAR_4);
  VAR_5 = VAR_7;
 } while (VAR_5 > VAR_6);
 FUNC_5(&VAR_4);

 return VAR_10;
}
