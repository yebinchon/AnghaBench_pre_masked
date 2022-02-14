
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_opcode; void* ki_retry; int ki_left; int ki_buf; struct file* ki_filp; } ;
struct file {int f_mode; TYPE_1__* f_op; } ;
typedef int ssize_t ;
struct TYPE_2__ {int aio_fsync; int aio_write; int aio_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_1 (struct kiocb*) ;
 int FUNC_2 (int ,struct kiocb*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct file*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static ssize_t FUNC_6(struct kiocb *VAR_14, bool VAR_15)
{
 struct file *VAR_16 = VAR_14->ki_filp;
 ssize_t VAR_17 = 0;

 switch (VAR_14->ki_opcode) {
 case 131:
  VAR_17 = -VAR_0;
  if (FUNC_5(!(VAR_16->f_mode & VAR_3)))
   break;
  VAR_17 = -VAR_1;
  if (FUNC_5(!FUNC_0(VAR_9, VAR_14->ki_buf,
   VAR_14->ki_left)))
   break;
  VAR_17 = FUNC_4(VAR_16, VAR_5);
  if (FUNC_5(VAR_17))
   break;
  VAR_17 = FUNC_1(VAR_14);
  if (VAR_17)
   break;
  VAR_17 = -VAR_2;
  if (VAR_16->f_op->aio_read)
   VAR_14->ki_retry = VAR_13;
  break;
 case 129:
  VAR_17 = -VAR_0;
  if (FUNC_5(!(VAR_16->f_mode & VAR_4)))
   break;
  VAR_17 = -VAR_1;
  if (FUNC_5(!FUNC_0(VAR_8, VAR_14->ki_buf,
   VAR_14->ki_left)))
   break;
  VAR_17 = FUNC_4(VAR_16, VAR_6);
  if (FUNC_5(VAR_17))
   break;
  VAR_17 = FUNC_1(VAR_14);
  if (VAR_17)
   break;
  VAR_17 = -VAR_2;
  if (VAR_16->f_op->aio_write)
   VAR_14->ki_retry = VAR_13;
  break;
 case 130:
  VAR_17 = -VAR_0;
  if (FUNC_5(!(VAR_16->f_mode & VAR_3)))
   break;
  VAR_17 = FUNC_4(VAR_16, VAR_5);
  if (FUNC_5(VAR_17))
   break;
  VAR_17 = FUNC_2(VAR_7, VAR_14, VAR_15);
  if (VAR_17)
   break;
  VAR_17 = -VAR_2;
  if (VAR_16->f_op->aio_read)
   VAR_14->ki_retry = VAR_13;
  break;
 case 128:
  VAR_17 = -VAR_0;
  if (FUNC_5(!(VAR_16->f_mode & VAR_4)))
   break;
  VAR_17 = FUNC_4(VAR_16, VAR_6);
  if (FUNC_5(VAR_17))
   break;
  VAR_17 = FUNC_2(VAR_10, VAR_14, VAR_15);
  if (VAR_17)
   break;
  VAR_17 = -VAR_2;
  if (VAR_16->f_op->aio_write)
   VAR_14->ki_retry = VAR_13;
  break;
 case 133:
  VAR_17 = -VAR_2;
  if (VAR_16->f_op->aio_fsync)
   VAR_14->ki_retry = VAR_11;
  break;
 case 132:
  VAR_17 = -VAR_2;
  if (VAR_16->f_op->aio_fsync)
   VAR_14->ki_retry = VAR_12;
  break;
 default:
  FUNC_3("EINVAL: io_submit: no operation provided\n");
  VAR_17 = -VAR_2;
 }

 if (!VAR_14->ki_retry)
  return VAR_17;

 return 0;
}
