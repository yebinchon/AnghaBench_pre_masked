
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {struct dm_rq_target_io* end_io_data; int end_io; int buffer; int sense; int cmd_len; int cmd; } ;
struct dm_rq_target_io {TYPE_1__* md; } ;
struct TYPE_2__ {int bs; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,struct request*,int ,int ,int ,struct dm_rq_target_io*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct request *VAR_3, struct request *VAR_4,
         struct dm_rq_target_io *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5->md->bs, VAR_0,
         VAR_1, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->cmd = VAR_4->cmd;
 VAR_3->cmd_len = VAR_4->cmd_len;
 VAR_3->sense = VAR_4->sense;
 VAR_3->buffer = VAR_4->buffer;
 VAR_3->end_io = VAR_2;
 VAR_3->end_io_data = VAR_5;

 return 0;
}
