
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dma_buf_ops {int mmap; int kmap; int kmap_atomic; int release; int unmap_dma_buf; int map_dma_buf; } ;
struct dma_buf {size_t size; int attachments; int lock; struct file* file; struct dma_buf_ops const* ops; void* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dma_buf* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 struct file* FUNC_3 (char*,int *,struct dma_buf*,int) ;
 int VAR_3 ;
 struct dma_buf* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

struct dma_buf *FUNC_6(void *VAR_4, const struct dma_buf_ops *VAR_5,
    size_t VAR_6, int VAR_7)
{
 struct dma_buf *VAR_8;
 struct file *VAR_9;

 if (FUNC_2(!VAR_4 || !VAR_5
     || !VAR_5->map_dma_buf
     || !VAR_5->unmap_dma_buf
     || !VAR_5->release
     || !VAR_5->kmap_atomic
     || !VAR_5->kmap
     || !VAR_5->mmap)) {
  return FUNC_0(-VAR_0);
 }

 VAR_8 = FUNC_4(sizeof(struct dma_buf), VAR_2);
 if (VAR_8 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_8->priv = VAR_4;
 VAR_8->ops = VAR_5;
 VAR_8->size = VAR_6;

 VAR_9 = FUNC_3("dmabuf", &VAR_3, VAR_8, VAR_7);

 VAR_8->file = VAR_9;

 FUNC_5(&VAR_8->lock);
 FUNC_1(&VAR_8->attachments);

 return VAR_8;
}
