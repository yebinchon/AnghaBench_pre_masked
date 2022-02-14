
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {unsigned int size; int id; } ;
struct TYPE_9__ {char const* name; int control; int input_num; } ;
struct TYPE_8__ {TYPE_4__ hdr; int uri; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PARAMETER_URI_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef int MMALPLAY_T ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (unsigned int) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned int) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (int ,char const*,size_t,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_8(MMALPLAY_T *VAR_4,
   MMAL_COMPONENT_T *VAR_5, const char *VAR_6)
{
   MMAL_PARAMETER_URI_T *VAR_7 = 0;
   unsigned int VAR_8;
   MMAL_STATUS_T VAR_9 = VAR_0;
   size_t VAR_10;
   FUNC_1(VAR_4);

   if(!VAR_5->input_num)
   {
      FUNC_0("%s doesn't have input ports", VAR_5->name);
      goto error;
   }


   VAR_10 = FUNC_6(VAR_6);
   VAR_8 = sizeof(MMAL_PARAMETER_HEADER_T) + VAR_10;
   VAR_7 = FUNC_3(VAR_8);
   if(!VAR_7)
   {
      FUNC_0("out of memory");
      VAR_9 = VAR_1;
      goto error;
   }
   FUNC_4(VAR_7, 0, VAR_8);
   VAR_7->hdr.id = VAR_2;
   VAR_7->hdr.size = VAR_8;
   FUNC_7(VAR_7->uri, VAR_6, VAR_10 + 1, 0);
   VAR_9 = FUNC_5(VAR_5->control, &VAR_7->hdr);
   if(VAR_9 != VAR_3)
   {
      FUNC_0("could not open file %s", VAR_6);
      goto error;
   }

 error:
   if(VAR_7)
      FUNC_2(VAR_7);
   return VAR_9;
}
