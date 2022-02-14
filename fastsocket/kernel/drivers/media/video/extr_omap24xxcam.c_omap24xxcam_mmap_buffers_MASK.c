
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; unsigned int vm_end; unsigned int vm_start; int vm_page_prot; } ;
struct videobuf_queue {int vb_lock; TYPE_1__** bufs; } ;
struct videobuf_dmabuf {unsigned int sglen; int * sglist; } ;
struct omap24xxcam_fh {struct videobuf_queue vbq; struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int mutex; scalar_t__ streaming; } ;
struct file {struct omap24xxcam_fh* private_data; } ;
struct TYPE_2__ {scalar_t__ memory; int boff; scalar_t__ bsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned int,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct videobuf_dmabuf* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4,
        struct vm_area_struct *VAR_5)
{
 struct omap24xxcam_fh *VAR_6 = VAR_4->private_data;
 struct omap24xxcam_device *VAR_7 = VAR_6->cam;
 struct videobuf_queue *VAR_8 = &VAR_6->vbq;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;

 FUNC_0(&VAR_7->mutex);
 if (VAR_7->streaming) {
  FUNC_1(&VAR_7->mutex);
  return -VAR_0;
 }
 FUNC_1(&VAR_7->mutex);
 FUNC_0(&VAR_8->vb_lock);


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (((void*)0) == VAR_8->bufs[VAR_9])
   continue;
  if (VAR_2 != VAR_8->bufs[VAR_9]->memory)
   continue;
  if (VAR_8->bufs[VAR_9]->boff == (VAR_5->vm_pgoff << VAR_1))
   break;
 }


 for (VAR_11 = 0, VAR_10 = VAR_9; VAR_10 < VAR_3; VAR_10++) {
  if (((void*)0) == VAR_8->bufs[VAR_10])
   continue;
  if (VAR_2 != VAR_8->bufs[VAR_10]->memory)
   continue;
  VAR_11 += VAR_8->bufs[VAR_10]->bsize;
  if (VAR_11 == (VAR_5->vm_end - VAR_5->vm_start))
   break;
 }

 VAR_11 = 0;
 for (VAR_12 = VAR_9; VAR_12 <= VAR_10; VAR_12++) {
  struct videobuf_dmabuf *VAR_15 = FUNC_6(VAR_8->bufs[VAR_12]);

  for (VAR_13 = 0; VAR_13 < VAR_15->sglen; VAR_13++) {
   VAR_14 = FUNC_3(
    VAR_5, VAR_5->vm_start + VAR_11,
    FUNC_2(FUNC_5(&VAR_15->sglist[VAR_13])),
    FUNC_4(&VAR_15->sglist[VAR_13]), VAR_5->vm_page_prot);
   if (VAR_14)
    goto out;
   VAR_11 += FUNC_4(&VAR_15->sglist[VAR_13]);
  }
 }

out:
 FUNC_1(&VAR_8->vb_lock);

 return VAR_14;
}
