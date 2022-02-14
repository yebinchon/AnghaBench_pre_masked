
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; struct dm_rq_target_io* end_io_data; } ;
struct dm_rq_target_io {struct request* orig; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int) ;

void FUNC_1(struct request *VAR_1, int VAR_2)
{
 struct dm_rq_target_io *VAR_3 = VAR_1->end_io_data;
 struct request *VAR_4 = VAR_3->orig;

 VAR_4->cmd_flags |= VAR_0;
 FUNC_0(VAR_1, VAR_2);
}
