
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int req ;
typedef int reply ;
struct TYPE_3__ {int header; int alloc_size; } ;
typedef TYPE_1__ mmal_worker_lmk ;
typedef int MMAL_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int,int ,TYPE_1__*,size_t*,int ) ;

MMAL_STATUS_T FUNC_2(uint32_t VAR_2)
{
   MMAL_STATUS_T VAR_3;
   mmal_worker_lmk VAR_4;
   mmal_worker_lmk VAR_5;
   size_t VAR_6 = sizeof(VAR_5);

   VAR_4.alloc_size = VAR_2;

   VAR_3 = FUNC_1(FUNC_0(),
                                     &VAR_4.header, sizeof(VAR_4),
                                     VAR_1,
                                     &VAR_5, &VAR_6, VAR_0);
   return VAR_3;
}
