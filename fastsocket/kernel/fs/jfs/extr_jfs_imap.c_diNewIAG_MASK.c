
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct super_block {int dummy; } ;
struct metapage {scalar_t__ data; } ;
struct jfs_sb_info {int nbperpage; int l2nbperpage; } ;
struct inomap {int im_freeiag; scalar_t__ im_nextiag; struct inode* im_ipimap; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct iag {void* iagfree; void** inosmap; void* nfreeexts; scalar_t__ nfreeinos; void* extfreeback; void* extfreefwd; void* inofreeback; void* inofreefwd; void* iagnum; } ;
typedef int s64 ;
struct TYPE_2__ {int commit_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inomap*) ;
 int FUNC_1 (struct inomap*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 TYPE_1__* FUNC_7 (struct inode*) ;
 struct jfs_sb_info* FUNC_8 (struct super_block*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct inode*,int ,int ,int *) ;
 int FUNC_11 (struct inode*,int ,int ) ;
 int FUNC_12 (struct inomap*,int,struct metapage**) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct super_block*,int ,int,int *) ;
 int FUNC_15 (struct metapage*) ;
 struct metapage* FUNC_16 (struct inode*,int ,int,int ) ;
 int FUNC_17 (struct inode*,int) ;
 int FUNC_18 (struct super_block*,char*) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (struct iag*,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (struct super_block*,int ) ;
 int FUNC_25 (int ,int,struct inode**,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ,struct inode*,int ,int ,int,int *,int ) ;
 int FUNC_28 (int ,struct inode*,int,int ) ;

__attribute__((used)) static int
FUNC_29(struct inomap * VAR_11, int *VAR_12, int VAR_13, struct metapage ** VAR_14)
{
 int VAR_15;
 int VAR_16, VAR_17, VAR_18;
 struct inode *VAR_19;
 struct super_block *VAR_20;
 struct jfs_sb_info *VAR_21;
 struct metapage *VAR_22;
 struct iag *VAR_23;
 s64 VAR_24 = 0;
 s64 VAR_25;
 tid_t VAR_26;
 struct inode *VAR_27[1];


 VAR_19 = VAR_11->im_ipimap;
 VAR_20 = VAR_19->i_sb;
 VAR_21 = FUNC_8(VAR_20);


 FUNC_0(VAR_11);




 if (VAR_11->im_freeiag >= 0) {

  VAR_16 = VAR_11->im_freeiag;


  VAR_25 = FUNC_2(VAR_16, VAR_21->l2nbperpage);
 } else {





  FUNC_5(VAR_19, VAR_9);

  if (VAR_19->i_size >> VAR_5 != VAR_11->im_nextiag + 1) {
   FUNC_6(VAR_19);
   FUNC_1(VAR_11);
   FUNC_18(VAR_11->im_ipimap->i_sb,
      "diNewIAG: ipimap->i_size is wrong");
   return -VAR_2;
  }



  VAR_16 = VAR_11->im_nextiag;




  if (VAR_16 > (VAR_6 - 1)) {

   FUNC_6(VAR_19);

   VAR_15 = -VAR_3;
   goto out;
  }





  VAR_25 = FUNC_2(VAR_16, VAR_21->l2nbperpage);


  VAR_18 = VAR_21->nbperpage;
  if ((VAR_15 = FUNC_10(VAR_19, 0, (s64) VAR_18, &VAR_24))) {

   FUNC_6(VAR_19);

   goto out;
  }





  VAR_26 = FUNC_24(VAR_20, VAR_0);
  FUNC_21(&FUNC_7(VAR_19)->commit_mutex);


  if ((VAR_15 =
       FUNC_27(VAR_26, VAR_19, 0, VAR_25, VAR_18, &VAR_24, 0))) {
   FUNC_26(VAR_26);
   FUNC_22(&FUNC_7(VAR_19)->commit_mutex);



   FUNC_11(VAR_19, VAR_24, (s64) VAR_18);


   FUNC_6(VAR_19);

   goto out;
  }


  VAR_19->i_size += VAR_8;
  FUNC_17(VAR_19, VAR_8);


  VAR_22 = FUNC_16(VAR_19, VAR_25, VAR_8, 0);
  if (!VAR_22) {




   FUNC_28(VAR_26, VAR_19, VAR_19->i_size - VAR_8,
       VAR_1);

   FUNC_23(VAR_26, 0);
   FUNC_26(VAR_26);
   FUNC_22(&FUNC_7(VAR_19)->commit_mutex);


   FUNC_6(VAR_19);

   VAR_15 = -VAR_2;
   goto out;
  }
  VAR_23 = (struct iag *) VAR_22->data;


  FUNC_20(VAR_23, 0, sizeof(struct iag));
  VAR_23->iagnum = FUNC_9(VAR_16);
  VAR_23->inofreefwd = VAR_23->inofreeback = FUNC_9(-1);
  VAR_23->extfreefwd = VAR_23->extfreeback = FUNC_9(-1);
  VAR_23->iagfree = FUNC_9(-1);
  VAR_23->nfreeinos = 0;
  VAR_23->nfreeexts = FUNC_9(VAR_4);




  for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++)
   VAR_23->inosmap[VAR_17] = FUNC_9(VAR_7);




  FUNC_15(VAR_22);






  VAR_27[0] = VAR_19;
  VAR_15 = FUNC_25(VAR_26, 1, &VAR_27[0], VAR_0);

  FUNC_26(VAR_26);
  FUNC_22(&FUNC_7(VAR_19)->commit_mutex);

  FUNC_14(VAR_20, VAR_25, VAR_18, &VAR_24);


  VAR_11->im_nextiag += 1;




  VAR_11->im_freeiag = VAR_16;




  FUNC_13(VAR_19);


  FUNC_6(VAR_19);
 }


 FUNC_3(VAR_19, VAR_9);


 if ((VAR_15 = FUNC_12(VAR_11, VAR_16, &VAR_22))) {
  FUNC_4(VAR_19);
  VAR_15 = -VAR_2;
  goto out;
 }
 VAR_23 = (struct iag *) VAR_22->data;


 VAR_11->im_freeiag = FUNC_19(VAR_23->iagfree);
 VAR_23->iagfree = FUNC_9(-1);


 *VAR_12 = VAR_16;
 *VAR_14 = VAR_22;

      out:

 FUNC_1(VAR_11);

 return (VAR_15);
}
