
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* session_header; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_12__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {int header_list; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_10__ {TYPE_4__* module; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (size_t) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_4,
      VC_CONTAINER_TRACK_MODULE_T *VAR_5 )
{
   VC_CONTAINER_STATUS_T VAR_6 = VAR_3;
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_4->priv->module;
   const char *VAR_8;
   size_t VAR_9;

   VAR_6 = FUNC_3(VAR_4, VAR_5);
   if (VAR_6 != VAR_3) return VAR_6;
   VAR_6 = FUNC_2(VAR_4);
   if (VAR_6 != VAR_3) return VAR_6;

   VAR_8 = FUNC_1(VAR_7->header_list);
   VAR_9 = FUNC_4(VAR_8);
   if (VAR_9 > VAR_0) return VAR_1;

   VAR_5->session_header = (char *)FUNC_0(VAR_9 + 1);
   if (!VAR_5->session_header) return VAR_2;
   FUNC_5(VAR_5->session_header, VAR_8, VAR_9);

   return VAR_6;
}
