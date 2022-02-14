
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct VC_CONTAINER_IO_MODULE_T {int dummy; } ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_4__ {int size; int pf_seek; int pf_read; int pf_close; struct VC_CONTAINER_IO_MODULE_T* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
typedef int VC_CONTAINER_IO_CAPABILITIES_T ;
typedef int FILE ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (char const*,int ,int ,int *) ;

__attribute__((used)) static VC_CONTAINER_IO_T *FUNC_6( const char *VAR_8, VC_CONTAINER_STATUS_T *VAR_9 )
{
   VC_CONTAINER_IO_T *VAR_10;
   VC_CONTAINER_IO_CAPABILITIES_T VAR_11 = VAR_3;
   FILE *VAR_12;

   VAR_12 = FUNC_2(VAR_8, "rb");
   if (!VAR_12)
   {
      *VAR_9 = VAR_2;
      return ((void*)0);
   }

   VAR_10 = FUNC_5( VAR_8, 0, VAR_11, VAR_9 );
   if(!VAR_10)
   {
     FUNC_0(0, "error creating io (%i)", *VAR_9);
     FUNC_1(VAR_12);
     return ((void*)0);
   }

   VAR_10->module = (struct VC_CONTAINER_IO_MODULE_T *)VAR_12;
   VAR_10->pf_close = VAR_5;
   VAR_10->pf_read = VAR_6;
   VAR_10->pf_seek = VAR_7;


   FUNC_3(VAR_12, 0, VAR_0);
   VAR_10->size = FUNC_4(VAR_12);
   FUNC_3(VAR_12, 0, VAR_1);

   *VAR_9 = VAR_4;
   return VAR_10;
}
