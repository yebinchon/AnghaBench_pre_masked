
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {scalar_t__ errors; TYPE_1__* rq_disk; } ;
struct hd_i_struct {int special_op; int recalibrate; } ;
struct TYPE_2__ {struct hd_i_struct* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 struct request* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct request *VAR_9 = VAR_7;

 if (VAR_9 != ((void*)0)) {
  struct hd_i_struct *VAR_10 = VAR_9->rq_disk->private_data;
  if (++VAR_9->errors >= VAR_2 || (VAR_6 & VAR_0)) {
   FUNC_0(-VAR_1);
   VAR_10->special_op = VAR_10->recalibrate = 1;
  } else if (VAR_9->errors % VAR_4 == 0)
   VAR_8 = 1;
  else if ((VAR_6 & VAR_5) || VAR_9->errors % VAR_3 == 0)
   VAR_10->special_op = VAR_10->recalibrate = 1;

 }
}
