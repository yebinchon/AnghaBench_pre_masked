
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_6__ {char* uri; unsigned long max_size; int capabilities; TYPE_2__* module; int size; int pf_seek; int pf_write; int pf_read; int pf_close; int uri_parts; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_7__ {int * stream; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;
typedef scalar_t__ VC_CONTAINER_IO_MODE_T ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 char* FUNC_8 (int ) ;

VC_CONTAINER_STATUS_T FUNC_9( VC_CONTAINER_IO_T *VAR_12,
   const char *VAR_13, VC_CONTAINER_IO_MODE_T VAR_14 )
{
   VC_CONTAINER_STATUS_T VAR_15 = VAR_6;
   VC_CONTAINER_IO_MODULE_T *VAR_16 = 0;
   const char *VAR_17 = VAR_14 == VAR_5 ? "wb+" : "rb";
   const char *VAR_18 = VAR_12->uri;
   FILE *VAR_19 = 0;
   FUNC_0(VAR_13);

   if(FUNC_8(VAR_12->uri_parts))
      VAR_18 = FUNC_8(VAR_12->uri_parts);

   VAR_19 = FUNC_2(VAR_18, VAR_17);
   if(!VAR_19) { VAR_15 = VAR_3; goto error; }


   FUNC_7(VAR_19, ((void*)0), VAR_7, 0);

   VAR_16 = FUNC_5( sizeof(*VAR_16) );
   if(!VAR_16) { VAR_15 = VAR_2; goto error; }
   FUNC_6(VAR_16, 0, sizeof(*VAR_16));

   VAR_12->module = VAR_16;
   VAR_16->stream = VAR_19;
   VAR_12->pf_close = VAR_8;
   VAR_12->pf_read = VAR_9;
   VAR_12->pf_write = VAR_11;
   VAR_12->pf_seek = VAR_10;

   if(VAR_14 == VAR_5)
   {
      VAR_12->max_size = (1UL<<31)-1;
   }
   else
   {

      FUNC_3(VAR_12->module->stream, 0, VAR_0);
      VAR_12->size = FUNC_4(VAR_12->module->stream);
      FUNC_3(VAR_12->module->stream, 0, VAR_1);
   }

   VAR_12->capabilities = VAR_4;
   return VAR_6;

 error:
   if(VAR_19) FUNC_1(VAR_19);
   return VAR_15;
}
