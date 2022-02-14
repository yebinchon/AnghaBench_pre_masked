
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct request* completion_data; struct dm_rq_target_io* end_io_data; } ;
struct dm_rq_target_io {int error; struct request* orig; } ;


 int FUNC_0 (struct request*) ;

__attribute__((used)) static void FUNC_1(struct request *VAR_0, int VAR_1)
{
 struct dm_rq_target_io *VAR_2 = VAR_0->end_io_data;
 struct request *VAR_3 = VAR_2->orig;

 VAR_2->error = VAR_1;
 VAR_3->completion_data = VAR_0;
 FUNC_0(VAR_3);
}
