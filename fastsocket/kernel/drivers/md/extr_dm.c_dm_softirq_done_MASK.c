
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; struct dm_rq_target_io* end_io_data; struct request* completion_data; } ;
struct dm_rq_target_io {int error; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct request *VAR_1)
{
 bool VAR_2 = 1;
 struct request *VAR_3 = VAR_1->completion_data;
 struct dm_rq_target_io *VAR_4 = VAR_3->end_io_data;

 if (VAR_1->cmd_flags & VAR_0)
  VAR_2 = 0;

 FUNC_0(VAR_3, VAR_4->error, VAR_2);
}
