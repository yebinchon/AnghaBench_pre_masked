
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int std_filter; int avg_filter; int id; } ;
typedef int MMAL_BOOL_T ;
typedef TYPE_1__ CLOCK_STREAM_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int,int,char*) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_3(CLOCK_STREAM_T **VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
   CLOCK_STREAM_T *VAR_5 = FUNC_2(1, sizeof(CLOCK_STREAM_T), "clock stream");
   if (!VAR_5)
   {
      FUNC_0("failed to allocate stream");
      return VAR_0;
   }

   VAR_5->id = VAR_3;

   FUNC_1(&VAR_5->avg_filter, VAR_4);
   FUNC_1(&VAR_5->std_filter, VAR_4);

   *VAR_2 = VAR_5;
   return VAR_1;
}
