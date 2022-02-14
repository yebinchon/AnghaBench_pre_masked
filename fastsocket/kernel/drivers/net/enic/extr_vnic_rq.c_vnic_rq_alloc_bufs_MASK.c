
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vnic_rq_buf {unsigned int index; struct vnic_rq_buf* next; int * desc; } ;
struct TYPE_2__ {unsigned int desc_count; int desc_size; scalar_t__ descs; } ;
struct vnic_rq {struct vnic_rq_buf** bufs; struct vnic_rq_buf* to_clean; struct vnic_rq_buf* to_use; TYPE_1__ ring; struct vnic_dev* vdev; } ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 struct vnic_rq_buf* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vnic_rq *VAR_2)
{
 struct vnic_rq_buf *VAR_3;
 struct vnic_dev *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7 = VAR_2->ring.desc_count;
 unsigned int VAR_8 = FUNC_0(VAR_7);

 VAR_4 = VAR_2->vdev;

 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  VAR_2->bufs[VAR_5] = FUNC_3(FUNC_2(VAR_7), VAR_1);
  if (!VAR_2->bufs[VAR_5])
   return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  VAR_3 = VAR_2->bufs[VAR_5];
  for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_7); VAR_6++) {
   VAR_3->index = VAR_5 * FUNC_1(VAR_7) + VAR_6;
   VAR_3->desc = (u8 *)VAR_2->ring.descs +
    VAR_2->ring.desc_size * VAR_3->index;
   if (VAR_3->index + 1 == VAR_7) {
    VAR_3->next = VAR_2->bufs[0];
    break;
   } else if (VAR_6 + 1 == FUNC_1(VAR_7)) {
    VAR_3->next = VAR_2->bufs[VAR_5 + 1];
   } else {
    VAR_3->next = VAR_3 + 1;
    VAR_3++;
   }
  }
 }

 VAR_2->to_use = VAR_2->to_clean = VAR_2->bufs[0];

 return 0;
}
