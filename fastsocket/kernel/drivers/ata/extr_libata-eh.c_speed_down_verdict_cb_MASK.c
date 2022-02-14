
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct speed_down_verdict_arg {scalar_t__ since; int * nr_errors; int xfer_ok; } ;
struct ata_ering_entry {scalar_t__ timestamp; int err_mask; int eflags; } ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct ata_ering_entry *VAR_0, void *VAR_1)
{
 struct speed_down_verdict_arg *VAR_2 = VAR_1;
 int VAR_3;

 if (VAR_0->timestamp < VAR_2->since)
  return -1;

 VAR_3 = FUNC_0(VAR_0->eflags, VAR_0->err_mask,
          &VAR_2->xfer_ok);
 VAR_2->nr_errors[VAR_3]++;

 return 0;
}
