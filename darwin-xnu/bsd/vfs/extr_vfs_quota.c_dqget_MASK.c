
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct vnode {int dummy; } ;
struct timeval {scalar_t__ tv_sec; } ;
struct quotafile {scalar_t__ qf_btime; scalar_t__ qf_itime; struct vnode* qf_vp; } ;
struct TYPE_2__ {struct dquot* le_next; } ;
struct dquot {scalar_t__ dq_id; int dq_cnt; int dq_flags; int dq_type; scalar_t__ dq_isoftlimit; scalar_t__ dq_bsoftlimit; scalar_t__ dq_ihardlimit; scalar_t__ dq_bhardlimit; scalar_t__ dq_btime; scalar_t__ dq_itime; struct quotafile* dq_qfile; int dq_index; int dq_dqb; TYPE_1__ dq_hash; } ;
struct dqhash {struct dquot* lh_first; } ;


 struct dqhash* FUNC_0 (struct vnode*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dqhash*,struct dquot*,int ) ;
 int FUNC_2 (struct dquot*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct dquot* VAR_8 ;
 struct vnode* VAR_9 ;
 scalar_t__ FUNC_3 (int *) ;
 struct dquot* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct dquot*,int ) ;
 int FUNC_6 (int *,struct dquot*,int ) ;
 int FUNC_7 (struct dquot*,int ) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct dquot*) ;
 int FUNC_15 (struct dquot*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 () ;
 int FUNC_17 (struct quotafile*,scalar_t__,int *,int *) ;
 int FUNC_18 (struct dquot*) ;
 int FUNC_19 (struct timeval*) ;
 int VAR_16 ;
 scalar_t__ FUNC_20 (struct quotafile*) ;
 int FUNC_21 (struct quotafile*) ;
 int FUNC_22 (char*) ;

int
FUNC_23(u_int32_t VAR_17, struct quotafile *VAR_18, int VAR_19, struct dquot **VAR_20)
{
 struct dquot *VAR_21;
 struct dquot *VAR_22 = ((void*)0);
 struct dquot *VAR_23 = ((void*)0);
 struct dqhash *VAR_24;
 struct vnode *VAR_25;
 int VAR_26 = 0;
 int VAR_27 = 0;

 if (!FUNC_16()) {
  *VAR_20 = VAR_8;
  return (VAR_3);
 }

 if ( VAR_17 == 0 || VAR_18->qf_vp == VAR_9 ) {
  *VAR_20 = VAR_8;
  return (VAR_3);
 }
 FUNC_10();

 if ( (FUNC_20(VAR_18)) ) {
         FUNC_13();

  *VAR_20 = VAR_8;
  return (VAR_3);
 }
 if ( (VAR_25 = VAR_18->qf_vp) == VAR_9 ) {
         FUNC_21(VAR_18);
  FUNC_13();

  *VAR_20 = VAR_8;
  return (VAR_3);
 }
 VAR_24 = FUNC_0(VAR_25, VAR_17);

relookup:
 VAR_27 = FUNC_12();




 for (VAR_21 = VAR_24->lh_first; VAR_21; VAR_21 = VAR_21->dq_hash.le_next) {
  if (VAR_21->dq_id != VAR_17 ||
      VAR_21->dq_qfile->qf_vp != VAR_25)
   continue;

  FUNC_14(VAR_21);
  if (FUNC_11(VAR_27)) {
   FUNC_15(VAR_21);
   goto relookup;
  }





  if (VAR_21->dq_id != VAR_17 || VAR_21->dq_qfile == ((void*)0) ||
      VAR_21->dq_qfile->qf_vp != VAR_25) {
          FUNC_15(VAR_21);
   goto relookup;
  }




  if (VAR_21->dq_cnt++ == 0) {
   if (VAR_21->dq_flags & VAR_2)
    FUNC_6(&VAR_14, VAR_21, VAR_12);
   else
    FUNC_6(&VAR_15, VAR_21, VAR_12);
  }
  FUNC_15(VAR_21);

  if (VAR_23 != ((void*)0)) {






          FUNC_5(&VAR_15, VAR_23, VAR_12);
  }
  FUNC_21(VAR_18);
         FUNC_13();

  if (VAR_22 != ((void*)0)) {





          FUNC_7(VAR_22, VAR_6);
  }
  *VAR_20 = VAR_21;

  return (0);
 }



 if (FUNC_3(&VAR_15) &&
     VAR_16 < VAR_5 * VAR_11)
  VAR_10 += VAR_0;

 if (VAR_23 != ((void*)0)) {





         VAR_21 = VAR_23;
  VAR_23 = ((void*)0);
 } else if (VAR_16 < VAR_10) {
         if (VAR_22 == ((void*)0)) {



          FUNC_13();

   VAR_22 = (struct dquot *)FUNC_8(sizeof *VAR_21, VAR_6, VAR_7);
   FUNC_9((char *)VAR_22, sizeof *VAR_21);

          VAR_27 = FUNC_10();





   goto relookup;
  } else {





          VAR_21 = VAR_22;
   VAR_22 = ((void*)0);
   VAR_16++;
  }
 } else {
         if (FUNC_3(&VAR_15)) {
          FUNC_21(VAR_18);
          FUNC_13();

   if (VAR_22) {





           FUNC_7(VAR_22, VAR_6);
   }
   FUNC_22("dquot");
   *VAR_20 = VAR_8;
   return (VAR_4);
  }
  VAR_21 = FUNC_4(&VAR_15);

  FUNC_14(VAR_21);

  if (FUNC_11(VAR_27) || VAR_21->dq_cnt || (VAR_21->dq_flags & VAR_2)) {






          FUNC_15(VAR_21);






   goto relookup;
  }
  FUNC_6(&VAR_15, VAR_21, VAR_12);

  if (VAR_21->dq_qfile != ((void*)0)) {
          FUNC_2(VAR_21, VAR_13);
   VAR_21->dq_qfile = ((void*)0);
   VAR_21->dq_id = 0;
  }
  FUNC_15(VAR_21);
  VAR_23 = VAR_21;
  goto relookup;
 }







 FUNC_14(VAR_21);
 if (FUNC_11(VAR_27)) {
  FUNC_15(VAR_21);
  goto relookup;
 }




 VAR_21->dq_cnt = 1;
 VAR_21->dq_flags = 0;
 VAR_21->dq_id = VAR_17;
 VAR_21->dq_qfile = VAR_18;
 VAR_21->dq_type = VAR_19;
 FUNC_1(VAR_24, VAR_21, VAR_13);
 FUNC_13();

 if (VAR_22) {





         FUNC_7(VAR_22, VAR_6);
 }

 VAR_26 = FUNC_17(VAR_18, VAR_17, &VAR_21->dq_dqb, &VAR_21->dq_index);





 if (VAR_26) {
         FUNC_10();

  VAR_21->dq_id = 0;
  VAR_21->dq_qfile = ((void*)0);
  FUNC_2(VAR_21, VAR_13);

  FUNC_15(VAR_21);
  FUNC_21(VAR_18);
         FUNC_13();

  FUNC_18(VAR_21);

  *VAR_20 = VAR_8;
  return (VAR_26);
 }




 if (VAR_21->dq_isoftlimit == 0 && VAR_21->dq_bsoftlimit == 0 &&
     VAR_21->dq_ihardlimit == 0 && VAR_21->dq_bhardlimit == 0)
  VAR_21->dq_flags |= VAR_1;
 if (VAR_21->dq_id != 0) {
  struct timeval VAR_28;

  FUNC_19(&VAR_28);
  if (VAR_21->dq_btime == 0)
   VAR_21->dq_btime = VAR_28.tv_sec + VAR_18->qf_btime;
  if (VAR_21->dq_itime == 0)
   VAR_21->dq_itime = VAR_28.tv_sec + VAR_18->qf_itime;
 }
 FUNC_10();
 FUNC_15(VAR_21);
 FUNC_21(VAR_18);
 FUNC_13();

 *VAR_20 = VAR_21;
 return (0);
}
