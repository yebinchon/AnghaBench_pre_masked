
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct metapage {scalar_t__ data; } ;
struct jfs_sb_info {int nbperpage; int l2nbperpage; struct bmap* bmap; } ;
struct inode {int i_sb; } ;
struct dmapctl {void** stree; } ;
struct dmap {int start; } ;
struct bmap {int db_mapsize; int db_agl2size; int db_agsize; int db_numag; int* db_agfree; int db_maxag; int db_nfree; void* db_maxfreebud; int db_maxlevel; } ;
typedef void* s8 ;
typedef int s64 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct jfs_sb_info* FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int) ;
 void* FUNC_6 (struct dmap*,int,int) ;
 void* FUNC_7 (struct dmapctl*,int,int) ;
 struct metapage* FUNC_8 (struct inode*,int,int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,long long,long long,long long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int) ;
 struct metapage* FUNC_13 (struct inode*,int,int ,int ) ;
 int FUNC_14 (struct metapage*) ;
 int FUNC_15 (struct metapage*) ;

int FUNC_16(struct inode *VAR_12, s64 VAR_13, s64 VAR_14)
{
 struct jfs_sb_info *VAR_15 = FUNC_4(VAR_12->i_sb);
 int VAR_16 = VAR_15->nbperpage;
 int VAR_17, VAR_18 = 1, VAR_19, VAR_20 = 1, VAR_21, VAR_22;
 s64 VAR_23;
 s64 VAR_24;
 struct metapage *VAR_25, *VAR_26, *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);
 struct dmapctl *VAR_29, *VAR_30, *VAR_31;
 struct dmap *VAR_32;
 s8 *VAR_33, *VAR_34, *VAR_35;
 struct bmap *VAR_36 = VAR_15->bmap;
 int VAR_37, VAR_38, VAR_39;
 s64 VAR_40;

 VAR_23 = VAR_13 + VAR_14;

 FUNC_10("dbExtendFS: blkno:%Ld nblocks:%Ld newsize:%Ld",
   (long long) VAR_13, (long long) VAR_14, (long long) VAR_23);
 VAR_36->db_mapsize = VAR_23;
 VAR_36->db_maxlevel = FUNC_3(VAR_36->db_mapsize);


 VAR_38 = FUNC_5(VAR_23);
 VAR_39 = VAR_36->db_agl2size;

 VAR_36->db_agl2size = VAR_38;
 VAR_36->db_agsize = 1 << VAR_38;


 VAR_37 = VAR_36->db_numag;
 VAR_36->db_numag = VAR_23 >> VAR_38;
 VAR_36->db_numag += ((u32) VAR_23 % (u32) VAR_36->db_agsize) ? 1 : 0;
 if (VAR_38 == VAR_39)
  goto extend;
 VAR_21 = 1 << (VAR_38 - VAR_39);
 VAR_40 = VAR_36->db_agfree[0];
 for (VAR_17 = 0, VAR_22 = 0; VAR_17 < VAR_37; VAR_22++) {
  VAR_36->db_agfree[VAR_22] = 0;


  for (VAR_19 = 0; VAR_19 < VAR_21 && VAR_17 < VAR_37; VAR_19++, VAR_17++) {

   VAR_36->db_agfree[VAR_22] += VAR_36->db_agfree[VAR_17];
  }
 }
 VAR_36->db_agfree[0] += VAR_40;

 for (; VAR_22 < VAR_8; VAR_22++)
  VAR_36->db_agfree[VAR_22] = 0;





 VAR_36->db_maxag = VAR_36->db_maxag / VAR_21;







      extend:

 VAR_24 = VAR_0 + VAR_16;
 VAR_26 = FUNC_13(VAR_12, VAR_24, VAR_11, 0);
 if (!VAR_26) {
  FUNC_9(VAR_12->i_sb, "dbExtendFS: L2 page could not be read");
  return -VAR_3;
 }
 VAR_29 = (struct dmapctl *) VAR_26->data;


 VAR_21 = VAR_13 >> VAR_6;
 VAR_35 = VAR_29->stree + VAR_2 + VAR_21;
 VAR_24 = FUNC_2(VAR_13, VAR_15->l2nbperpage);




 for (; VAR_21 < VAR_7; VAR_21++, VAR_24 += VAR_16) {

  if (VAR_20) {

   VAR_27 = FUNC_13(VAR_12, VAR_24, VAR_11, 0);
   if (VAR_27 == ((void*)0))
    goto errout;
   VAR_30 = (struct dmapctl *) VAR_27->data;


   VAR_19 = (VAR_13 & (VAR_10 - 1)) >> VAR_5;
   VAR_34 = VAR_30->stree + VAR_2 + VAR_19;
   VAR_24 = FUNC_1(VAR_13, VAR_15->l2nbperpage);
   VAR_20 = 0;
  } else {

   VAR_27 = FUNC_8(VAR_12, VAR_24, VAR_11, 0);
   if (VAR_27 == ((void*)0))
    goto errout;

   VAR_30 = (struct dmapctl *) VAR_27->data;


   VAR_19 = 0;
   VAR_34 = VAR_30->stree + VAR_2;
   VAR_24 += VAR_16;
  }




  for (; VAR_19 < VAR_7; VAR_19++) {

   if (VAR_18) {


    VAR_28 = FUNC_13(VAR_12, VAR_24, VAR_11, 0);
    if (VAR_28 == ((void*)0))
     goto errout;
    VAR_31 = (struct dmapctl *) VAR_28->data;


    VAR_17 = (VAR_13 & (VAR_9 - 1)) >>
        VAR_4;
    VAR_33 = VAR_31->stree + VAR_2 + VAR_17;
    VAR_24 = FUNC_0(VAR_13,
           VAR_15->l2nbperpage);
    VAR_18 = 0;
   } else {

    VAR_28 = FUNC_8(VAR_12, VAR_24, VAR_11, 0);
    if (VAR_28 == ((void*)0))
     goto errout;

    VAR_31 = (struct dmapctl *) VAR_28->data;


    VAR_17 = 0;
    VAR_33 = VAR_31->stree + VAR_2;
    VAR_24 += VAR_16;
   }




   for (; VAR_17 < VAR_7; VAR_17++) {




    if ((VAR_22 = VAR_13 & (VAR_1 - 1))) {

     VAR_25 = FUNC_13(VAR_12, VAR_24,
          VAR_11, 0);
     if (VAR_25 == ((void*)0))
      goto errout;
     VAR_22 = FUNC_12(VAR_14, (s64)VAR_1 - VAR_22);
    } else {

     VAR_25 = FUNC_13(VAR_12, VAR_24,
          VAR_11, 0);
     if (VAR_25 == ((void*)0))
      goto errout;

     VAR_22 = FUNC_12(VAR_14, (s64)VAR_1);
    }

    VAR_32 = (struct dmap *) VAR_25->data;
    *VAR_33 = FUNC_6(VAR_32, VAR_13, VAR_22);

    VAR_36->db_nfree += VAR_22;
    VAR_37 = FUNC_11(VAR_32->start) >> VAR_38;
    VAR_36->db_agfree[VAR_37] += VAR_22;

    FUNC_15(VAR_25);

    VAR_33++;
    VAR_24 += VAR_16;

    VAR_13 += VAR_22;
    VAR_14 -= VAR_22;
    if (VAR_14 == 0)
     break;
   }





   *VAR_34 = FUNC_7(VAR_31, 0, ++VAR_17);
   FUNC_15(VAR_28);
   VAR_28 = ((void*)0);

   if (VAR_14)
    VAR_34++;
   else {

    if (VAR_19 > 0)
     break;
    else {

     VAR_36->db_maxfreebud = *VAR_34;
     FUNC_14(VAR_27);
     FUNC_14(VAR_26);
     goto finalize;
    }
   }
  }





  *VAR_35 = FUNC_7(VAR_30, 1, ++VAR_19);
  FUNC_15(VAR_27);
  VAR_27 = ((void*)0);

  if (VAR_14)
   VAR_35++;
  else {

   if (VAR_21 > 0)
    break;
   else {

    VAR_36->db_maxfreebud = *VAR_35;
    FUNC_14(VAR_26);
    goto finalize;
   }
  }
 }

 FUNC_9(VAR_12->i_sb,
    "dbExtendFS: function has not returned as expected");
errout:
 if (VAR_28)
  FUNC_14(VAR_28);
 if (VAR_27)
  FUNC_14(VAR_27);
 FUNC_14(VAR_26);
 return -VAR_3;




finalize:

 return 0;
}
