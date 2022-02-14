
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int q; struct dm_rq_target_io* end_io_data; } ;
struct mapped_device {int dummy; } ;
struct dm_target {TYPE_1__* type; } ;
struct dm_rq_target_io {int orig; int info; struct dm_target* ti; } ;
struct TYPE_2__ {int (* map_rq ) (struct dm_target*,struct request*,int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;



 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (struct request*,int) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (struct dm_target*,struct request*,int *) ;
 int FUNC_9 (int ,struct request*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct dm_target *VAR_0, struct request *VAR_1,
         struct mapped_device *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct dm_rq_target_io *VAR_5 = VAR_1->end_io_data;

 VAR_5->ti = VAR_0;
 VAR_3 = VAR_0->type->map_rq(VAR_0, VAR_1, &VAR_5->info);
 switch (VAR_3) {
 case 128:

  break;
 case 130:

  FUNC_9(VAR_1->q, VAR_1, FUNC_3(FUNC_4(VAR_2)),
         FUNC_2(VAR_5->orig));
  FUNC_5(VAR_1);
  break;
 case 129:

  FUNC_7(VAR_1);
  VAR_4 = 1;
  break;
 default:
  if (VAR_3 > 0) {
   FUNC_1("unimplemented target map return value: %d", VAR_3);
   FUNC_0();
  }


  FUNC_6(VAR_1, VAR_3);
  break;
 }

 return VAR_4;
}
