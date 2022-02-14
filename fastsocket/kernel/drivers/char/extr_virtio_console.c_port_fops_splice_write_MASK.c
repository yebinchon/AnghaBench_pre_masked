
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sg_list* data; } ;
struct splice_desc {size_t total_len; unsigned int flags; TYPE_1__ u; int pos; } ;
struct sg_list {int sg; scalar_t__ len; scalar_t__ n; scalar_t__ size; } ;
struct port_buffer {int sg; } ;
struct port {int out_vq; } ;
struct pipe_inode_info {scalar_t__ nrbufs; } ;
struct file {int f_flags; struct port* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct port*,int ,scalar_t__,scalar_t__,struct port_buffer*,int) ;
 int FUNC_1 (struct pipe_inode_info*,struct splice_desc*,int ) ;
 struct port_buffer* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct pipe_inode_info*) ;
 int VAR_2 ;
 int FUNC_6 (struct pipe_inode_info*) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct port*,int) ;

__attribute__((used)) static ssize_t FUNC_10(struct pipe_inode_info *VAR_3,
          struct file *VAR_4, loff_t *VAR_5,
          size_t VAR_6, unsigned int VAR_7)
{
 struct port *VAR_8 = VAR_4->private_data;
 struct sg_list VAR_9;
 ssize_t VAR_10;
 struct port_buffer *VAR_11;
 struct splice_desc VAR_12 = {
  .total_len = VAR_6,
  .flags = VAR_7,
  .pos = *VAR_5,
  .u.data = &VAR_9,
 };





 FUNC_5(VAR_3);
 if (!VAR_3->nrbufs) {
  VAR_10 = 0;
  goto error_out;
 }

 VAR_10 = FUNC_9(VAR_8, VAR_4->f_flags & VAR_1);
 if (VAR_10 < 0)
  goto error_out;

 VAR_11 = FUNC_2(VAR_8->out_vq, 0, VAR_3->nrbufs);
 if (!VAR_11) {
  VAR_10 = -VAR_0;
  goto error_out;
 }

 VAR_9.n = 0;
 VAR_9.len = 0;
 VAR_9.size = VAR_3->nrbufs;
 VAR_9.sg = VAR_11->sg;
 FUNC_7(VAR_9.sg, VAR_9.size);
 VAR_10 = FUNC_1(VAR_3, &VAR_12, VAR_2);
 FUNC_6(VAR_3);
 if (FUNC_4(VAR_10 > 0))
  VAR_10 = FUNC_0(VAR_8, VAR_11->sg, VAR_9.n, VAR_9.len, VAR_11, 1);

 if (FUNC_8(VAR_10 <= 0))
  FUNC_3(VAR_9.sg);
 return VAR_10;

error_out:
 FUNC_6(VAR_3);
 return VAR_10;
}
