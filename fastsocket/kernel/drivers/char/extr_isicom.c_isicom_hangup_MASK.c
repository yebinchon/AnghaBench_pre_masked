
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct isi_port* driver_data; } ;
struct isi_port {int port; TYPE_1__* card; } ;
struct TYPE_2__ {int card_lock; } ;


 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;
 int FUNC_1 (struct isi_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct isi_port *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 if (FUNC_0(VAR_1, VAR_0->name, "isicom_hangup"))
  return;

 FUNC_2(&VAR_1->card->card_lock, VAR_2);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->card->card_lock, VAR_2);

 FUNC_4(&VAR_1->port);
}
