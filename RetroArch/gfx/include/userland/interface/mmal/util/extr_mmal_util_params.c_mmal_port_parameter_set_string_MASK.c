
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {size_t size; int id; } ;
struct TYPE_5__ {TYPE_2__ hdr; int str; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_PARAMETER_STRING_T ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (char const*) ;

MMAL_STATUS_T FUNC_5(MMAL_PORT_T *VAR_1, uint32_t VAR_2, const char *VAR_3)
{
   MMAL_PARAMETER_STRING_T *VAR_4 = 0;
   MMAL_STATUS_T VAR_5;
   size_t VAR_6 = sizeof(VAR_4->hdr) + FUNC_4(VAR_3) + 1;

   VAR_4 = FUNC_0(1, VAR_6);
   if (!VAR_4)
      return VAR_0;

   VAR_4->hdr.id = VAR_2;
   VAR_4->hdr.size = VAR_6;
   FUNC_2(VAR_4->str, VAR_3, FUNC_4(VAR_3)+1);
   VAR_5 = FUNC_3(VAR_1, &VAR_4->hdr);
   FUNC_1(VAR_4);
   return VAR_5;
}
