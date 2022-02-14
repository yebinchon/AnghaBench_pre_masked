
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int nrbufs; int curbuf; int fasync_readers; int wait; struct pipe_buffer* bufs; int writers; int readers; } ;
struct pipe_buffer {size_t len; size_t offset; int flags; TYPE_1__* ops; } ;
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
 int FUNC_0 (struct pipe_inode_info*,unsigned int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct pipe_inode_info*,unsigned int) ;
 int FUNC_3 (struct pipe_inode_info*,struct pipe_inode_info*) ;
 int FUNC_4 (struct pipe_inode_info*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct pipe_inode_info*,struct pipe_buffer*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct pipe_inode_info*) ;

__attribute__((used)) static int FUNC_11(struct pipe_inode_info *VAR_9,
          struct pipe_inode_info *VAR_10,
          size_t VAR_11, unsigned int VAR_12)
{
 struct pipe_buffer *VAR_13, *VAR_14;
 int VAR_15 = 0, VAR_16;
 bool VAR_17 = 0;


retry:
 VAR_15 = FUNC_0(VAR_9, VAR_12);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_2(VAR_10, VAR_12);
 if (VAR_15)
  return VAR_15;






 FUNC_3(VAR_9, VAR_10);

 do {
  if (!VAR_10->readers) {
   FUNC_5(VAR_6, VAR_8, 0);
   if (!VAR_15)
    VAR_15 = -VAR_1;
   break;
  }

  if (!VAR_9->nrbufs && !VAR_9->writers)
   break;





  if (!VAR_9->nrbufs || VAR_10->nrbufs >= VAR_2) {

   if (VAR_15)
    break;

   if (VAR_12 & VAR_7) {
    VAR_15 = -VAR_0;
    break;
   }






   FUNC_4(VAR_9);
   FUNC_4(VAR_10);
   goto retry;
  }

  VAR_13 = VAR_9->bufs + VAR_9->curbuf;
  VAR_16 = (VAR_10->curbuf + VAR_10->nrbufs) % VAR_2;
  VAR_14 = VAR_10->bufs + VAR_16;

  if (VAR_11 >= VAR_13->len) {



   *VAR_14 = *VAR_13;
   VAR_13->ops = ((void*)0);
   VAR_10->nrbufs++;
   VAR_9->curbuf = (VAR_9->curbuf + 1) % VAR_2;
   VAR_9->nrbufs--;
   VAR_17 = 1;
  } else {




   VAR_13->ops->get(VAR_9, VAR_13);
   *VAR_14 = *VAR_13;





   VAR_14->flags &= ~VAR_3;

   VAR_14->len = VAR_11;
   VAR_10->nrbufs++;
   VAR_13->offset += VAR_14->len;
   VAR_13->len -= VAR_14->len;
  }
  VAR_15 += VAR_14->len;
  VAR_11 -= VAR_14->len;
 } while (VAR_11);

 FUNC_4(VAR_9);
 FUNC_4(VAR_10);




 if (VAR_15 > 0) {
  FUNC_6();
  if (FUNC_8(&VAR_10->wait))
   FUNC_9(&VAR_10->wait);
  FUNC_1(&VAR_10->fasync_readers, VAR_5, VAR_4);
 }
 if (VAR_17)
  FUNC_10(VAR_9);

 return VAR_15;
}
