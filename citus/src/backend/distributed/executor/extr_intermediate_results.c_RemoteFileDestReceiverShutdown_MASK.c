
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int fd; } ;
struct TYPE_6__ {int fe_msgbuf; scalar_t__ binary; } ;
struct TYPE_5__ {TYPE_3__ fileCompat; scalar_t__ writeLocalFile; TYPE_2__* copyOutState; int * connectionList; } ;
typedef TYPE_1__ RemoteFileDestReceiver ;
typedef int List ;
typedef int DestReceiver ;
typedef TYPE_2__* CopyOutState ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(DestReceiver *VAR_0)
{
 RemoteFileDestReceiver *VAR_1 = (RemoteFileDestReceiver *) VAR_0;

 List *VAR_2 = VAR_1->connectionList;
 CopyOutState VAR_3 = VAR_1->copyOutState;

 if (VAR_3->binary)
 {

  FUNC_5(VAR_3->fe_msgbuf);
  FUNC_0(VAR_3);
  FUNC_1(VAR_3->fe_msgbuf, VAR_2);

  if (VAR_1->writeLocalFile)
  {
   FUNC_4(VAR_3->fe_msgbuf, &VAR_1->fileCompat);
  }
 }


 FUNC_2(0, VAR_2);

 if (VAR_1->writeLocalFile)
 {
  FUNC_3(VAR_1->fileCompat.fd);
 }
}
