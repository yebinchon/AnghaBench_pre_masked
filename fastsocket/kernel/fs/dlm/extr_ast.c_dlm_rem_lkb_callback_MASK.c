
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int dummy; } ;
struct dlm_callback {int flags; int mode; scalar_t__ seq; } ;
struct dlm_lkb {void* lkb_last_bast_time; struct dlm_callback lkb_last_bast; void* lkb_last_cast_time; struct dlm_callback lkb_last_cast; int lkb_id; struct dlm_callback* lkb_callbacks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 void* FUNC_1 () ;
 int FUNC_2 (struct dlm_ls*,char*,int ,unsigned long long,int ,unsigned long long,int ) ;
 int FUNC_3 (struct dlm_callback*,struct dlm_callback*,int) ;
 int FUNC_4 (struct dlm_callback*,int ,int) ;

int FUNC_5(struct dlm_ls *VAR_5, struct dlm_lkb *VAR_6,
    struct dlm_callback *VAR_7, int *VAR_8)
{
 int VAR_9;

 *VAR_8 = 0;

 if (!VAR_6->lkb_callbacks[0].seq)
  return -VAR_4;



 FUNC_3(VAR_7, &VAR_6->lkb_callbacks[0], sizeof(struct dlm_callback));
 FUNC_4(&VAR_6->lkb_callbacks[0], 0, sizeof(struct dlm_callback));



 for (VAR_9 = 1; VAR_9 < VAR_0; VAR_9++) {
  if (!VAR_6->lkb_callbacks[VAR_9].seq)
   break;
  FUNC_3(&VAR_6->lkb_callbacks[VAR_9-1], &VAR_6->lkb_callbacks[VAR_9],
         sizeof(struct dlm_callback));
  FUNC_4(&VAR_6->lkb_callbacks[VAR_9], 0, sizeof(struct dlm_callback));
  (*VAR_8)++;
 }




 if ((VAR_7->flags & VAR_1) && VAR_6->lkb_last_cast.seq) {
  if (FUNC_0(VAR_7->mode, VAR_6->lkb_last_cast.mode)) {
   VAR_7->flags |= VAR_3;

   FUNC_2(VAR_5, "skip %x bast %llu mode %d "
      "for cast %llu mode %d",
      VAR_6->lkb_id,
      (unsigned long long)VAR_7->seq,
      VAR_7->mode,
      (unsigned long long)VAR_6->lkb_last_cast.seq,
      VAR_6->lkb_last_cast.mode);
   return 0;
  }
 }

 if (VAR_7->flags & VAR_2) {
  FUNC_3(&VAR_6->lkb_last_cast, VAR_7, sizeof(struct dlm_callback));
  VAR_6->lkb_last_cast_time = FUNC_1();
 }

 if (VAR_7->flags & VAR_1) {
  FUNC_3(&VAR_6->lkb_last_bast, VAR_7, sizeof(struct dlm_callback));
  VAR_6->lkb_last_bast_time = FUNC_1();
 }

 return 0;
}
