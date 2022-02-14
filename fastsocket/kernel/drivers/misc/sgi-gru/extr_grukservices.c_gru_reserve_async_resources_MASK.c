
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {scalar_t__ ts_gru; } ;
struct gru_blade_state {int bs_async_dsr_bytes; int bs_async_cbrs; int bs_kgts_sema; struct gru_thread_state* bs_kgts; struct completion* bs_async_wq; } ;
struct completion {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct gru_blade_state** VAR_0 ;
 int FUNC_2 (struct gru_thread_state*,int ) ;
 int FUNC_3 (int *) ;

unsigned long FUNC_4(int VAR_1, int VAR_2, int VAR_3,
   struct completion *VAR_4)
{
 struct gru_blade_state *VAR_5;
 struct gru_thread_state *VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_0[VAR_1];

 FUNC_1(&VAR_5->bs_kgts_sema);


 if (VAR_5->bs_async_dsr_bytes + VAR_5->bs_async_cbrs)
  goto done;
 VAR_5->bs_async_dsr_bytes = VAR_3;
 VAR_5->bs_async_cbrs = VAR_2;
 VAR_5->bs_async_wq = VAR_4;
 VAR_6 = VAR_5->bs_kgts;


 if (VAR_6 && VAR_6->ts_gru)
  FUNC_2(VAR_6, 0);
 VAR_7 = FUNC_0(VAR_1);

done:
 FUNC_3(&VAR_5->bs_kgts_sema);
 return VAR_7;
}
