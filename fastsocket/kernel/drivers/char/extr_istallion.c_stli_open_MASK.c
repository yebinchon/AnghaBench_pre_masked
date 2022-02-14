
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {unsigned int index; int flags; struct stliport* driver_data; } ;
struct tty_port {int flags; int count; } ;
struct stliport {int devnr; struct tty_port port; int raw_wait; int state; } ;
struct stlibrd {int state; unsigned int nrports; struct stliport** ports; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 struct stlibrd** VAR_7 ;
 int FUNC_5 (struct tty_struct*,struct stlibrd*,struct stliport*) ;
 unsigned int VAR_8 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct tty_port*,struct tty_struct*,struct file*) ;
 int FUNC_8 (struct tty_port*,struct tty_struct*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct tty_struct *VAR_9, struct file *VAR_10)
{
 struct stlibrd *VAR_11;
 struct stliport *VAR_12;
 struct tty_port *VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_14 = VAR_9->index;
 VAR_15 = FUNC_0(VAR_14);
 if (VAR_15 >= VAR_8)
  return -VAR_2;
 VAR_11 = VAR_7[VAR_15];
 if (VAR_11 == ((void*)0))
  return -VAR_2;
 if ((VAR_11->state & VAR_1) == 0)
  return -VAR_2;
 VAR_16 = FUNC_1(VAR_14);
 if (VAR_16 > VAR_11->nrports)
  return -VAR_2;

 VAR_12 = VAR_11->ports[VAR_16];
 if (VAR_12 == ((void*)0))
  return -VAR_2;
 if (VAR_12->devnr < 1)
  return -VAR_2;
 VAR_13 = &VAR_12->port;
 FUNC_8(VAR_13, VAR_9);
 VAR_9->driver_data = VAR_12;
 VAR_13->count++;

 FUNC_9(VAR_12->raw_wait,
   !FUNC_6(VAR_4, &VAR_12->state));
 if (FUNC_4(VAR_6))
  return -VAR_3;

 if ((VAR_12->port.flags & VAR_0) == 0) {
  FUNC_3(VAR_4, &VAR_12->state);
  if ((VAR_17 = FUNC_5(VAR_9, VAR_11, VAR_12)) >= 0) {

   VAR_13->flags |= VAR_0;
   FUNC_2(VAR_5, &VAR_9->flags);
  }
  FUNC_2(VAR_4, &VAR_12->state);
  FUNC_10(&VAR_12->raw_wait);
  if (VAR_17 < 0)
   return VAR_17;
 }
 return FUNC_7(&VAR_12->port, VAR_9, VAR_10);
}
