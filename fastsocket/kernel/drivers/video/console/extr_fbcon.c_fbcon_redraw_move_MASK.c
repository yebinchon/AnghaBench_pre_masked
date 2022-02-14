
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_size_row; scalar_t__ vc_origin; } ;
struct display {int dummy; } ;


 unsigned short* FUNC_0 (unsigned short*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vc_data*,unsigned short*,int,int,int) ;
 unsigned short FUNC_3 (unsigned short*) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_0, struct display *VAR_1,
         int VAR_2, int VAR_3, int VAR_4)
{
 unsigned short *VAR_5 = (unsigned short *)
  (VAR_0->vc_origin + VAR_0->vc_size_row * VAR_2);

 while (VAR_3--) {
  unsigned short *VAR_6 = VAR_5;
  unsigned short *VAR_7 = FUNC_0(VAR_5, 1);
  unsigned short VAR_8;
  int VAR_9 = 0;
  unsigned short VAR_10 = 1;

  do {
   VAR_8 = FUNC_3(VAR_5);
   if (VAR_10 != (VAR_8 & 0xff00)) {
    VAR_10 = VAR_8 & 0xff00;
    if (VAR_5 > VAR_6) {
     FUNC_2(VAR_0, VAR_6, VAR_5 - VAR_6,
          VAR_4, VAR_9);
     VAR_9 += VAR_5 - VAR_6;
     VAR_6 = VAR_5;
    }
   }
   FUNC_1();
   VAR_5++;
  } while (VAR_5 < VAR_7);
  if (VAR_5 > VAR_6)
   FUNC_2(VAR_0, VAR_6, VAR_5 - VAR_6, VAR_4, VAR_9);
  FUNC_1();
  VAR_4++;
 }
}
