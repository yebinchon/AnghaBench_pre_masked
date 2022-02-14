
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timeout; } ;
struct saa7146_vv {TYPE_2__ video_q; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct TYPE_3__ {int state; } ;
struct saa7146_buf {TYPE_1__ vb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct saa7146_dev*,struct saa7146_buf*,struct saa7146_buf*) ;

__attribute__((used)) static int FUNC_2 (struct saa7146_dev *VAR_3,
       struct saa7146_buf *VAR_4,
       struct saa7146_buf *VAR_5)
{
 struct saa7146_vv *VAR_6 = VAR_3->vv_data;

 VAR_4->vb.state = VAR_1;
 FUNC_1(VAR_3,VAR_4,VAR_5);

 FUNC_0(&VAR_6->video_q.timeout, VAR_2+VAR_0);
 return 0;
}
