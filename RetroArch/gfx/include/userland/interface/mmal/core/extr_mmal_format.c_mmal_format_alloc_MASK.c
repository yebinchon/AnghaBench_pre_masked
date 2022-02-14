
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* es; } ;
struct TYPE_7__ {TYPE_1__ format; int extradata_size; int es; int magic; } ;
typedef TYPE_1__ MMAL_ES_FORMAT_T ;
typedef TYPE_2__ MMAL_ES_FORMAT_PRIVATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_1 (int,int,char*) ;

MMAL_ES_FORMAT_T *FUNC_2(void)
{
   MMAL_ES_FORMAT_PRIVATE_T *VAR_2;

   VAR_2 = FUNC_1(1, sizeof(*VAR_2), "mmal format");
   if(!VAR_2) return 0;
   FUNC_0(VAR_2, 0, sizeof(*VAR_2));

   VAR_2->magic = VAR_1;
   VAR_2->format.es = (void *)&VAR_2->es;
   VAR_2->extradata_size = VAR_0;

   return &VAR_2->format;
}
