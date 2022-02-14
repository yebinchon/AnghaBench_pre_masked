
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int left; unsigned long top; int height; int width; } ;
struct TYPE_10__ {size_t field; TYPE_1__ w; } ;
struct saa7134_fh {TYPE_5__ win; int nclips; int clips; } ;
struct TYPE_7__ {unsigned long bytesperline; } ;
struct TYPE_8__ {TYPE_2__ fmt; scalar_t__ base; } ;
struct saa7134_dev {size_t ovfield; int ovenable; TYPE_4__* ovfmt; TYPE_3__ ovbuf; } ;
struct TYPE_9__ {int pm; int depth; scalar_t__ wswap; scalar_t__ bswap; scalar_t__ yuv; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (char*,int ,int ,int,unsigned long,int ,int ) ;
 int FUNC_7 (struct saa7134_dev*) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (struct saa7134_dev*,int ,int ,int ,scalar_t__) ;
 int FUNC_12 (struct saa7134_dev*,int ,int ,scalar_t__) ;
 int * VAR_5 ;
 int FUNC_13 (struct saa7134_dev*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_14(struct saa7134_dev *VAR_6, struct saa7134_fh *VAR_7)
{
 unsigned long VAR_8,VAR_9,VAR_10;
 int VAR_11;

 VAR_11 = FUNC_13(VAR_6,&VAR_7->win);
 if (0 != VAR_11)
  return VAR_11;

 VAR_6->ovfield = VAR_7->win.field;
 FUNC_6("start_preview %dx%d+%d+%d %s field=%s\n",
  VAR_7->win.w.width,VAR_7->win.w.height,
  VAR_7->win.w.left,VAR_7->win.w.top,
  VAR_6->ovfmt->name,VAR_5[VAR_6->ovfield]);


 FUNC_11(VAR_6,VAR_4,VAR_7->win.w.width,VAR_7->win.w.height,
   FUNC_5(VAR_6->ovfield));
 FUNC_12(VAR_6,VAR_7->clips,VAR_7->nclips,
         FUNC_5(VAR_6->ovfield));
 if (VAR_6->ovfmt->yuv)
  FUNC_8(FUNC_0(VAR_4), 0x3f, 0x03);
 else
  FUNC_8(FUNC_0(VAR_4), 0x3f, 0x01);
 FUNC_9(VAR_0, VAR_6->ovfmt->pm | 0x20);


 VAR_8 = (unsigned long)VAR_6->ovbuf.base;
 VAR_8 += VAR_6->ovbuf.fmt.bytesperline * VAR_7->win.w.top;
 VAR_8 += VAR_6->ovfmt->depth/8 * VAR_7->win.w.left;
 VAR_10 = VAR_6->ovbuf.fmt.bytesperline;
 VAR_9 = VAR_2;
 if (VAR_6->ovfmt->bswap)
  VAR_9 |= VAR_1;
 if (VAR_6->ovfmt->wswap)
  VAR_9 |= VAR_3;
 if (FUNC_5(VAR_6->ovfield)) {
  FUNC_10(FUNC_1(1),VAR_8);
  FUNC_10(FUNC_2(1),VAR_8+VAR_10);
  FUNC_10(FUNC_4(1),VAR_10*2);
  FUNC_10(FUNC_3(1),VAR_9);
 } else {
  FUNC_10(FUNC_1(1),VAR_8);
  FUNC_10(FUNC_2(1),VAR_8);
  FUNC_10(FUNC_4(1),VAR_10);
  FUNC_10(FUNC_3(1),VAR_9);
 }


 VAR_6->ovenable = 1;
 FUNC_7(VAR_6);

 return 0;
}
