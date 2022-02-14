
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_lock; int lo_bio_list; int lo_event; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 struct bio* FUNC_3 (struct loop_device*) ;
 int FUNC_4 (struct loop_device*,struct bio*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_1)
{
 struct loop_device *VAR_2 = VAR_1;
 struct bio *VAR_3;

 FUNC_5(VAR_0, -20);

 while (!FUNC_2() || !FUNC_1(&VAR_2->lo_bio_list)) {

  FUNC_8(VAR_2->lo_event,
    !FUNC_1(&VAR_2->lo_bio_list) ||
    FUNC_2());

  if (FUNC_1(&VAR_2->lo_bio_list))
   continue;
  FUNC_6(&VAR_2->lo_lock);
  VAR_3 = FUNC_3(VAR_2);
  FUNC_7(&VAR_2->lo_lock);

  FUNC_0(!VAR_3);
  FUNC_4(VAR_2, VAR_3);
 }

 return 0;
}
