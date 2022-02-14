
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {scalar_t__ seq_flush; scalar_t__ seq_write; int device_lock; } ;
struct mddev {int flags; int bitmap; struct r5conf* private; } ;
struct md_thread {struct mddev* mddev; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct r5conf*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct r5conf*) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (char*,...) ;
 struct bio* FUNC_6 (struct r5conf*) ;
 int FUNC_7 (struct r5conf*,struct bio*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mddev*) ;

__attribute__((used)) static void FUNC_11(struct md_thread *VAR_1)
{
 struct mddev *VAR_2 = VAR_1->mddev;
 struct r5conf *VAR_3 = VAR_2->private;
 int VAR_4;

 FUNC_5("+++ raid5d active\n");

 FUNC_4(VAR_2);

 VAR_4 = 0;
 FUNC_8(&VAR_3->device_lock);
 while (1) {
  struct bio *VAR_5;
  int VAR_6;

  if (VAR_3->seq_flush != VAR_3->seq_write) {
   int VAR_7 = VAR_3->seq_flush;
   FUNC_9(&VAR_3->device_lock);
   FUNC_2(VAR_2->bitmap);
   FUNC_8(&VAR_3->device_lock);
   VAR_3->seq_write = VAR_7;
   FUNC_0(VAR_3);
  }

  while ((VAR_5 = FUNC_6(VAR_3))) {
   int VAR_8;
   FUNC_9(&VAR_3->device_lock);
   VAR_8 = FUNC_7(VAR_3, VAR_5);
   FUNC_8(&VAR_3->device_lock);
   if (!VAR_8)
    break;
   VAR_4++;
  }

  VAR_6 = FUNC_3(VAR_3);
  if (!VAR_6)
   break;
  VAR_4 += VAR_6;

  if (VAR_2->flags & ~(1<<VAR_0)) {
   FUNC_9(&VAR_3->device_lock);
   FUNC_4(VAR_2);
   FUNC_8(&VAR_3->device_lock);
  }
 }
 FUNC_5("%d stripes handled\n", VAR_4);

 FUNC_9(&VAR_3->device_lock);

 FUNC_1();
 FUNC_10(VAR_2);

 FUNC_5("--- raid5d inactive\n");
}
