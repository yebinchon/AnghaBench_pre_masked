
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int IsDisconnected; int SslInOut; int RawOut; int RawIn; } ;
typedef TYPE_1__ SSL_PIPE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int) ;

bool FUNC_2(SSL_PIPE *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0) || VAR_0->IsDisconnected)
 {
  return 0;
 }

 for (VAR_1 = 0;VAR_1 < 2;VAR_1++)
 {
  if (FUNC_1(VAR_0->RawIn, 1, 0) == 0)
  {
   VAR_0->IsDisconnected = 1;
   FUNC_0("SyncSslPipe: s->RawIn error.\n");
   return 0;
  }

  if (FUNC_1(VAR_0->RawOut, 0, 1) == 0)
  {
   VAR_0->IsDisconnected = 1;
   FUNC_0("SyncSslPipe: s->RawOut error.\n");
   return 0;
  }

  if (FUNC_1(VAR_0->SslInOut, 1, 1) == 0)
  {
   VAR_0->IsDisconnected = 1;
   FUNC_0("SyncSslPipe: s->SslInOut error.\n");
   return 0;
  }
 }

 return 1;
}
