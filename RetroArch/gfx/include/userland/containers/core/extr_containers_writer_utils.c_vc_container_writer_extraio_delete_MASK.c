
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_8__* io; scalar_t__ refcount; scalar_t__ temp; } ;
typedef TYPE_2__ VC_CONTAINER_WRITER_EXTRAIO_T ;
struct TYPE_11__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {int uri; } ;
struct TYPE_9__ {TYPE_8__* tmp_io; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 char* FUNC_4 (int ) ;

VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_T *VAR_0, VC_CONTAINER_WRITER_EXTRAIO_T *VAR_1)
{
   VC_CONTAINER_STATUS_T VAR_2;
   char *VAR_3 = VAR_1->temp ? FUNC_4(VAR_1->io->uri) : 0;

   while(VAR_1->refcount) FUNC_3(VAR_0, VAR_1);
   VAR_2 = FUNC_2( VAR_1->io );


   if(VAR_3) FUNC_1(VAR_3);
   if(VAR_3) FUNC_0(VAR_3);

   if(VAR_0->priv->tmp_io == VAR_1->io)
      VAR_0->priv->tmp_io = 0;

   return VAR_2;
}
