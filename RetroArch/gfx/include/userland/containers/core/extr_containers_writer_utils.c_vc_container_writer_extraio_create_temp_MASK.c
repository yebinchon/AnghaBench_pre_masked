
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int temp; int io; } ;
typedef TYPE_3__ VC_CONTAINER_WRITER_EXTRAIO_T ;
struct TYPE_12__ {TYPE_2__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {int tmp_io; TYPE_1__* io; } ;
struct TYPE_9__ {char* uri; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,unsigned int,char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,char*,TYPE_3__*) ;

VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_T *VAR_2, VC_CONTAINER_WRITER_EXTRAIO_T *VAR_3)
{
   VC_CONTAINER_STATUS_T VAR_4 = VAR_1;
   unsigned int VAR_5 = FUNC_3(VAR_2->priv->io->uri) + 5;
   char *VAR_6 = FUNC_1(VAR_5);
   if(!VAR_6) return VAR_0;

   FUNC_2(VAR_6, VAR_5, "%s.tmp", VAR_2->priv->io->uri);
   VAR_4 = FUNC_4(VAR_2, VAR_6, VAR_3);
   FUNC_0(VAR_6);
   VAR_3->temp = 1;

   if(VAR_4 == VAR_1 && !VAR_2->priv->tmp_io)
      VAR_2->priv->tmp_io = VAR_3->io;

   return VAR_4;
}
