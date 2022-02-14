
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {int list; int work; scalar_t__ result; int * iocb; scalar_t__ error; scalar_t__ size; scalar_t__ offset; scalar_t__ flag; struct inode* inode; } ;
typedef TYPE_1__ ext4_io_end_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (int,int ) ;

__attribute__((used)) static ext4_io_end_t *FUNC_4 (struct inode *VAR_2)
{
 ext4_io_end_t *VAR_3 = ((void*)0);

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);

 if (VAR_3) {
  FUNC_2(VAR_2);
  VAR_3->inode = VAR_2;
  VAR_3->flag = 0;
  VAR_3->offset = 0;
  VAR_3->size = 0;
  VAR_3->error = 0;
  VAR_3->iocb = ((void*)0);
  VAR_3->result = 0;
  FUNC_1(&VAR_3->work, VAR_1);
  FUNC_0(&VAR_3->list);
 }

 return VAR_3;
}
