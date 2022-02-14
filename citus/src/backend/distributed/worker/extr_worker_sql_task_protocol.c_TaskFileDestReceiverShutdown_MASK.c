
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_7__ {TYPE_1__ fileCompat; TYPE_3__* copyOutState; } ;
typedef TYPE_2__ TaskFileDestReceiver ;
struct TYPE_8__ {int fe_msgbuf; scalar_t__ binary; } ;
typedef int DestReceiver ;
typedef TYPE_3__* CopyOutState ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(DestReceiver *VAR_0)
{
 TaskFileDestReceiver *VAR_1 = (TaskFileDestReceiver *) VAR_0;
 CopyOutState VAR_2 = VAR_1->copyOutState;

 if (VAR_2->binary)
 {

  FUNC_3(VAR_2->fe_msgbuf);
  FUNC_0(VAR_2);
  FUNC_2(VAR_2->fe_msgbuf, VAR_1);
 }

 FUNC_1(VAR_1->fileCompat.fd);
}
