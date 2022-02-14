
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;
struct saa7146_vv {int dummy; } ;
struct saa7146_fh {struct videobuf_queue video_q; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {struct saa7146_fh* private_data; } ;


 scalar_t__ FUNC_0 (struct saa7146_fh*) ;
 scalar_t__ FUNC_1 (struct saa7146_fh*) ;
 int FUNC_2 (struct saa7146_fh*) ;
 int FUNC_3 (struct saa7146_fh*,struct file*) ;
 int FUNC_4 (struct videobuf_queue*) ;

__attribute__((used)) static void FUNC_5(struct saa7146_dev *VAR_0, struct file *VAR_1)
{
 struct saa7146_fh *VAR_2 = VAR_1->private_data;
 struct saa7146_vv *VAR_3 = VAR_0->vv_data;
 struct videobuf_queue *VAR_4 = &VAR_2->video_q;
 int VAR_5;

 if (FUNC_0(VAR_2) != 0) {
  VAR_5 = FUNC_3(VAR_2, VAR_1);
 } else if (FUNC_1(VAR_2) != 0) {
  VAR_5 = FUNC_2(VAR_2);
 }

 FUNC_4(VAR_4);



}
