
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct mapped_device* queuedata; } ;
struct mapped_device {int io_lock; int flags; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int part0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mapped_device*,struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 TYPE_1__* FUNC_5 (struct mapped_device*) ;
 int FUNC_6 (int *) ;
 int * VAR_2 ;
 int FUNC_7 (int,int *,int ,int ) ;
 int FUNC_8 (int,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct mapped_device*,struct bio*) ;
 int * VAR_3 ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct request_queue *VAR_4, struct bio *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5);
 struct mapped_device *VAR_7 = VAR_4->queuedata;
 int VAR_8;

 FUNC_6(&VAR_7->io_lock);

 VAR_8 = FUNC_9();
 FUNC_8(VAR_8, &FUNC_5(VAR_7)->part0, VAR_2[VAR_6]);
 FUNC_7(VAR_8, &FUNC_5(VAR_7)->part0, VAR_3[VAR_6], FUNC_4(VAR_5));
 FUNC_10();


 if (FUNC_13(FUNC_12(VAR_0, &VAR_7->flags))) {
  FUNC_14(&VAR_7->io_lock);

  if (FUNC_3(VAR_5) != VAR_1)
   FUNC_11(VAR_7, VAR_5);
  else
   FUNC_2(VAR_5);
  return 0;
 }

 FUNC_0(VAR_7, VAR_5);
 FUNC_14(&VAR_7->io_lock);
 return 0;
}
