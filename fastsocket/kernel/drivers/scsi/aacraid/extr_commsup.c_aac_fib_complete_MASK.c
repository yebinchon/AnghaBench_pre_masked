
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int XferState; scalar_t__ StructType; } ;
struct hw_fib {TYPE_1__ header; } ;
struct fib {int done; int event_lock; struct hw_fib* hw_fib_va; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct fib *VAR_7)
{
 unsigned long VAR_8;
 struct hw_fib * VAR_9 = VAR_7->hw_fib_va;





 if (VAR_9->header.XferState == 0)
  return 0;




 if (VAR_9->header.StructType != VAR_2 &&
     VAR_9->header.StructType != VAR_3 &&
     VAR_9->header.StructType != VAR_4)
  return -VAR_1;






 FUNC_3(&VAR_7->event_lock, VAR_8);
 if (VAR_7->done == 2) {
  FUNC_4(&VAR_7->event_lock, VAR_8);
  return 0;
 }
 FUNC_4(&VAR_7->event_lock, VAR_8);

 if((VAR_9->header.XferState & FUNC_1(VAR_6)) &&
  (VAR_9->header.XferState & FUNC_1(VAR_0)))
 {
  FUNC_2(VAR_7);
 }
 else if(VAR_9->header.XferState & FUNC_1(VAR_6))
 {




  FUNC_2(VAR_7);
 } else if(VAR_9->header.XferState & FUNC_1(VAR_5)) {
  FUNC_2(VAR_7);
 } else {
  FUNC_0();
 }
 return 0;
}
