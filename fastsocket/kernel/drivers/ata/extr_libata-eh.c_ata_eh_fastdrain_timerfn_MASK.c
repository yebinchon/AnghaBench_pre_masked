
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {int err_mask; } ;
struct TYPE_2__ {int expires; } ;
struct ata_port {int fastdrain_cnt; int lock; TYPE_1__ fastdrain_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_port*) ;
 struct ata_queued_cmd* FUNC_4 (struct ata_port*,unsigned int) ;
 int VAR_3 ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

void FUNC_7(unsigned long VAR_4)
{
 struct ata_port *VAR_5 = (void *)VAR_4;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_5(VAR_5->lock, VAR_6);

 VAR_7 = FUNC_2(VAR_5);


 if (!VAR_7)
  goto out_unlock;

 if (VAR_7 == VAR_5->fastdrain_cnt) {
  unsigned int VAR_8;




  for (VAR_8 = 0; VAR_8 < VAR_2 - 1; VAR_8++) {
   struct ata_queued_cmd *VAR_9 = FUNC_4(VAR_5, VAR_8);
   if (VAR_9)
    VAR_9->err_mask |= VAR_0;
  }

  FUNC_3(VAR_5);
 } else {

  VAR_5->fastdrain_cnt = VAR_7;
  VAR_5->fastdrain_timer.expires =
   FUNC_1(VAR_3, VAR_1);
  FUNC_0(&VAR_5->fastdrain_timer);
 }

 out_unlock:
 FUNC_6(VAR_5->lock, VAR_6);
}
