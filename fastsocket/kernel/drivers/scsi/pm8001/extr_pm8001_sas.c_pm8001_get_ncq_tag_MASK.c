
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sas_task {struct ata_queued_cmd* uldd_task; } ;
struct TYPE_2__ {scalar_t__ command; } ;
struct ata_queued_cmd {int tag; TYPE_1__ tf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

u32 FUNC_0(struct sas_task *VAR_2, u32 *VAR_3)
{
 struct ata_queued_cmd *VAR_4 = VAR_2->uldd_task;
 if (VAR_4) {
  if (VAR_4->tf.command == VAR_1 ||
   VAR_4->tf.command == VAR_0) {
   *VAR_3 = VAR_4->tag;
   return 1;
  }
 }
 return 0;
}
