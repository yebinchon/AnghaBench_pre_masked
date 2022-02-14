
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ temp; scalar_t__ refcount; int io; } ;
typedef TYPE_1__ VC_CONTAINER_WRITER_EXTRAIO_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_2, const char *VAR_3,
   VC_CONTAINER_WRITER_EXTRAIO_T *VAR_4)
{
   VC_CONTAINER_STATUS_T VAR_5 = VAR_1;
   FUNC_0(VAR_2);

   VAR_4->io = FUNC_1( VAR_3, VAR_0, &VAR_5 );
   VAR_4->refcount = 0;
   VAR_4->temp = 0;
   return VAR_5;
}
