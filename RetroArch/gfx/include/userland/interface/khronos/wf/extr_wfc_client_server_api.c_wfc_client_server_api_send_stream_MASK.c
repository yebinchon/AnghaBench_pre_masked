
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
typedef int WFC_IPC_MSG_TYPE ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {TYPE_2__ header; int stream; } ;
typedef TYPE_1__ WFC_IPC_MSG_STREAM_T ;
typedef int WFCNativeStreamType ;
typedef int VCOS_STATUS_T ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static VCOS_STATUS_T FUNC_1(WFC_IPC_MSG_TYPE VAR_0, WFCNativeStreamType VAR_1)
{
   WFC_IPC_MSG_STREAM_T VAR_2;

   VAR_2.header.type = VAR_0;
   VAR_2.stream = VAR_1;

   return FUNC_0(&VAR_2.header, sizeof(VAR_2));
}
