
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct tty_struct {int dummy; } ;
struct TYPE_2__ {int char_count; int char_max; int char_last; int int_count; } ;
struct cyclades_port {scalar_t__ tty; TYPE_1__ mon; int last_active; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct cyclades_port* VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char) ;
 int FUNC_1 (struct tty_struct*,int) ;
 int FUNC_2 (struct tty_struct*,char,int ) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_11, void *VAR_12)
{
 struct tty_struct *VAR_13;
 struct cyclades_port *VAR_14;
 volatile unsigned char *VAR_15 = (unsigned char *)VAR_0;
 int VAR_16;
 char VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;


 VAR_16 = (u_short) (VAR_15[VAR_1] >> 2);
 VAR_14 = &VAR_9[VAR_16];
 VAR_14->last_active = VAR_10;
 VAR_19 = VAR_18 = VAR_15[VAR_5];
 if (VAR_14->tty == 0) {
  while (VAR_18--) {
   VAR_17 = VAR_15[VAR_3];
  }
 } else {
  VAR_13 = VAR_14->tty;
  VAR_20 = FUNC_1(VAR_13, VAR_18);
  while (VAR_20--) {
   VAR_17 = VAR_15[VAR_3];
   FUNC_2(VAR_13, VAR_17, VAR_8);



  }
  FUNC_3(VAR_13);
 }

 VAR_15[VAR_4] = VAR_19 ? 0 : VAR_2;
 return VAR_7;
}
