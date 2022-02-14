
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int len; int data; } ;
struct TYPE_5__ {int cause; } ;
struct l3_process {int debug; TYPE_3__* st; TYPE_1__ para; } ;
struct TYPE_6__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_7__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct l3_process*,struct sk_buff*,int ) ;
 int* FUNC_1 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (struct l3_process*,int,int *) ;
 int FUNC_4 (struct l3_process*,int) ;
 int FUNC_5 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_6(struct l3_process *VAR_6, u_char VAR_7, void *VAR_8)
{
 struct sk_buff *VAR_9 = VAR_8;
 int VAR_10 = 0;
 u_char *VAR_11;

 if ((VAR_11 = FUNC_1(VAR_9->data, VAR_9->len, VAR_2, 0))) {
  if (VAR_11[1] != 2) {
   VAR_10 = 1;
   VAR_6->para.cause = 100;
  } else if (!(VAR_11[2] & 0x70)) {
   switch (VAR_11[2]) {
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x84:
    case 0x85:
    case 0x87:
    case 0x8a:
     switch (VAR_11[3]) {
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x88:
       break;
      default:
       VAR_10 = 2;
       VAR_6->para.cause = 100;
       break;
     }
     break;
    default:
     VAR_10 = 3;
     VAR_6->para.cause = 100;
     break;
   }
  }
 } else {
  VAR_6->para.cause = 96;
  VAR_10 = 4;
 }
 if (VAR_10) {
  if (VAR_6->debug & VAR_4)
   FUNC_2(VAR_6->st, "progress error %d", VAR_10);
  FUNC_3(VAR_6, VAR_7, ((void*)0));
  return;
 }

 VAR_10 = FUNC_0(VAR_6, VAR_9, VAR_5);
 if (VAR_10)
  FUNC_4(VAR_6, VAR_10);
 if (VAR_1 != VAR_10)
  VAR_6->st->l3.l3l4(VAR_6->st, VAR_0 | VAR_3, VAR_6);
}
