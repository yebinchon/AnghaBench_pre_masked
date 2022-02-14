
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cm_req_timeout {int cm_req_timeout_reg; int time_out; } ;
union cm_control {int cm_control_reg; int rearm_stat_regs; int alg_clr; int wr_dma_clr; int rd_dma_clr; } ;
typedef int uint64_t ;
struct mbcs_soft {void* mmr_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (struct mbcs_soft*) ;
 int FUNC_4 (struct mbcs_soft*) ;

__attribute__((used)) static inline int FUNC_5(struct mbcs_soft *VAR_7)
{
 void *VAR_8 = VAR_7->mmr_base;
 union cm_control VAR_9;
 union cm_req_timeout VAR_10;
 uint64_t VAR_11;

 VAR_10.cm_req_timeout_reg =
     FUNC_0(VAR_8, VAR_6);

 VAR_10.time_out = VAR_2;
 FUNC_1(VAR_8, VAR_6,
       VAR_10.cm_req_timeout_reg);

 FUNC_4(VAR_7);
 FUNC_3(VAR_7);


 VAR_11 = FUNC_0(VAR_8, VAR_5);
 FUNC_1(VAR_8, VAR_0, VAR_11);
 FUNC_2(VAR_8, VAR_3);



 FUNC_1(VAR_8, VAR_4, 0x3ffffff7e00ffUL);


 VAR_9.cm_control_reg = FUNC_0(VAR_8, VAR_1);
 VAR_9.rearm_stat_regs = 1;
 VAR_9.alg_clr = 1;
 VAR_9.wr_dma_clr = 1;
 VAR_9.rd_dma_clr = 1;

 FUNC_1(VAR_8, VAR_1, VAR_9.cm_control_reg);

 return 0;
}
