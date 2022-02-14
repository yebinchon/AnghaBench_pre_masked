
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int req ;
typedef int reply ;
struct TYPE_4__ {int status; } ;
typedef TYPE_1__ mmal_worker_reply ;
struct TYPE_5__ {int header; int msg; } ;
typedef TYPE_2__ mmal_worker_host_log ;
typedef int MMAL_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,scalar_t__,int ,TYPE_1__*,size_t*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,size_t) ;
 size_t FUNC_4 (int ,char const*,int,int ) ;

MMAL_STATUS_T FUNC_5(const char *VAR_4)
{
   MMAL_STATUS_T VAR_5 = VAR_0;
   if (VAR_4)
   {
      mmal_worker_host_log VAR_6;
      mmal_worker_reply VAR_7;
      size_t VAR_8 = sizeof(VAR_7);
      size_t VAR_9 = FUNC_4(VAR_6.msg, VAR_4, sizeof(VAR_6.msg), 0);


      VAR_5 = FUNC_1(FUNC_0(), &VAR_6.header,
            sizeof(VAR_6) - sizeof(VAR_6.msg) + FUNC_3(sizeof(VAR_6.msg), VAR_9 + 1),
            VAR_3,
            &VAR_7, &VAR_8, VAR_1);

      if (VAR_5 == VAR_2)
      {
         FUNC_2(VAR_8 == sizeof(VAR_7));
         VAR_5 = VAR_7.status;
      }
   }
   return VAR_5;
}
