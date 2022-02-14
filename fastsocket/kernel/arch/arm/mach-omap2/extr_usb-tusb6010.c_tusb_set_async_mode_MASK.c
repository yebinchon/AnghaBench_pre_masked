
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct gpmc_timings {int cs_on; int adv_on; int adv_rd_off; int oe_on; int access; int oe_off; int cs_rd_off; int adv_wr_off; int we_on; int we_off; int cs_wr_off; void* wr_cycle; void* rd_cycle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gpmc_timings*) ;
 int FUNC_1 (struct gpmc_timings*,int ,int) ;
 void* FUNC_2 (int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_1, unsigned VAR_2)
{
 struct gpmc_timings VAR_3;
 unsigned VAR_4 = VAR_1 + 3000;
 unsigned VAR_5;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));


 VAR_3.cs_on = 8;

 VAR_3.adv_on = FUNC_2(VAR_3.cs_on, VAR_4 - 7000, VAR_2);






 VAR_3.adv_rd_off = FUNC_2(VAR_3.adv_on, VAR_4, VAR_2);


 VAR_3.oe_on = FUNC_2(VAR_3.adv_on, VAR_4 + 1000, VAR_2);


 VAR_5 = VAR_3.oe_on * 1000 + 300;
 VAR_3.access = FUNC_2(VAR_3.oe_on, VAR_5, VAR_2);


 VAR_5 = VAR_3.access * 1000;
 VAR_3.oe_off = FUNC_2(VAR_3.access, VAR_5, VAR_2);

 VAR_3.cs_rd_off = VAR_3.oe_off;

 VAR_5 = VAR_3.cs_rd_off * 1000 + 7000 ;
 VAR_3.rd_cycle = FUNC_2(VAR_3.cs_rd_off, VAR_5, VAR_2);






 VAR_3.adv_wr_off = VAR_3.adv_rd_off;


 VAR_3.we_on = FUNC_2(VAR_3.adv_wr_off, VAR_4 + 1000, VAR_2);


 VAR_5 = VAR_3.we_on * 1000 + 300;
 VAR_3.we_off = FUNC_2(VAR_3.we_on, VAR_5, VAR_2);

 VAR_3.cs_wr_off = VAR_3.we_off;

 VAR_5 = VAR_3.cs_wr_off * 1000 + 7000 ;
 VAR_3.wr_cycle = FUNC_2(VAR_3.cs_wr_off, VAR_5, VAR_2);

 return FUNC_0(VAR_0, &VAR_3);
}
