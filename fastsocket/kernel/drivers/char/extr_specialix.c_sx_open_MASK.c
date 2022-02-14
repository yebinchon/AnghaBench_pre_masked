
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct specialix_port* driver_data; int name; int index; } ;
struct TYPE_2__ {struct tty_struct* tty; int count; } ;
struct specialix_port {TYPE_1__ port; scalar_t__* hits; scalar_t__ overrun; } ;
struct specialix_board {int flags; int lock; int count; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tty_struct*,struct file*,struct specialix_port*) ;
 int FUNC_3 (int ,char*,int,struct specialix_board*,struct specialix_port*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct specialix_board* VAR_5 ;
 scalar_t__ FUNC_8 (struct specialix_port*,int ,char*) ;
 struct specialix_port* VAR_6 ;
 int FUNC_9 (struct specialix_board*) ;
 int FUNC_10 (struct specialix_board*,struct specialix_port*) ;

__attribute__((used)) static int FUNC_11(struct tty_struct *VAR_7, struct file *VAR_8)
{
 int VAR_9;
 int VAR_10;
 struct specialix_port *VAR_11;
 struct specialix_board *VAR_12;
 int VAR_13;
 unsigned long VAR_14;

 FUNC_4();

 VAR_9 = FUNC_0(VAR_7->index);

 if (VAR_9 >= VAR_3 || !(VAR_5[VAR_9].flags & VAR_1)) {
  FUNC_5();
  return -VAR_0;
 }

 VAR_12 = &VAR_5[VAR_9];
 VAR_11 = VAR_6 + VAR_9 * VAR_4 + FUNC_1(VAR_7->index);
 VAR_11->overrun = 0;
 for (VAR_13 = 0; VAR_13 < 10; VAR_13++)
  VAR_11->hits[VAR_13] = 0;

 FUNC_3(VAR_2,
   "Board = %d, bp = %p, port = %p, portno = %d.\n",
     VAR_9, VAR_12, VAR_11, FUNC_1(VAR_7->index));

 if (FUNC_8(VAR_11, VAR_7->name, "sx_open")) {
  FUNC_4();
  return -VAR_0;
 }

 VAR_10 = FUNC_9(VAR_12);
 if (VAR_10) {
  FUNC_5();
  return VAR_10;
 }

 FUNC_6(&VAR_12->lock, VAR_14);
 VAR_11->port.count++;
 VAR_12->count++;
 VAR_7->driver_data = VAR_11;
 VAR_11->port.tty = VAR_7;
 FUNC_7(&VAR_12->lock, VAR_14);

 VAR_10 = FUNC_10(VAR_12, VAR_11);
 if (VAR_10) {
  FUNC_4();
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_7, VAR_8, VAR_11);
 if (VAR_10) {
  FUNC_4();
  return VAR_10;
 }

 FUNC_5();
 return 0;
}
