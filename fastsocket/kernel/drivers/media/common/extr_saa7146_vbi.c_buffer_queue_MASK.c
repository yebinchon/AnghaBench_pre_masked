
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {struct file* priv_data; } ;
struct videobuf_buffer {int dummy; } ;
struct saa7146_vv {int vbi_q; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct saa7146_buf {int dummy; } ;
struct file {struct saa7146_fh* private_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct saa7146_dev*,int *,struct saa7146_buf*) ;

__attribute__((used)) static void FUNC_2(struct videobuf_queue *VAR_0, struct videobuf_buffer *VAR_1)
{
 struct file *VAR_2 = VAR_0->priv_data;
 struct saa7146_fh *VAR_3 = VAR_2->private_data;
 struct saa7146_dev *VAR_4 = VAR_3->dev;
 struct saa7146_vv *VAR_5 = VAR_4->vv_data;
 struct saa7146_buf *VAR_6 = (struct saa7146_buf *)VAR_1;

 FUNC_0(("vb:%p\n",VAR_1));
 FUNC_1(VAR_4,&VAR_5->vbi_q,VAR_6);
}
