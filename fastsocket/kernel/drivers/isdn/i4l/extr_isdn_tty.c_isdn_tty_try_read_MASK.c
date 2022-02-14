
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct sk_buff {int len; unsigned char* data; } ;
struct TYPE_4__ {int* mdmreg; } ;
struct TYPE_5__ {int mcr; TYPE_1__ emu; struct tty_struct* tty; scalar_t__ online; } ;
typedef TYPE_2__ modem_info ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tty_struct*,int) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,char,int) ;
 int FUNC_5 (struct tty_struct*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_6(modem_info * VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7;
 int VAR_8;
 struct tty_struct *VAR_9;
 char VAR_10;

 if (VAR_5->online) {
  if ((VAR_9 = VAR_5->tty)) {
   if (VAR_5->mcr & VAR_4) {
    VAR_8 = VAR_6->len



     ;

    VAR_7 = FUNC_2(VAR_9, VAR_8);
    if (VAR_7 >= VAR_8) {
      if(VAR_8 > 1)
       FUNC_5(VAR_9, VAR_6->data, VAR_8 - 1);
      VAR_10 = VAR_6->data[VAR_8 - 1];



     if (VAR_5->emu.mdmreg[VAR_2] & VAR_0)
      FUNC_4(VAR_9, VAR_10, 0xFF);
     else
      FUNC_4(VAR_9, VAR_10, VAR_3);
     FUNC_3(VAR_9);
     FUNC_1(VAR_6);
     return 1;
    }
   }
  }
 }
 return 0;
}
