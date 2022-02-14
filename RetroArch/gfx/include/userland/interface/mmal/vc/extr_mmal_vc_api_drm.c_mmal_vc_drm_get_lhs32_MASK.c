
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int req ;
typedef int reply ;
typedef int mmal_worker_msg_header ;
struct TYPE_3__ {int secret; } ;
typedef TYPE_1__ mmal_worker_drm_get_lhs32_reply ;
typedef scalar_t__ MMAL_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *,int,int ,TYPE_1__*,size_t*,int ) ;

int FUNC_5(unsigned char * VAR_3)
{
   MMAL_STATUS_T VAR_4;
   mmal_worker_msg_header VAR_5;
   mmal_worker_drm_get_lhs32_reply VAR_6;
   size_t VAR_7 = sizeof(VAR_6);
   VAR_4 = FUNC_3();
   if (VAR_4 != VAR_1) return VAR_4;

   VAR_4 = FUNC_4(FUNC_2(),
                                     &VAR_5, sizeof(VAR_5),
                                     VAR_2,
                                     &VAR_6, &VAR_7, VAR_0);
   FUNC_0(VAR_3, VAR_6.secret, 32);
   FUNC_1();
   return VAR_4;
}
