
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {struct stliport* driver_data; } ;
struct stliport {size_t brdnr; } ;
struct stlibrd {int dummy; } ;
struct TYPE_4__ {char tximdch; int txctrl; int rxctrl; } ;
typedef TYPE_1__ asyctrl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char FUNC_0 (struct tty_struct*) ;
 char FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 struct stlibrd** VAR_4 ;
 int FUNC_3 (struct stlibrd*,struct stliport*,int ,TYPE_1__*,int,int ) ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_6, char VAR_7)
{
 struct stlibrd *VAR_8;
 struct stliport *VAR_9;
 asyctrl_t VAR_10;

 VAR_9 = VAR_6->driver_data;
 if (VAR_9 == ((void*)0))
  return;
 if (VAR_9->brdnr >= VAR_5)
  return;
 VAR_8 = VAR_4[VAR_9->brdnr];
 if (VAR_8 == ((void*)0))
  return;

 FUNC_2(&VAR_10, 0, sizeof(asyctrl_t));
 if (VAR_7 == FUNC_1(VAR_6)) {
  VAR_10.rxctrl = VAR_3;
 } else if (VAR_7 == FUNC_0(VAR_6)) {
  VAR_10.rxctrl = VAR_2;
 } else {
  VAR_10.txctrl = VAR_1;
  VAR_10.tximdch = VAR_7;
 }
 FUNC_3(VAR_8, VAR_9, VAR_0, &VAR_10, sizeof(asyctrl_t), 0);
}
