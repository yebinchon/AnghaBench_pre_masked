
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; int extra_len; int ioprio; int nr_phys_segments; int __data_len; int __sector; int cmd_type; int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_2, struct request *VAR_3)
{
 VAR_2->cpu = VAR_3->cpu;
 VAR_2->cmd_flags = (VAR_3->cmd_flags & VAR_0) | VAR_1;
 VAR_2->cmd_type = VAR_3->cmd_type;
 VAR_2->__sector = FUNC_1(VAR_3);
 VAR_2->__data_len = FUNC_0(VAR_3);
 VAR_2->nr_phys_segments = VAR_3->nr_phys_segments;
 VAR_2->ioprio = VAR_3->ioprio;
 VAR_2->extra_len = VAR_3->extra_len;
}
