
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
typedef int poll_table ;
struct TYPE_6__ {scalar_t__ bytes; } ;
struct TYPE_9__ {scalar_t__ read_buffer_ready; scalar_t__ write_buffers_empty; TYPE_1__ ex; int poll_q; } ;
struct TYPE_7__ {int d_inode; } ;
typedef TYPE_4__ IXJ ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_5, poll_table * VAR_6)
{
 unsigned int VAR_7 = 0;

 IXJ *VAR_8 = FUNC_1(FUNC_0(VAR_5->f_path.dentry->d_inode));

 FUNC_2(VAR_5, &(VAR_8->poll_q), VAR_6);
 if (VAR_8->read_buffer_ready > 0)
  VAR_7 |= VAR_0 | VAR_3;
 if (VAR_8->write_buffers_empty > 0)
  VAR_7 |= VAR_1 | VAR_4;
 if (VAR_8->ex.bytes)
  VAR_7 |= VAR_2;
 return VAR_7;
}
