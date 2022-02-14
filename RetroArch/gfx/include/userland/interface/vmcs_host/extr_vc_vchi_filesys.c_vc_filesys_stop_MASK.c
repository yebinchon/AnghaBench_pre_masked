
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ bulk_buffer; int filesys_lock; int response_event; int filesys_msg_avail; int filesys_thread; scalar_t__ initialised; int open_handle; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void**) ;

void FUNC_8 ()
{
   int32_t VAR_1;
   void *VAR_2;

   if(FUNC_0() != 0)
      return;

   VAR_1 = FUNC_1(VAR_0.open_handle);
   FUNC_2(VAR_1 == 0);

   VAR_0.initialised = 0;

   FUNC_4(&VAR_0.filesys_msg_avail);
   FUNC_7(&VAR_0.filesys_thread, &VAR_2);

   FUNC_3(&VAR_0.filesys_msg_avail);
   FUNC_3(&VAR_0.response_event);
   FUNC_6(&VAR_0.filesys_lock);

   if(VAR_0.bulk_buffer)
      FUNC_5(VAR_0.bulk_buffer);
}
