
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* entries; int index; } ;
struct TYPE_4__ {int event_type; int time; } ;
typedef int MMAL_DBG_EVENT_TYPE_T ;
typedef TYPE_1__ MMAL_DBG_ENTRY_T ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline MMAL_DBG_ENTRY_T *FUNC_2(MMAL_DBG_EVENT_TYPE_T VAR_3 ) {
   uint32_t VAR_4;
   MMAL_DBG_ENTRY_T *VAR_5;
   FUNC_1(&VAR_1);
   VAR_4 = VAR_2->index++;
   VAR_5 = VAR_2->entries + (VAR_4 & VAR_0);
   VAR_5->time = FUNC_0();
   VAR_5->event_type = VAR_3;
   return VAR_5;
}
