
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_flags; int * private_data; } ;
struct TYPE_11__ {struct request_queue* request_queue; } ;
struct TYPE_10__ {int exclude; TYPE_5__* device; int o_excl_wait; int sg_tablesize; scalar_t__ sgdebug; int sfds; scalar_t__ detached; } ;
typedef int Sg_fd ;
typedef TYPE_1__ Sg_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct inode*,struct file*) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (struct request_queue*) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int * FUNC_13 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(struct inode *VAR_9, struct file *VAR_10)
{
 int VAR_11 = FUNC_4(VAR_9);
 int VAR_12 = VAR_10->f_flags;
 struct request_queue *VAR_13;
 Sg_device *VAR_14;
 Sg_fd *VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_6();
 FUNC_7(VAR_9, VAR_10);
 FUNC_2(3, FUNC_8("sg_open: dev=%d, flags=0x%x\n", VAR_11, VAR_12));
 VAR_14 = FUNC_14(VAR_11);
 if (FUNC_0(VAR_14)) {
  VAR_17 = FUNC_1(VAR_14);
  VAR_14 = ((void*)0);
  goto sg_put;
 }



 VAR_17 = FUNC_11(VAR_14->device);
 if (VAR_17)
  goto sg_put;

 if (!((VAR_12 & VAR_7) ||
       FUNC_10(VAR_14->device))) {
  VAR_17 = -VAR_3;

  goto error_out;
 }

 if (VAR_12 & VAR_6) {
  if (VAR_8 == (VAR_12 & VAR_5)) {
   VAR_17 = -VAR_4;
   goto error_out;
  }
  if (!FUNC_5(&VAR_14->sfds) && (VAR_12 & VAR_7)) {
   VAR_17 = -VAR_0;
   goto error_out;
  }
  VAR_16 = 0;
  FUNC_3(VAR_14->o_excl_wait,
        ((!FUNC_5(&VAR_14->sfds) || VAR_14->exclude) ? 0 : (VAR_14->exclude = 1)), VAR_16);
  if (VAR_16) {
   VAR_17 = VAR_16;
   goto error_out;
  }
 } else if (VAR_14->exclude) {
  if (VAR_12 & VAR_7) {
   VAR_17 = -VAR_0;
   goto error_out;
  }
  VAR_16 = 0;
  FUNC_3(VAR_14->o_excl_wait, (!VAR_14->exclude),
        VAR_16);
  if (VAR_16) {
   VAR_17 = VAR_16;
   goto error_out;
  }
 }
 if (VAR_14->detached) {
  VAR_17 = -VAR_1;
  goto error_out;
 }
 if (FUNC_5(&VAR_14->sfds)) {
  VAR_14->sgdebug = 0;
  VAR_13 = VAR_14->device->request_queue;
  VAR_14->sg_tablesize = FUNC_9(VAR_13);
 }
 if ((VAR_15 = FUNC_13(VAR_14, VAR_11)))
  VAR_10->private_data = VAR_15;
 else {
  if (VAR_12 & VAR_6) {
   VAR_14->exclude = 0;
   FUNC_17(&VAR_14->o_excl_wait);
  }
  VAR_17 = -VAR_2;
  goto error_out;
 }
 VAR_17 = 0;
error_out:
 if (VAR_17)
  FUNC_12(VAR_14->device);
sg_put:
 if (VAR_14)
  FUNC_15(VAR_14);
 FUNC_16();
 return VAR_17;
}
