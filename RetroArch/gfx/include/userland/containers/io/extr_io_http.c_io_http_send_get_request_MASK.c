
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {scalar_t__ size; int uri_parts; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_6__ {char* comms_buffer; scalar_t__ cur_offset; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int ,char*,int,int) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6(VC_CONTAINER_IO_T *VAR_6, size_t VAR_7)
{
   VC_CONTAINER_IO_MODULE_T *VAR_8 = VAR_6->module;
   char *VAR_9 = VAR_8->comms_buffer, *VAR_10 = VAR_9 + sizeof(VAR_8->comms_buffer);
   int64_t VAR_11;

   VAR_9 += FUNC_3(VAR_9, VAR_10 - VAR_9, VAR_3, VAR_1,
                   FUNC_5(VAR_6->uri_parts), FUNC_4(VAR_6->uri_parts));

   VAR_11 = VAR_8->cur_offset + VAR_7 - 1;
   if (VAR_11 >= VAR_6->size)
      VAR_11 = VAR_6->size - 1;

   if (VAR_9 < VAR_10)
      VAR_9 += FUNC_3(VAR_9, VAR_10 - VAR_9, VAR_2, VAR_8->cur_offset, VAR_11);

   if (VAR_9 < VAR_10)
      VAR_9 += FUNC_3(VAR_9, VAR_10 - VAR_9, VAR_4);

   if (VAR_9 >= VAR_10)
   {
      FUNC_1(0, "comms buffer too small (%i/%u)", (int)(VAR_10 - VAR_9),
                sizeof(VAR_8->comms_buffer));
      return VAR_5;
   }

   if (VAR_0)
      FUNC_0(((void*)0), "Sending server read request:\n%s\n---------------------\n", VAR_8->comms_buffer);
   return FUNC_2(VAR_6);
}
