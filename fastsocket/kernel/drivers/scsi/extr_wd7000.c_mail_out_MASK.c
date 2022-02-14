
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int unchar ;
struct TYPE_8__ {TYPE_3__* ogmb; } ;
struct TYPE_11__ {int next_ogmb; TYPE_2__* sh; TYPE_1__ mb; } ;
struct TYPE_10__ {int status; scalar_t__ scbptr; } ;
struct TYPE_9__ {int host_lock; } ;
typedef int Scb ;
typedef TYPE_3__ Mailbox ;
typedef TYPE_4__ Adapter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (TYPE_4__*,int*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(Adapter * VAR_2, Scb * VAR_3)



{
 int VAR_4, VAR_5;
 unsigned long VAR_6;
 unchar VAR_7;
 Mailbox *VAR_8 = VAR_2->mb.ogmb;
 int *VAR_9 = &(VAR_2->next_ogmb);

 FUNC_2("wd7000_mail_out: 0x%06lx", (long) VAR_3);


 FUNC_3(VAR_2->sh->host_lock, VAR_6);
 VAR_5 = *VAR_9;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_8[VAR_5].status == 0) {
   FUNC_2(" using OGMB 0x%x", VAR_5);
   VAR_8[VAR_5].status = 1;
   FUNC_0((unchar *) VAR_8[VAR_5].scbptr, (int) VAR_3);

   *VAR_9 = (VAR_5 + 1) % VAR_0;
   break;
  } else
   VAR_5 = (VAR_5 + 1) % VAR_0;
 }
 FUNC_4(VAR_2->sh->host_lock, VAR_6);

 FUNC_2(", scb is 0x%06lx", (long) VAR_3);

 if (VAR_4 >= VAR_0) {
  FUNC_2(", no free OGMBs.\n");
  return (0);
 }

 FUNC_5(VAR_2);

 VAR_7 = VAR_1 | VAR_5;
 FUNC_1(VAR_2, &VAR_7, 1);

 FUNC_2(", awaiting interrupt.\n");

 return (1);
}
