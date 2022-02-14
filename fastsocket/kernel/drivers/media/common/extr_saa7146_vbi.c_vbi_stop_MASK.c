
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; scalar_t__ curr; } ;
struct saa7146_vv {TYPE_1__ vbi_q; int * vbi_streaming; } ;
struct saa7146_fh {int vbi_read_timeout; int vbi_q; struct saa7146_dev* dev; } ;
struct saa7146_dev {int slock; struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct saa7146_dev*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct saa7146_dev*,TYPE_1__*,int ) ;
 int FUNC_4 (struct saa7146_dev*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct saa7146_fh *VAR_5, struct file *VAR_6)
{
 struct saa7146_dev *VAR_7 = VAR_5->dev;
 struct saa7146_vv *VAR_8 = VAR_7->vv_data;
 unsigned long VAR_9;
 FUNC_0(("dev:%p, fh:%p\n",VAR_7, VAR_5));

 FUNC_5(&VAR_7->slock,VAR_9);


 FUNC_4(VAR_7, VAR_3, VAR_2);


 FUNC_1(VAR_7, VAR_1);


 FUNC_4(VAR_7, VAR_3, VAR_0);

 if (VAR_8->vbi_q.curr) {
  FUNC_3(VAR_7,&VAR_8->vbi_q,VAR_4);
 }

 FUNC_7(&VAR_5->vbi_q);

 VAR_8->vbi_streaming = ((void*)0);

 FUNC_2(&VAR_8->vbi_q.timeout);
 FUNC_2(&VAR_5->vbi_read_timeout);

 FUNC_6(&VAR_7->slock, VAR_9);
}
