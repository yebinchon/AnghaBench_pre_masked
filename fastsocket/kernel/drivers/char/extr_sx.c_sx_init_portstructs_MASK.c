
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ops; } ;
struct TYPE_3__ {int close_delay; int closing_wait; int driver_lock; int port_write_mutex; int * rd; int magic; TYPE_2__ port; } ;
struct sx_port {int ch_base; int line; TYPE_1__ gs; struct sx_board* board; } ;
struct sx_board {int nports; int port_base; struct sx_port* ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sx_board*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sx_board* VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct sx_port* FUNC_3 (int,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct sx_board*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_10 ;
 struct sx_port* VAR_11 ;
 int FUNC_7 (struct sx_board*,int,int ) ;
 int FUNC_8 (struct sx_board*,int,int ) ;
 int VAR_12 ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(int VAR_13, int VAR_14)
{
 struct sx_board *VAR_15;
 struct sx_port *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;

 FUNC_1();




 VAR_11 = FUNC_3(VAR_14, sizeof(struct sx_port), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_16 = VAR_11;
 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
  VAR_15 = &VAR_7[VAR_17];
  VAR_15->ports = VAR_16;
  for (VAR_18 = 0; VAR_18 < VAR_7[VAR_17].nports; VAR_18++) {
   FUNC_6(VAR_4, "initing port %d\n", VAR_18);
   FUNC_9(&VAR_16->gs.port);
   VAR_16->gs.port.ops = &VAR_10;
   VAR_16->gs.magic = VAR_6;
   VAR_16->gs.close_delay = VAR_2 / 2;
   VAR_16->gs.closing_wait = 30 * VAR_2;
   VAR_16->board = VAR_15;
   VAR_16->gs.rd = &VAR_12;



   FUNC_5(&VAR_16->gs.driver_lock);



   VAR_16++;
  }
 }

 VAR_16 = VAR_11;
 VAR_21 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
  VAR_15 = &VAR_7[VAR_17];
  VAR_15->port_base = VAR_21;

  FUNC_6(VAR_5, "Board has %d channels\n",
    VAR_15->nports);
  if (VAR_15->nports <= 0)
   continue;

  for (VAR_19 = 0x80; VAR_19 != 0;
    VAR_19 = FUNC_4(VAR_15, VAR_19) & 0x7fff) {
   VAR_20 = FUNC_7(VAR_15, VAR_19, VAR_9);
   FUNC_6(VAR_5, "Module at %x: %d "
     "channels\n", VAR_19, VAR_20);
   FUNC_6(VAR_5, "Port at");
   for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {





    if (FUNC_0(VAR_15))
     VAR_16->ch_base = FUNC_8(
       VAR_15, VAR_19 + VAR_18 * 2,
       VAR_8);
    else
     VAR_16->ch_base = VAR_19 + 0x100 + 0x300 *VAR_18;

    FUNC_6(VAR_5, " %x",
      VAR_16->ch_base);
    VAR_16->line = VAR_21++;
    VAR_16++;
   }
   FUNC_6(VAR_5, "\n");
  }


 }

 FUNC_2();
 return 0;
}
