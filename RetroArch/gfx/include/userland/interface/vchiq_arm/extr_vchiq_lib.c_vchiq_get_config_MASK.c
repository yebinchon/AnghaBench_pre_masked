
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
typedef TYPE_1__* VCHIQ_INSTANCE_T ;
struct TYPE_7__ {int config_size; int * pconfig; } ;
typedef TYPE_2__ VCHIQ_GET_CONFIG_T ;
typedef int VCHIQ_CONFIG_T ;
struct TYPE_6__ {int fd; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

VCHIQ_STATUS_T
FUNC_3(VCHIQ_INSTANCE_T VAR_3,
   int VAR_4,
   VCHIQ_CONFIG_T *VAR_5)
{
   VCHIQ_GET_CONFIG_T VAR_6;
   int VAR_7;

   if (!FUNC_2(VAR_3))
      return VAR_0;

   VAR_6.config_size = VAR_4;
   VAR_6.pconfig = VAR_5;

   FUNC_0(VAR_7, FUNC_1(VAR_3->fd, VAR_1, &VAR_6));

   return (VAR_7 >= 0) ? VAR_2 : VAR_0;
}
