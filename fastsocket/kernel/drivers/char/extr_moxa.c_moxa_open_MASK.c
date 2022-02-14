
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; int termios; struct moxa_port* driver_data; } ;
struct TYPE_2__ {scalar_t__ count; int flags; } ;
struct moxa_port {scalar_t__ type; TYPE_1__ port; scalar_t__ statusflags; } ;
struct moxa_board_conf {int numPorts; struct moxa_port* ports; int ready; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty_struct*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct moxa_port*) ;
 int FUNC_2 (struct moxa_port*,int,int) ;
 int FUNC_3 (struct moxa_port*,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct tty_struct*,struct file*,struct moxa_port*) ;
 struct moxa_board_conf* VAR_10 ;
 int FUNC_6 (struct tty_struct*) ;
 int VAR_11 ;
 int FUNC_7 (struct tty_struct*,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_12(struct tty_struct *VAR_12, struct file *VAR_13)
{
 struct moxa_board_conf *VAR_14;
 struct moxa_port *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_16 = VAR_12->index;
 if (VAR_16 == VAR_6) {
  return FUNC_4(VAR_2) ? 0 : -VAR_4;
 }
 if (FUNC_9(&VAR_11))
  return -VAR_5;
 VAR_14 = &VAR_10[VAR_16 / VAR_7];
 if (!VAR_14->ready) {
  FUNC_10(&VAR_11);
  return -VAR_3;
 }

 if (VAR_16 % VAR_7 >= VAR_14->numPorts) {
  FUNC_10(&VAR_11);
  return -VAR_3;
 }

 VAR_15 = &VAR_14->ports[VAR_16 % VAR_7];
 VAR_15->port.count++;
 VAR_12->driver_data = VAR_15;
 FUNC_11(&VAR_15->port, VAR_12);
 if (!(VAR_15->port.flags & VAR_0)) {
  VAR_15->statusflags = 0;
  FUNC_7(VAR_12, VAR_12->termios);
  FUNC_2(VAR_15, 1, 1);
  FUNC_1(VAR_15);
  FUNC_3(VAR_15, VAR_15->type == VAR_9);
  VAR_15->port.flags |= VAR_0;
 }
 FUNC_10(&VAR_11);

 VAR_17 = 0;
 if (!(VAR_13->f_flags & VAR_8) && !FUNC_0(VAR_12))
  VAR_17 = FUNC_5(VAR_12, VAR_13, VAR_15);
 FUNC_8(&VAR_11);
 if (VAR_17) {
  if (VAR_15->port.count)
   if (--VAR_15->port.count == 0)
    FUNC_6(VAR_12);
 } else
  VAR_15->port.flags |= VAR_1;
 FUNC_10(&VAR_11);

 return VAR_17;
}
