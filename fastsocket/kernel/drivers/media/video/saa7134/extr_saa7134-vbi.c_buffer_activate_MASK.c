
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int timeout; } ;
struct saa7134_dev {TYPE_3__ vbi_q; } ;
struct TYPE_5__ {int size; unsigned long width; int state; } ;
struct saa7134_buf {TYPE_2__ vb; TYPE_1__* pt; scalar_t__ top_seen; } ;
struct TYPE_4__ {int dma; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,struct saa7134_buf*) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *,scalar_t__) ;
 unsigned long FUNC_6 (struct saa7134_buf*) ;
 int FUNC_7 (struct saa7134_dev*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (struct saa7134_dev*,struct saa7134_buf*,int ) ;

__attribute__((used)) static int FUNC_11(struct saa7134_dev *VAR_9,
      struct saa7134_buf *VAR_10,
      struct saa7134_buf *VAR_11)
{
 unsigned long VAR_12,VAR_13;

 FUNC_4("buffer_activate [%p]\n",VAR_10);
 VAR_10->vb.state = VAR_7;
 VAR_10->top_seen = 0;

 FUNC_10(VAR_9,VAR_10,VAR_5);
 FUNC_10(VAR_9,VAR_10,VAR_6);
 FUNC_8(VAR_1, 0x06);
 FUNC_8(VAR_2, 0x06);


 VAR_13 = FUNC_6(VAR_10);
 VAR_12 = VAR_3 |
  VAR_4 |
  (VAR_10->pt->dma >> 12);
 FUNC_9(FUNC_0(2),VAR_13);
 FUNC_9(FUNC_1(2),VAR_13 + VAR_10->vb.size/2);
 FUNC_9(FUNC_3(2),VAR_10->vb.width);
 FUNC_9(FUNC_2(2),VAR_12);
 FUNC_9(FUNC_0(3),VAR_13);
 FUNC_9(FUNC_1(3),VAR_13 + VAR_10->vb.size/2);
 FUNC_9(FUNC_3(3),VAR_10->vb.width);
 FUNC_9(FUNC_2(3),VAR_12);


 FUNC_7(VAR_9);
 FUNC_5(&VAR_9->vbi_q.timeout, VAR_8+VAR_0);

 return 0;
}
