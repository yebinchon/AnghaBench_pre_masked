
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {struct dm_rq_target_io* end_io_data; } ;
struct dm_rq_target_io {int info; TYPE_2__* ti; } ;
typedef int (* dm_request_endio_fn ) (TYPE_2__*,struct request*,int,int *) ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* rq_end_io ) (TYPE_2__*,struct request*,int,int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct request*,int) ;
 int FUNC_3 (struct request*) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5 = VAR_3;
 struct dm_rq_target_io *VAR_6 = VAR_2->end_io_data;
 dm_request_endio_fn VAR_7 = ((void*)0);

 if (VAR_6->ti) {
  VAR_7 = VAR_6->ti->type->rq_end_io;

  if (VAR_4 && VAR_7)
   VAR_5 = VAR_7(VAR_6->ti, VAR_2, VAR_3, &VAR_6->info);
 }

 if (VAR_5 <= 0)

  FUNC_2(VAR_2, VAR_5);
 else if (VAR_5 == VAR_0)

  return;
 else if (VAR_5 == VAR_1)

  FUNC_3(VAR_2);
 else {
  FUNC_1("unimplemented target endio return value: %d", VAR_5);
  FUNC_0();
 }
}
