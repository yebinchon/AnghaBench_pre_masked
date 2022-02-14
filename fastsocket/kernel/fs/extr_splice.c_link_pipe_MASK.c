
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int nrbufs; int curbuf; int fasync_readers; int wait; scalar_t__ waiting_writers; struct pipe_buffer* bufs; int readers; } ;
struct pipe_buffer {size_t len; int flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get ) (struct pipe_inode_info*,struct pipe_buffer*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct pipe_inode_info*,struct pipe_inode_info*) ;
 int FUNC_2 (struct pipe_inode_info*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pipe_inode_info*,struct pipe_buffer*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct pipe_inode_info *VAR_9,
       struct pipe_inode_info *VAR_10,
       size_t VAR_11, unsigned int VAR_12)
{
 struct pipe_buffer *VAR_13, *VAR_14;
 int VAR_15 = 0, VAR_16 = 0, VAR_17;






 FUNC_1(VAR_9, VAR_10);

 do {
  if (!VAR_10->readers) {
   FUNC_3(VAR_6, VAR_8, 0);
   if (!VAR_15)
    VAR_15 = -VAR_1;
   break;
  }





  if (VAR_16 >= VAR_9->nrbufs || VAR_10->nrbufs >= VAR_2)
   break;

  VAR_13 = VAR_9->bufs + ((VAR_9->curbuf + VAR_16) & (VAR_2 - 1));
  VAR_17 = (VAR_10->curbuf + VAR_10->nrbufs) & (VAR_2 - 1);





  VAR_13->ops->get(VAR_9, VAR_13);

  VAR_14 = VAR_10->bufs + VAR_17;
  *VAR_14 = *VAR_13;





  VAR_14->flags &= ~VAR_3;

  if (VAR_14->len > VAR_11)
   VAR_14->len = VAR_11;

  VAR_10->nrbufs++;
  VAR_15 += VAR_14->len;
  VAR_11 -= VAR_14->len;
  VAR_16++;
 } while (VAR_11);





 if (!VAR_15 && VAR_9->waiting_writers && (VAR_12 & VAR_7))
  VAR_15 = -VAR_0;

 FUNC_2(VAR_9);
 FUNC_2(VAR_10);




 if (VAR_15 > 0) {
  FUNC_4();
  if (FUNC_6(&VAR_10->wait))
   FUNC_7(&VAR_10->wait);
  FUNC_0(&VAR_10->fasync_readers, VAR_5, VAR_4);
 }

 return VAR_15;
}
