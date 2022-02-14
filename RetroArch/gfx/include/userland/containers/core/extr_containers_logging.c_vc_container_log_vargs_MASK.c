
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef int uint32_t ;
typedef int android_LogPriority ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_LOG_TYPE_T ;
struct TYPE_4__ {int verbosity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char const*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int ) ;
 int VAR_8 ;
 int FUNC_4 (char const*,int ) ;

void FUNC_5(VC_CONTAINER_T *VAR_9, VC_CONTAINER_LOG_TYPE_T VAR_10, const char *VAR_11, va_list VAR_12)
{
   uint32_t VAR_13 = VAR_9 ? VAR_9->priv->verbosity : VAR_8;


   if(!(VAR_10 & VAR_13)) return;
   FUNC_3(VAR_11, VAR_12);





}
