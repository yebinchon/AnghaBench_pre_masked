
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_7__ {int capabilities; int pf_write; int pf_read; int pf_close; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_8__ {int is_native_order; int * stream; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;
typedef scalar_t__ VC_CONTAINER_IO_MODE_T ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int * FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int *) ;

VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_IO_T *VAR_7,
   const char *VAR_8, VC_CONTAINER_IO_MODE_T VAR_9 )
{
   VC_CONTAINER_STATUS_T VAR_10 = VAR_3;
   VC_CONTAINER_IO_MODULE_T *VAR_11 = 0;
   FILE *VAR_12 = 0;
   bool VAR_13 = 1;
   FUNC_0(VAR_8);

   VAR_12 = FUNC_4(VAR_7, VAR_9, &VAR_10);
   if (VAR_10 != VAR_3) goto error;

   if (VAR_9 == VAR_2)
      VAR_10 = FUNC_6(VAR_12);
   else
      VAR_10 = FUNC_5(VAR_12, &VAR_13);
   if (VAR_10 != VAR_3) goto error;

   VAR_11 = FUNC_2( sizeof(*VAR_11) );
   if(!VAR_11) { VAR_10 = VAR_0; goto error; }
   FUNC_3(VAR_11, 0, sizeof(*VAR_11));

   VAR_7->module = VAR_11;
   VAR_11->stream = VAR_12;
   VAR_11->is_native_order = VAR_13;
   VAR_7->pf_close = VAR_4;
   VAR_7->pf_read = VAR_5;
   VAR_7->pf_write = VAR_6;


   VAR_7->capabilities = VAR_1;
   return VAR_3;

error:
   if(VAR_12) FUNC_1(VAR_12);
   return VAR_10;
}
