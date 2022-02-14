
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_ctxnum; struct gru_mm_struct* ts_gms; } ;
struct gru_state {size_t gs_gid; scalar_t__ gs_asid_gen; int gs_asid_lock; } ;
struct gru_mm_tracker {int mt_asid; unsigned short mt_ctxbitmap; scalar_t__ mt_asid_gen; } ;
struct gru_mm_struct {int * ms_asidmap; int ms_asid_lock; struct gru_mm_tracker* ms_asids; } ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct gru_state*) ;
 int FUNC_4 (int ,char*,size_t,struct gru_thread_state*,struct gru_mm_struct*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (size_t,int *) ;

__attribute__((used)) static int FUNC_8(struct gru_state *VAR_3,
     struct gru_thread_state *VAR_4)
{
 struct gru_mm_struct *VAR_5 = VAR_4->ts_gms;
 struct gru_mm_tracker *VAR_6 = &VAR_5->ms_asids[VAR_3->gs_gid];
 unsigned short VAR_7 = (1 << VAR_4->ts_ctxnum);
 int VAR_8;

 FUNC_5(&VAR_5->ms_asid_lock);
 VAR_8 = VAR_6->mt_asid;

 FUNC_5(&VAR_3->gs_asid_lock);
 if (VAR_8 == 0 || (VAR_6->mt_ctxbitmap == 0 && VAR_6->mt_asid_gen !=
     VAR_3->gs_asid_gen)) {
  VAR_8 = FUNC_3(VAR_3);
  VAR_6->mt_asid = VAR_8;
  VAR_6->mt_asid_gen = VAR_3->gs_asid_gen;
  FUNC_1(VAR_0);
 } else {
  FUNC_1(VAR_1);
 }
 FUNC_6(&VAR_3->gs_asid_lock);

 FUNC_0(VAR_6->mt_ctxbitmap & VAR_7);
 VAR_6->mt_ctxbitmap |= VAR_7;
 if (!FUNC_7(VAR_3->gs_gid, VAR_5->ms_asidmap))
  FUNC_2(VAR_3->gs_gid, VAR_5->ms_asidmap);
 FUNC_6(&VAR_5->ms_asid_lock);

 FUNC_4(VAR_2,
  "gid %d, gts %p, gms %p, ctxnum %d, asid 0x%x, asidmap 0x%lx\n",
  VAR_3->gs_gid, VAR_4, VAR_5, VAR_4->ts_ctxnum, VAR_8,
  VAR_5->ms_asidmap[0]);
 return VAR_8;
}
