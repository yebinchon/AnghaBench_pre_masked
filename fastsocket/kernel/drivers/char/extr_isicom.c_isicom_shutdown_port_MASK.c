
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int flags; } ;
struct TYPE_4__ {int flags; } ;
struct isi_port {TYPE_1__ port; struct isi_board* card; } ;
struct isi_board {scalar_t__ count; int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 int FUNC_1 (struct isi_port*) ;
 int FUNC_2 (struct isi_board*) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (TYPE_1__*) ;
 struct tty_struct* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_9(struct isi_port *VAR_2)
{
 struct isi_board *VAR_3 = VAR_2->card;
 struct tty_struct *VAR_4;

 VAR_4 = FUNC_7(&VAR_2->port);

 if (!(VAR_2->port.flags & VAR_0)) {
  FUNC_5(VAR_4);
  return;
 }

 FUNC_6(&VAR_2->port);
 VAR_2->port.flags &= ~VAR_0;

 FUNC_8(&VAR_2->port, ((void*)0));







 if (FUNC_0(VAR_4))

  FUNC_1(VAR_2);


 if (VAR_4)
  FUNC_4(VAR_1, &VAR_4->flags);

 if (--VAR_3->count < 0) {
  FUNC_3("isicom_shutdown_port: bad board(0x%lx) count %d.\n",
   VAR_3->base, VAR_3->count);
  VAR_3->count = 0;
 }


 if (FUNC_0(VAR_4)) {
  if (!VAR_3->count)
   FUNC_2(VAR_3);
 }
 FUNC_5(VAR_4);
}
