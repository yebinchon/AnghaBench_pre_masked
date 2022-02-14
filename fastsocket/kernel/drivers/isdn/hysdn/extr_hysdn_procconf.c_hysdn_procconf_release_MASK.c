
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; scalar_t__ procconf; int myid; } ;
typedef TYPE_1__ hysdn_card ;
struct TYPE_6__ {int proc_net; } ;


 char* VAR_0 ;
 unsigned char* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,char*,char*,int ) ;

void
FUNC_3(void)
{
 hysdn_card *VAR_5;
 unsigned char VAR_6[20];

 VAR_5 = VAR_2;
 while (VAR_5) {

  FUNC_2(VAR_6, "%s%d", VAR_0, VAR_5->myid);
  if (VAR_5->procconf)
   FUNC_1(VAR_6, VAR_3);

  FUNC_0(VAR_5);

  VAR_5 = VAR_5->next;
 }

 FUNC_1(VAR_1, VAR_4.proc_net);
}
