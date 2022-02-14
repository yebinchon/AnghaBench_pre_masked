
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct videobuf_queue {int dummy; } ;
struct saa7146_fh {int type; struct videobuf_queue vbi_q; struct videobuf_queue video_q; } ;
struct file {struct saa7146_fh* private_data; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;


 int FUNC_2 (struct videobuf_queue*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, struct vm_area_struct * VAR_1)
{
 struct saa7146_fh *VAR_2 = VAR_0->private_data;
 struct videobuf_queue *VAR_3;

 switch (VAR_2->type) {
 case 128: {
  FUNC_1(("V4L2_BUF_TYPE_VIDEO_CAPTURE: file:%p, vma:%p\n",VAR_0, VAR_1));
  VAR_3 = &VAR_2->video_q;
  break;
  }
 case 129: {
  FUNC_1(("V4L2_BUF_TYPE_VBI_CAPTURE: file:%p, vma:%p\n",VAR_0, VAR_1));
  VAR_3 = &VAR_2->vbi_q;
  break;
  }
 default:
  FUNC_0();
  return 0;
 }

 return FUNC_2(VAR_3,VAR_1);
}
