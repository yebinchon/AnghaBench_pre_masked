
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; int q; int ioprio; int __sector; scalar_t__ errors; int cmd_type; int cpu; } ;
struct bio {int bi_rw; int bi_sector; int bi_comp_cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (int ,struct request*,struct bio*) ;

void FUNC_3(struct request *VAR_17, struct bio *VAR_18)
{
 VAR_17->cpu = VAR_18->bi_comp_cpu;
 VAR_17->cmd_type = VAR_16;





 if (FUNC_1(VAR_18, VAR_0))
  VAR_17->cmd_flags |= VAR_9;
 else
  VAR_17->cmd_flags |= VAR_18->bi_rw & VAR_9;

 if (FUNC_1(VAR_18, VAR_2))
  VAR_17->cmd_flags |= VAR_8;
 if (FUNC_1(VAR_18, VAR_1))
  VAR_17->cmd_flags |= VAR_12;
 if (FUNC_1(VAR_18, VAR_7))
  VAR_17->cmd_flags |= VAR_15;
 if (FUNC_1(VAR_18, VAR_5))
  VAR_17->cmd_flags |= VAR_14;
 if (FUNC_1(VAR_18, VAR_6))
  VAR_17->cmd_flags |= VAR_13;

 if (FUNC_1(VAR_18, VAR_3))
  VAR_17->cmd_flags |= VAR_10;
 if (FUNC_1(VAR_18, VAR_4))
  VAR_17->cmd_flags |= VAR_11;

 VAR_17->errors = 0;
 VAR_17->__sector = VAR_18->bi_sector;
 VAR_17->ioprio = FUNC_0(VAR_18);
 FUNC_2(VAR_17->q, VAR_17, VAR_18);
}
