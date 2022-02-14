
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int size; int id; } ;
struct TYPE_8__ {TYPE_4__ hdr; scalar_t__ data; } ;
struct TYPE_7__ {int * output; struct TYPE_7__* encoder_component; } ;
typedef TYPE_1__ RASPISTILL_STATE ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PARAMETER_EXIF_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int * FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(RASPISTILL_STATE *VAR_3, const char *VAR_4)
{
   MMAL_STATUS_T VAR_5;
   MMAL_PARAMETER_EXIF_T *VAR_6 = (MMAL_PARAMETER_EXIF_T*)FUNC_0(sizeof(MMAL_PARAMETER_EXIF_T) + VAR_0, 1);

   FUNC_6(VAR_3);
   FUNC_6(VAR_3->encoder_component);


   if (!VAR_4 || FUNC_3(VAR_4, '=') == ((void*)0) || FUNC_4(VAR_4) > VAR_0-1)
      return VAR_1;

   VAR_6->hdr.id = VAR_2;

   FUNC_5((char*)VAR_6->data, VAR_4, VAR_0-1);

   VAR_6->hdr.size = sizeof(MMAL_PARAMETER_EXIF_T) + FUNC_4((char*)VAR_6->data);

   VAR_5 = FUNC_2(VAR_3->encoder_component->output[0], &VAR_6->hdr);

   FUNC_1(VAR_6);

   return VAR_5;
}
