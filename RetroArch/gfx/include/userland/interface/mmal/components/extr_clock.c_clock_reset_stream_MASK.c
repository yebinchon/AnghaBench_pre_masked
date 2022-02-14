
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
struct TYPE_4__ {TYPE_2__ std_filter; TYPE_2__ avg_filter; int started; scalar_t__ mt_off_std; scalar_t__ mt_off_avg; scalar_t__ mt_off; scalar_t__ stc; scalar_t__ pts; } ;
typedef TYPE_1__ CLOCK_STREAM_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(CLOCK_STREAM_T *VAR_1)
{
   if (!VAR_1)
      return;

   VAR_1->pts = 0;
   VAR_1->stc = 0;
   VAR_1->mt_off = 0;
   VAR_1->mt_off_avg = 0;
   VAR_1->mt_off_std = 0;
   VAR_1->started = VAR_0;

   FUNC_0(&VAR_1->avg_filter, VAR_1->avg_filter.length);
   FUNC_0(&VAR_1->std_filter, VAR_1->std_filter.length);
}
