
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ws_row; int ws_col; } ;
struct tty_struct {int count; scalar_t__ index; TYPE_1__ winsize; struct tty3270* driver_data; scalar_t__ low_latency; } ;
struct TYPE_8__ {int rows; int ascebc; int cols; } ;
struct tty3270 {int rcl_max; TYPE_2__ view; TYPE_6__* kbd; struct tty_struct* tty; scalar_t__ read; int readlet; int timer; int rcl_lines; int update; int lines; int inattr; } ;
struct file {int dummy; } ;
struct TYPE_9__ {int * fn_handler; struct tty_struct* tty; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct tty3270*) ;
 size_t FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct tty3270*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,void (*) (unsigned long),unsigned long) ;
 int FUNC_11 (int *,void (*) (unsigned long),unsigned long) ;
 int FUNC_12 (struct tty3270*) ;
 struct tty3270* FUNC_13 () ;
 int FUNC_14 (struct tty3270*) ;
 int FUNC_15 (struct tty3270*) ;
 int FUNC_16 (struct tty3270*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (struct tty3270*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_18 (struct tty3270*) ;

__attribute__((used)) static int
FUNC_19(struct tty_struct *VAR_15, struct file * VAR_16)
{
 struct tty3270 *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_15->count > 1)
  return 0;

 VAR_17 = (struct tty3270 *)
  FUNC_8(&VAR_8,
      VAR_15->index + VAR_5);
 if (!FUNC_1(VAR_17)) {
  VAR_15->driver_data = VAR_17;
  VAR_15->winsize.ws_row = VAR_17->view.rows - 2;
  VAR_15->winsize.ws_col = VAR_17->view.cols;
  VAR_15->low_latency = 0;
  VAR_17->tty = VAR_15;
  VAR_17->kbd->tty = VAR_15;
  VAR_17->inattr = VAR_6;
  return 0;
 }
 if (VAR_9 < VAR_15->index + 1)
  VAR_9 = VAR_15->index + 1;


 if (FUNC_3(VAR_17) == -VAR_0)
  return -VAR_0;


 VAR_17 = FUNC_13();
 if (FUNC_1(VAR_17))
  return FUNC_3(VAR_17);

 FUNC_0(&VAR_17->lines);
 FUNC_0(&VAR_17->update);
 FUNC_0(&VAR_17->rcl_lines);
 VAR_17->rcl_max = 20;
 FUNC_10(&VAR_17->timer, (void (*)(unsigned long)) VAR_14,
      (unsigned long) VAR_17);
 FUNC_11(&VAR_17->readlet,
       (void (*)(unsigned long)) VAR_11,
       (unsigned long) VAR_17->read);

 VAR_19 = FUNC_6(&VAR_17->view, &VAR_8,
         VAR_15->index + VAR_5);
 if (VAR_19) {
  FUNC_17(VAR_17);
  return VAR_19;
 }

 VAR_19 = FUNC_12(VAR_17);
 if (VAR_19) {
  FUNC_9(&VAR_17->view);
  FUNC_7(&VAR_17->view);
  return VAR_19;
 }

 VAR_17->tty = VAR_15;
 VAR_15->low_latency = 0;
 VAR_15->driver_data = VAR_17;
 VAR_15->winsize.ws_row = VAR_17->view.rows - 2;
 VAR_15->winsize.ws_col = VAR_17->view.cols;

 FUNC_15(VAR_17);
 FUNC_16(VAR_17);
 FUNC_18(VAR_17);


 for (VAR_18 = 0; VAR_18 < VAR_17->view.rows - 2; VAR_18++)
  FUNC_14(VAR_17);

 VAR_17->kbd->tty = VAR_15;
 VAR_17->kbd->fn_handler[FUNC_2(VAR_2)] = VAR_7;
 VAR_17->kbd->fn_handler[FUNC_2(VAR_3)] = VAR_12;
 VAR_17->kbd->fn_handler[FUNC_2(VAR_4)] = VAR_13;
 VAR_17->kbd->fn_handler[FUNC_2(VAR_1)] = VAR_10;
 FUNC_4(VAR_17->kbd, VAR_17->view.ascebc);

 FUNC_5(&VAR_17->view);
 return 0;
}
