
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct gpmc_timings {int cs_on; int adv_on; int sync_clk; unsigned int page_burst_access; int adv_rd_off; int oe_on; int access; int oe_off; int cs_rd_off; int adv_wr_off; int we_on; int we_off; int cs_wr_off; void* wr_cycle; void* rd_cycle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gpmc_timings*) ;
 int FUNC_1 (struct gpmc_timings*,int ,int) ;
 void* FUNC_2 (int,unsigned int,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(unsigned VAR_2, unsigned VAR_3)
{
 struct gpmc_timings VAR_4;
 unsigned VAR_5 = VAR_2 + 3000;
 unsigned VAR_6;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cs_on = 8;


 VAR_4.adv_on = FUNC_2(VAR_4.cs_on, VAR_5 - 7000, VAR_3);


 VAR_4.sync_clk = 12 ;
 VAR_6 = (VAR_4.sync_clk * 1000 + VAR_3 - 1) / VAR_3;
 if (VAR_6 > 4)
  return -VAR_0;
 if (VAR_6 <= 0)
  VAR_6 = 1;
 VAR_4.page_burst_access = (VAR_3 * VAR_6) / 1000;






 VAR_4.adv_rd_off = FUNC_2(VAR_4.adv_on, VAR_5, VAR_3);


 VAR_6 = (VAR_4.adv_rd_off * 1000) + (3 * VAR_3);
 VAR_4.oe_on = FUNC_2(VAR_4.adv_on, VAR_6, VAR_3);


 VAR_6 = (VAR_4.oe_on * 1000) + (5 * VAR_3);
 VAR_4.access = FUNC_2(VAR_4.oe_on, VAR_6, VAR_3);


 VAR_6 = (VAR_4.access * 1000) + (1 * VAR_3);
 VAR_4.oe_off = FUNC_2(VAR_4.access, VAR_6, VAR_3);

 VAR_4.cs_rd_off = VAR_4.oe_off;

 VAR_6 = VAR_4.cs_rd_off * 1000 + 7000 ;
 VAR_4.rd_cycle = FUNC_2(VAR_4.cs_rd_off, VAR_6, VAR_3);






 VAR_4.adv_wr_off = VAR_4.adv_rd_off;


 VAR_6 = (VAR_4.adv_wr_off * 1000) + (3 * VAR_3);
 VAR_4.we_on = FUNC_2(VAR_4.adv_wr_off, VAR_6, VAR_3);


 VAR_6 = (VAR_4.we_on * 1000) + (6 * VAR_3);
 VAR_4.we_off = FUNC_2(VAR_4.we_on, VAR_6, VAR_3);

 VAR_4.cs_wr_off = VAR_4.we_off;

 VAR_6 = VAR_4.cs_wr_off * 1000 + 7000 ;
 VAR_4.wr_cycle = FUNC_2(VAR_4.cs_wr_off, VAR_6, VAR_3);

 return FUNC_0(VAR_1, &VAR_4);
}
