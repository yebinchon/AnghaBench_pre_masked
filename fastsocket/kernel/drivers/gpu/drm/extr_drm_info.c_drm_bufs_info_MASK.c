
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device_dma {int buf_count; TYPE_4__** buflist; TYPE_3__* bufs; } ;
struct drm_device {int struct_mutex; struct drm_device_dma* dma; } ;
struct TYPE_8__ {int list; } ;
struct TYPE_6__ {int count; } ;
struct TYPE_7__ {int seg_count; int page_order; TYPE_2__ freelist; scalar_t__ buf_count; int buf_size; } ;
struct TYPE_5__ {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,...) ;

int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 struct drm_info_node *VAR_4 = (struct drm_info_node *) VAR_2->private;
 struct drm_device *VAR_5 = VAR_4->minor->dev;
 struct drm_device_dma *VAR_6;
 int VAR_7, VAR_8;

 FUNC_1(&VAR_5->struct_mutex);
 VAR_6 = VAR_5->dma;
 if (!VAR_6) {
  FUNC_2(&VAR_5->struct_mutex);
  return 0;
 }

 FUNC_3(VAR_2, " o     size count  free	 segs pages    kB\n\n");
 for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++) {
  if (VAR_6->bufs[VAR_7].buf_count) {
   VAR_8 = VAR_6->bufs[VAR_7].seg_count * (1 << VAR_6->bufs[VAR_7].page_order);
   FUNC_3(VAR_2, "%2d %8d %5d %5d %5d %5d %5ld\n",
       VAR_7,
       VAR_6->bufs[VAR_7].buf_size,
       VAR_6->bufs[VAR_7].buf_count,
       FUNC_0(&VAR_6->bufs[VAR_7].freelist.count),
       VAR_6->bufs[VAR_7].seg_count,
       VAR_8,
       VAR_8 * VAR_1 / 1024);
  }
 }
 FUNC_3(VAR_2, "\n");
 for (VAR_7 = 0; VAR_7 < VAR_6->buf_count; VAR_7++) {
  if (VAR_7 && !(VAR_7 % 32))
   FUNC_3(VAR_2, "\n");
  FUNC_3(VAR_2, " %d", VAR_6->buflist[VAR_7]->list);
 }
 FUNC_3(VAR_2, "\n");
 FUNC_2(&VAR_5->struct_mutex);
 return 0;
}
