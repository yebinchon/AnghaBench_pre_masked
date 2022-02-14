
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int timeout; } ;
struct saa7134_dev {TYPE_4__ video_q; } ;
struct TYPE_7__ {unsigned long width; unsigned long height; int field; int state; } ;
struct saa7134_buf {TYPE_3__ vb; TYPE_2__* fmt; TYPE_1__* pt; scalar_t__ top_seen; } ;
struct TYPE_6__ {int depth; unsigned long hshift; unsigned long vshift; scalar_t__ uvswap; scalar_t__ planar; scalar_t__ wswap; scalar_t__ bswap; int pm; scalar_t__ yuv; } ;
struct TYPE_5__ {int dma; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int *,scalar_t__) ;
 unsigned long FUNC_8 (struct saa7134_buf*) ;
 int FUNC_9 (struct saa7134_dev*) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (struct saa7134_dev*,int ,unsigned long,unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct saa7134_dev *VAR_9,
      struct saa7134_buf *VAR_10,
      struct saa7134_buf *VAR_11)
{
 unsigned long VAR_12,VAR_13,VAR_14;
 unsigned long VAR_15,VAR_16,VAR_17,VAR_18,VAR_19;

 FUNC_6("buffer_activate buf=%p\n",VAR_10);
 VAR_10->vb.state = VAR_7;
 VAR_10->top_seen = 0;

 FUNC_13(VAR_9,VAR_6,VAR_10->vb.width,VAR_10->vb.height,
   FUNC_5(VAR_10->vb.field));
 if (VAR_10->fmt->yuv)
  FUNC_10(FUNC_0(VAR_6), 0x3f, 0x03);
 else
  FUNC_10(FUNC_0(VAR_6), 0x3f, 0x01);
 FUNC_11(VAR_1, VAR_10->fmt->pm);


 VAR_12 = FUNC_8(VAR_10);
 if (VAR_10->fmt->planar)
  VAR_14 = VAR_10->vb.width;
 else
  VAR_14 = (VAR_10->vb.width * VAR_10->fmt->depth) / 8;
 VAR_13 = VAR_3 |
  VAR_4 |
  (VAR_10->pt->dma >> 12);
 if (VAR_10->fmt->bswap)
  VAR_13 |= VAR_2;
 if (VAR_10->fmt->wswap)
  VAR_13 |= VAR_5;
 if (FUNC_5(VAR_10->vb.field)) {

  FUNC_12(FUNC_1(0),VAR_12);
  FUNC_12(FUNC_2(0),VAR_12+VAR_14);
  FUNC_12(FUNC_4(0),VAR_14*2);
 } else {

  FUNC_12(FUNC_1(0),VAR_12);
  FUNC_12(FUNC_2(0),VAR_12);
  FUNC_12(FUNC_4(0),VAR_14);
 }
 FUNC_12(FUNC_3(0),VAR_13);

 if (VAR_10->fmt->planar) {

  VAR_15 = VAR_14 >> VAR_10->fmt->hshift;
  VAR_16 = VAR_10->vb.height >> VAR_10->fmt->vshift;
  VAR_17 = VAR_12 + VAR_14 * VAR_10->vb.height;
  VAR_18 = VAR_17 + VAR_15 * VAR_16;
  if (VAR_10->fmt->uvswap)
   VAR_19 = VAR_17, VAR_17 = VAR_18, VAR_18 = VAR_19;
  FUNC_6("uv: bpl=%ld lines=%ld base2/3=%ld/%ld\n",
   VAR_15,VAR_16,VAR_17,VAR_18);
  if (FUNC_5(VAR_10->vb.field)) {

   FUNC_12(FUNC_1(4),VAR_17);
   FUNC_12(FUNC_2(4),VAR_17+VAR_15);
   FUNC_12(FUNC_4(4),VAR_15*2);
   FUNC_12(FUNC_1(5),VAR_18);
   FUNC_12(FUNC_2(5),VAR_18+VAR_15);
   FUNC_12(FUNC_4(5),VAR_15*2);
  } else {

   FUNC_12(FUNC_1(4),VAR_17);
   FUNC_12(FUNC_2(4),VAR_17);
   FUNC_12(FUNC_4(4),VAR_15);
   FUNC_12(FUNC_1(5),VAR_18);
   FUNC_12(FUNC_2(5),VAR_18);
   FUNC_12(FUNC_4(5),VAR_15);
  }
  FUNC_12(FUNC_3(4),VAR_13);
  FUNC_12(FUNC_3(5),VAR_13);
 }


 FUNC_9(VAR_9);
 FUNC_7(&VAR_9->video_q.timeout, VAR_8+VAR_0);
 return 0;
}
