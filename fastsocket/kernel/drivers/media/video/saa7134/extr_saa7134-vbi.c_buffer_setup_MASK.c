
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct saa7134_fh* priv_data; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {TYPE_1__* tvnorm; } ;
struct TYPE_2__ {int vbi_v_stop_0; int vbi_v_start_0; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct videobuf_queue *VAR_2, unsigned int *VAR_3, unsigned int *VAR_4)
{
 struct saa7134_fh *VAR_5 = VAR_2->priv_data;
 struct saa7134_dev *VAR_6 = VAR_5->dev;
 int VAR_7,VAR_8;

 VAR_8 = VAR_6->tvnorm->vbi_v_stop_0 - VAR_6->tvnorm->vbi_v_start_0 +1;
 VAR_7 = VAR_0;
 *VAR_4 = VAR_8 * VAR_7 * 2;
 if (0 == *VAR_3)
  *VAR_3 = VAR_1;
 *VAR_3 = FUNC_0(*VAR_4,*VAR_3);
 return 0;
}
