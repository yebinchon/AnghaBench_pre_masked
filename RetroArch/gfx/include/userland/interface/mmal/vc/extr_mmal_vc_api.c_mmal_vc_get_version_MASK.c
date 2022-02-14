
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int msg ;
struct TYPE_3__ {int minimum; int minor; int major; int header; } ;
typedef TYPE_1__ mmal_worker_version ;
typedef scalar_t__ MMAL_STATUS_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int,int ,TYPE_1__*,size_t*,int ) ;
 int FUNC_2 (int) ;

MMAL_STATUS_T FUNC_3(uint32_t *VAR_4, uint32_t *VAR_5, uint32_t *VAR_6)
{
   mmal_worker_version VAR_7;
   size_t VAR_8 = sizeof(VAR_7);
   MMAL_STATUS_T VAR_9;

   VAR_9 = FUNC_1(FUNC_0(), &VAR_7.header, sizeof(VAR_7),
                                     VAR_3, &VAR_7, &VAR_8, VAR_1);

   if (VAR_9 != VAR_2)
      return VAR_9;

   if (!FUNC_2(VAR_8 == sizeof(VAR_7)))
      return VAR_0;

   *VAR_4 = VAR_7.major;
   *VAR_5 = VAR_7.minor;
   *VAR_6 = VAR_7.minimum;
   return VAR_2;
}
