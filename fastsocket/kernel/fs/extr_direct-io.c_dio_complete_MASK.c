
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio {scalar_t__ result; scalar_t__ rw; scalar_t__ i_size; scalar_t__ page_errors; scalar_t__ io_error; int flags; TYPE_1__* inode; int iocb; int private; int (* end_io ) (int ,scalar_t__,scalar_t__,int ,scalar_t__,int) ;} ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int i_alloc_sem; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct dio *VAR_3, loff_t VAR_4, ssize_t VAR_5, bool VAR_6)
{
 ssize_t VAR_7 = 0;







 if (VAR_5 == -VAR_1)
  VAR_5 = 0;

 if (VAR_3->result) {
  VAR_7 = VAR_3->result;


  if ((VAR_3->rw == VAR_2) && ((VAR_4 + VAR_7) > VAR_3->i_size))
   VAR_7 = VAR_3->i_size - VAR_4;
 }

 if (VAR_5 == 0)
  VAR_5 = VAR_3->page_errors;
 if (VAR_5 == 0)
  VAR_5 = VAR_3->io_error;
 if (VAR_5 == 0)
  VAR_5 = VAR_7;

 if (VAR_3->end_io && VAR_3->result) {
  VAR_3->end_io(VAR_3->iocb, VAR_4, VAR_7,
       VAR_3->private, VAR_5, VAR_6);
 } else if (VAR_6) {
  FUNC_0(VAR_3->iocb, VAR_5, 0);
 }

 if (VAR_3->flags & VAR_0)

  FUNC_2(&VAR_3->inode->i_alloc_sem);

 return VAR_5;
}
