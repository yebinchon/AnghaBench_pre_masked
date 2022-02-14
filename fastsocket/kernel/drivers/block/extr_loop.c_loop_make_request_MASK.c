
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct loop_device* queuedata; } ;
struct loop_device {scalar_t__ lo_state; int lo_flags; int lo_lock; int lo_event; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct loop_device*,struct bio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct request_queue *VAR_5, struct bio *VAR_6)
{
 struct loop_device *VAR_7 = VAR_5->queuedata;
 int VAR_8 = FUNC_2(VAR_6);

 if (VAR_8 == VAR_3)
  VAR_8 = VAR_2;

 FUNC_0(!VAR_7 || (VAR_8 != VAR_2 && VAR_8 != VAR_4));

 FUNC_4(&VAR_7->lo_lock);
 if (VAR_7->lo_state != VAR_1)
  goto out;
 if (FUNC_6(VAR_8 == VAR_4 && (VAR_7->lo_flags & VAR_0)))
  goto out;
 FUNC_3(VAR_7, VAR_6);
 FUNC_7(&VAR_7->lo_event);
 FUNC_5(&VAR_7->lo_lock);
 return 0;

out:
 FUNC_5(&VAR_7->lo_lock);
 FUNC_1(VAR_6);
 return 0;
}
