
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int buffer_header_callback; } ;
struct TYPE_11__ {int is_enabled; scalar_t__ buffer_num; scalar_t__ buffer_num_min; scalar_t__ buffer_size; scalar_t__ buffer_size_min; TYPE_1__* priv; } ;
struct TYPE_10__ {scalar_t__ (* pf_enable ) (TYPE_2__*,int ) ;TYPE_3__* core; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PORT_PRIVATE_CORE_T ;
typedef int MMAL_PORT_BH_CB_T ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_6(MMAL_PORT_T *VAR_2, MMAL_PORT_BH_CB_T VAR_3)
{
   MMAL_PORT_PRIVATE_CORE_T* VAR_4 = VAR_2->priv->core;
   MMAL_STATUS_T VAR_5 = VAR_1;

   FUNC_0(VAR_2);

   if (VAR_2->is_enabled)
      goto end;


   if (VAR_2->buffer_num < VAR_2->buffer_num_min)
   {
      FUNC_2("buffer_num too small (%i/%i)", (int)VAR_2->buffer_num, (int)VAR_2->buffer_num_min);
      VAR_5 = VAR_0;
      goto end;
   }
   if (VAR_2->buffer_size < VAR_2->buffer_size_min)
   {
      FUNC_2("buffer_size too small (%i/%i)", (int)VAR_2->buffer_size, (int)VAR_2->buffer_size_min);
      VAR_5 = VAR_0;
      goto end;
   }

   VAR_4->buffer_header_callback = VAR_3;
   VAR_5 = VAR_2->priv->pf_enable(VAR_2, VAR_3);
   if (VAR_5 != VAR_1)
      goto end;

   FUNC_1(VAR_2);
   VAR_2->is_enabled = 1;
   FUNC_4(VAR_2);

end:
   FUNC_3(VAR_2);
   return VAR_5;
}
