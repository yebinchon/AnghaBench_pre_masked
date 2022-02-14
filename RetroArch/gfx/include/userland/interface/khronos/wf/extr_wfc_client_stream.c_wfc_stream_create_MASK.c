
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
typedef int info ;
struct TYPE_9__ {void* flags; } ;
struct TYPE_10__ {scalar_t__ handle; TYPE_1__ info; int registrations; } ;
typedef TYPE_2__ WFC_STREAM_T ;
struct TYPE_11__ {int size; void* flags; } ;
typedef TYPE_3__ WFC_STREAM_INFO_T ;
typedef scalar_t__ WFCNativeStreamType ;


 int FUNC_0 (TYPE_2__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (char*,int ,scalar_t__,void*) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,TYPE_3__*,void*,void*) ;
 TYPE_2__* FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (TYPE_2__*) ;

uint32_t FUNC_11(WFCNativeStreamType VAR_6, uint32_t VAR_7)


{
   WFC_STREAM_T *VAR_8;
   uint32_t VAR_9 = 0;

   FUNC_4("%s: stream 0x%x flags 0x%x", VAR_2, VAR_6, VAR_7);


   VAR_8 = FUNC_9(VAR_6, 0);
   if(VAR_8 == ((void*)0))
   {
      FUNC_3("%s: unable to create data block for stream 0x%x", VAR_2, VAR_6);
      return VAR_1;
   }

   uint64_t VAR_10 = FUNC_6();
   uint32_t VAR_11 = (uint32_t) VAR_10;
   uint32_t VAR_12 = (uint32_t) (VAR_10 >> 32);
   int VAR_13 = VAR_4;
   WFC_STREAM_INFO_T VAR_14;

   FUNC_1(&VAR_14, 0, sizeof(VAR_14));
   VAR_14.size = sizeof(VAR_14);
   VAR_14.flags = VAR_7;

   do
   {
      VAR_8->handle = FUNC_8(VAR_6, &VAR_14, VAR_11, VAR_12);
      FUNC_5("%s: server create returned 0x%x", VAR_2, VAR_8->handle);



      if (VAR_8->handle == VAR_3)
         FUNC_7(VAR_5);
   }
   while (VAR_8->handle == VAR_3 && VAR_13-- > 0);

   if (VAR_8->handle == VAR_3)
   {

      FUNC_3("%s: stream 0x%x already exists in server", VAR_2, VAR_6);
      VAR_9 = VAR_0;
      FUNC_10(VAR_8);
   }
   else
   {
      FUNC_2(VAR_8->handle == VAR_6);

      VAR_8->registrations++;
      VAR_8->info.flags = VAR_7;
      FUNC_0(VAR_8);
   }

   return VAR_9;
}
