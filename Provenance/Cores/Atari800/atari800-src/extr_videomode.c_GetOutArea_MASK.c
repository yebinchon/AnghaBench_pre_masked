
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t VIDEOMODE_MODE_t ;
struct TYPE_2__ {unsigned int param2src_w_mult; unsigned int src_width; unsigned int (* src2out_w_func ) (unsigned int) ;unsigned int src_height; } ;


 int VAR_0 ;
 int VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned int *VAR_9, unsigned int *VAR_10, VIDEOMODE_MODE_t VAR_11)
{
 switch (VAR_6) {
 case 132:
  VAR_4 = 320;
  break;
 case 131:
  VAR_4 = 336;
  break;
 case 133:
  VAR_4 = VAR_2;
  break;
 }
 *VAR_9 = VAR_4 * VAR_8[VAR_11].param2src_w_mult;
 if (*VAR_9 > VAR_8[VAR_11].src_width)
  *VAR_9 = VAR_8[VAR_11].src_width;
 *VAR_9 = (*VAR_8[VAR_11].src2out_w_func)(*VAR_9);

 switch (VAR_7) {
 case 129:
  VAR_5 = 200;
  break;
 case 128:
  if (VAR_1 == VAR_0)
   VAR_5 = 224;
  else
   VAR_5 = 240;
  break;
 case 130:
  VAR_5 = VAR_3;
  break;
 }
 *VAR_10 = VAR_5;
 if (*VAR_10 > VAR_8[VAR_11].src_height)
  *VAR_10 = VAR_8[VAR_11].src_height;
}
