
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct splice_pipe_desc {unsigned int nr_pages; int flags; int (* spd_release ) (struct splice_pipe_desc*,int ) ;int ops; TYPE_1__* partial; int * pages; } ;
struct pipe_inode_info {int nrbufs; int curbuf; int fasync_readers; int wait; int waiting_writers; scalar_t__ inode; struct pipe_buffer* bufs; int readers; } ;
struct pipe_buffer {scalar_t__ len; int flags; int ops; int private; int offset; int page; } ;
typedef int ssize_t ;
struct TYPE_2__ {int private; scalar_t__ len; int offset; } ;


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
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (struct pipe_inode_info*) ;
 int FUNC_3 (struct pipe_inode_info*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct splice_pipe_desc*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

ssize_t FUNC_11(struct pipe_inode_info *VAR_11,
         struct splice_pipe_desc *VAR_12)
{
 unsigned int VAR_13 = VAR_12->nr_pages;
 int VAR_14, VAR_15, VAR_16;

 VAR_14 = 0;
 VAR_15 = 0;
 VAR_16 = 0;

 FUNC_1(VAR_11);

 for (;;) {
  if (!VAR_11->readers) {
   FUNC_4(VAR_7, VAR_10, 0);
   if (!VAR_14)
    VAR_14 = -VAR_1;
   break;
  }

  if (VAR_11->nrbufs < VAR_3) {
   int VAR_17 = (VAR_11->curbuf + VAR_11->nrbufs) & (VAR_3 - 1);
   struct pipe_buffer *VAR_18 = VAR_11->bufs + VAR_17;

   VAR_18->page = VAR_12->pages[VAR_16];
   VAR_18->offset = VAR_12->partial[VAR_16].offset;
   VAR_18->len = VAR_12->partial[VAR_16].len;
   VAR_18->private = VAR_12->partial[VAR_16].private;
   VAR_18->ops = VAR_12->ops;
   if (VAR_12->flags & VAR_8)
    VAR_18->flags |= VAR_4;

   VAR_11->nrbufs++;
   VAR_16++;
   VAR_14 += VAR_18->len;

   if (VAR_11->inode)
    VAR_15 = 1;

   if (!--VAR_12->nr_pages)
    break;
   if (VAR_11->nrbufs < VAR_3)
    continue;

   break;
  }

  if (VAR_12->flags & VAR_9) {
   if (!VAR_14)
    VAR_14 = -VAR_0;
   break;
  }

  if (FUNC_5(VAR_10)) {
   if (!VAR_14)
    VAR_14 = -VAR_2;
   break;
  }

  if (VAR_15) {
   FUNC_6();
   if (FUNC_8(&VAR_11->wait))
    FUNC_10(&VAR_11->wait);
   FUNC_0(&VAR_11->fasync_readers, VAR_6, VAR_5);
   VAR_15 = 0;
  }

  VAR_11->waiting_writers++;
  FUNC_3(VAR_11);
  VAR_11->waiting_writers--;
 }

 FUNC_2(VAR_11);

 if (VAR_15) {
  FUNC_6();
  if (FUNC_8(&VAR_11->wait))
   FUNC_9(&VAR_11->wait);
  FUNC_0(&VAR_11->fasync_readers, VAR_6, VAR_5);
 }

 while (VAR_16 < VAR_13)
  VAR_12->spd_release(VAR_12, VAR_16++);

 return VAR_14;
}
