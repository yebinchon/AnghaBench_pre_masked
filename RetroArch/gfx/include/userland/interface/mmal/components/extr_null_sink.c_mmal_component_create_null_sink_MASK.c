
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int buffer_num_min; int buffer_num_recommended; TYPE_2__* priv; } ;
struct TYPE_10__ {unsigned int input_num; TYPE_5__** input; TYPE_1__* priv; } ;
struct TYPE_9__ {int pf_set_format; int pf_send; int pf_flush; int pf_disable; int pf_enable; } ;
struct TYPE_8__ {int (* pf_destroy ) (TYPE_3__*) ;} ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_5__** FUNC_1 (TYPE_3__*,unsigned int,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(const char *VAR_9, MMAL_COMPONENT_T *VAR_10)
{
   MMAL_STATUS_T VAR_11 = VAR_0;
   unsigned int VAR_12;
   FUNC_0(VAR_9);

   VAR_10->priv->pf_destroy = FUNC_2;


   VAR_10->input = FUNC_1(VAR_10, VAR_3, VAR_1, 0);
   if(!VAR_10->input)
      goto error;
   VAR_10->input_num = VAR_3;

   for(VAR_12 = 0; VAR_12 < VAR_10->input_num; VAR_12++)
   {
      VAR_10->input[VAR_12]->priv->pf_enable = VAR_5;
      VAR_10->input[VAR_12]->priv->pf_disable = VAR_4;
      VAR_10->input[VAR_12]->priv->pf_flush = VAR_6;
      VAR_10->input[VAR_12]->priv->pf_send = VAR_8;
      VAR_10->input[VAR_12]->priv->pf_set_format = VAR_7;
      VAR_10->input[VAR_12]->buffer_num_min = 1;
      VAR_10->input[VAR_12]->buffer_num_recommended = 1;
   }

   return VAR_2;

 error:
   FUNC_2(VAR_10);
   return VAR_11;
}
