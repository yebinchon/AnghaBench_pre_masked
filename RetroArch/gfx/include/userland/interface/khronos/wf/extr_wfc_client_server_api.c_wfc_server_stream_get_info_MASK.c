
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int reply ;
struct TYPE_7__ {int size; } ;
typedef TYPE_1__ WFC_STREAM_INFO_T ;
struct TYPE_9__ {int size; } ;
struct TYPE_8__ {int result; TYPE_6__ info; } ;
typedef TYPE_2__ WFC_IPC_MSG_SS_GET_INFO_T ;
typedef int WFC_IPC_MSG_HEADER_T ;
typedef int WFCNativeStreamType ;
typedef int VCOS_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_6__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,int*,size_t*) ;

uint32_t FUNC_6(WFCNativeStreamType VAR_4, WFC_STREAM_INFO_T *VAR_5)
{
   uint32_t VAR_6;
   VCOS_STATUS_T VAR_7;
   WFC_IPC_MSG_SS_GET_INFO_T VAR_8;
   size_t VAR_9 = sizeof(VAR_8) - sizeof(WFC_IPC_MSG_HEADER_T);

   if (!VAR_5)
   {
      FUNC_2("%s: NULL info pointer passed", VAR_0);
      return VAR_2;
   }

   if (VAR_5->size < sizeof(uint32_t))
   {
      FUNC_2("%s: invalid info pointer passed (size:%u)", VAR_0, VAR_5->size);
      return VAR_2;
   }

   FUNC_3("%s: stream 0x%x", VAR_0, VAR_4);
   FUNC_1(&VAR_8, 0, sizeof(VAR_8));
   VAR_7 = FUNC_5(VAR_3, VAR_4, &VAR_8.result, &VAR_9);

   if (VAR_7 == VAR_1)
   {
      VAR_6 = VAR_8.result;

      if (VAR_6 == VAR_1)
      {
         uint32_t VAR_10 = FUNC_4(VAR_5->size, VAR_8.info.size);
         FUNC_0(VAR_5, &VAR_8.info, VAR_10);
         VAR_5->size = VAR_10;
         FUNC_3("%s: copied %u bytes", VAR_0, VAR_10);
      }
      else
      {
         FUNC_2("%s: result %d", VAR_0, VAR_6);
      }
   }
   else
   {
      FUNC_2("%s: send msg status %d", VAR_0, VAR_7);
      VAR_6 = VAR_7;
   }

   return VAR_6;
}
