
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vivi_fh {size_t input; unsigned char** bars; TYPE_1__* fmt; struct vivi_dev* dev; } ;
struct vivi_dev {size_t input; } ;
struct TYPE_4__ {unsigned char** bar; } ;
struct TYPE_3__ {int fourcc; } ;


 unsigned char FUNC_0 (unsigned char,unsigned char,unsigned char) ;
 unsigned char FUNC_1 (unsigned char,unsigned char,unsigned char) ;
 unsigned char FUNC_2 (unsigned char,unsigned char,unsigned char) ;






 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct vivi_fh *VAR_1)
{
 struct vivi_dev *VAR_2 = VAR_1->dev;
 unsigned char VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_1->input = VAR_2->input;

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  VAR_3 = VAR_0[VAR_1->input].bar[VAR_6][0];
  VAR_4 = VAR_0[VAR_1->input].bar[VAR_6][1];
  VAR_5 = VAR_0[VAR_1->input].bar[VAR_6][2];
  VAR_7 = 0;

  switch (VAR_1->fmt->fourcc) {
  case 128:
  case 129:
   VAR_7 = 1;
   break;
  case 131:
  case 130:
   VAR_3 >>= 3;
   VAR_4 >>= 2;
   VAR_5 >>= 3;
   break;
  case 133:
  case 132:
   VAR_3 >>= 3;
   VAR_4 >>= 3;
   VAR_5 >>= 3;
   break;
  }

  if (VAR_7) {
   VAR_1->bars[VAR_6][0] = FUNC_2(VAR_3, VAR_4, VAR_5);
   VAR_1->bars[VAR_6][1] = FUNC_0(VAR_3, VAR_4, VAR_5);
   VAR_1->bars[VAR_6][2] = FUNC_1(VAR_3, VAR_4, VAR_5);
  } else {
   VAR_1->bars[VAR_6][0] = VAR_3;
   VAR_1->bars[VAR_6][1] = VAR_4;
   VAR_1->bars[VAR_6][2] = VAR_5;
  }
 }

}
