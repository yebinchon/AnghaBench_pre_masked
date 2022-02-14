
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {int uri_parts; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_6__ {char* comms_buffer; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_IO_T *VAR_4)
{
   VC_CONTAINER_IO_MODULE_T *VAR_5 = VAR_4->module;
   char *VAR_6 = VAR_5->comms_buffer, *VAR_7 = VAR_6 + sizeof(VAR_5->comms_buffer);

   VAR_6 += FUNC_2(VAR_6, VAR_7 - VAR_6, VAR_1, VAR_0,
                   FUNC_4(VAR_4->uri_parts), FUNC_3(VAR_4->uri_parts));
   if (VAR_6 < VAR_7)
      VAR_6 += FUNC_2(VAR_6, VAR_7 - VAR_6, VAR_2);

   if (VAR_6 >= VAR_7)
   {
      FUNC_0(0, "comms buffer too small (%i/%u)", (int)(VAR_7 - VAR_6),
                sizeof(VAR_5->comms_buffer));
      return VAR_3;
   }

   return FUNC_1(VAR_4);
}
