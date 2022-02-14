
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int vc_screenbuf_size; unsigned short vc_complement_mask; int vc_cols; TYPE_1__* vc_sw; } ;
struct TYPE_2__ {int (* con_putc ) (struct vc_data*,unsigned short,unsigned short,unsigned short) ;} ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int FUNC_1 () ;
 unsigned short FUNC_2 (unsigned short*) ;
 int FUNC_3 (unsigned short,unsigned short*) ;
 unsigned short* FUNC_4 (struct vc_data*,int,int) ;
 int FUNC_5 (struct vc_data*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_6 (struct vc_data*,unsigned short,unsigned short,unsigned short) ;

void FUNC_7(struct vc_data *VAR_0, int VAR_1)
{
 static int VAR_2 = -1;
 static unsigned short VAR_3;
 static unsigned short VAR_4, VAR_5;

 FUNC_1();

 if (VAR_2 != -1 && VAR_2 >= 0 &&
     VAR_2 < VAR_0->vc_screenbuf_size) {
  FUNC_3(VAR_3, FUNC_4(VAR_0, VAR_2, 1));
  if (FUNC_0(VAR_0))
   VAR_0->vc_sw->con_putc(VAR_0, VAR_3, VAR_5, VAR_4);
 }

 VAR_2 = VAR_1;

 if (VAR_1 != -1 && VAR_1 >= 0 &&
     VAR_1 < VAR_0->vc_screenbuf_size) {
  unsigned short VAR_6;
  unsigned short *VAR_7;
  VAR_7 = FUNC_4(VAR_0, VAR_1, 1);
  VAR_3 = FUNC_2(VAR_7);
  VAR_6 = VAR_3 ^ VAR_0->vc_complement_mask;
  FUNC_3(VAR_6, VAR_7);
  if (FUNC_0(VAR_0)) {
   VAR_4 = (VAR_1 >> 1) % VAR_0->vc_cols;
   VAR_5 = (VAR_1 >> 1) / VAR_0->vc_cols;
   VAR_0->vc_sw->con_putc(VAR_0, VAR_6, VAR_5, VAR_4);
  }
 }

}
