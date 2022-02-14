
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {int capabilities; int pf_control; int pf_write; int pf_read; int (* pf_close ) (TYPE_1__*) ;int * module; int uri; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
typedef int VC_CONTAINER_IO_MODULE_T ;
typedef int VC_CONTAINER_IO_MODE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (int ,int*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;

VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_IO_T *VAR_7,
   const char *VAR_8, VC_CONTAINER_IO_MODE_T VAR_9 )
{
   VC_CONTAINER_STATUS_T VAR_10 = VAR_3;
   VC_CONTAINER_IO_MODULE_T *VAR_11 = 0;
   bool VAR_12;
   FUNC_0(VAR_8);

   if (!FUNC_3(VAR_7->uri, &VAR_12))
   { VAR_10 = VAR_1; goto error; }

   VAR_11 = (VC_CONTAINER_IO_MODULE_T *)FUNC_4( sizeof(*VAR_11) );
   if (!VAR_11) { VAR_10 = VAR_0; goto error; }
   FUNC_5(VAR_11, 0, sizeof(*VAR_11));
   VAR_7->module = VAR_11;

   VAR_10 = FUNC_2(VAR_7, VAR_9, VAR_12);
   if (VAR_10 != VAR_3)
      goto error;

   VAR_7->pf_close = FUNC_1;
   VAR_7->pf_read = VAR_5;
   VAR_7->pf_write = VAR_6;
   VAR_7->pf_control = VAR_4;


   VAR_7->capabilities = VAR_2;

   return VAR_3;

error:
   FUNC_1(VAR_7);
   return VAR_10;
}
