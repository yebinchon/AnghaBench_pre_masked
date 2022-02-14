
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
typedef TYPE_1__ VIDEOMODE_resolution_t ;
typedef size_t VIDEOMODE_MODE_t ;
struct TYPE_7__ {int (* out2src_w_func ) (unsigned int) ;int src_width; int src_height; int param2src_w_mult; } ;


 int FUNC_0 (TYPE_1__*,int,size_t,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(VIDEOMODE_resolution_t *VAR_15, VIDEOMODE_MODE_t VAR_16,
                         unsigned int VAR_17, unsigned int VAR_18,
                         int VAR_19, int VAR_20)
{
 VAR_3 = VAR_17;
 VAR_12 = (*VAR_14[VAR_16].out2src_w_func)(VAR_17);
 VAR_9 = VAR_18;
 VAR_10 = (VAR_14[VAR_16].src_width - VAR_12) / 2;
 VAR_11 = (VAR_14[VAR_16].src_height - VAR_9) / 2;

 if (VAR_8 < -VAR_0)
  VAR_8 = -VAR_0;
 else if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;
 if (VAR_13 < -VAR_1)
  VAR_13 = -VAR_1;
 else if (VAR_13 > VAR_1)
  VAR_13 = VAR_1;
 {
  int VAR_21 = VAR_8 * VAR_14[VAR_16].param2src_w_mult;
  int VAR_22 = VAR_13;
  if (VAR_21 < -(int)VAR_10)
   VAR_21 = -(int)VAR_10;
  else if (VAR_21 > (int)(VAR_14[VAR_16].src_width - VAR_10 - VAR_12))
   VAR_21 = (int)VAR_14[VAR_16].src_width - VAR_10 - VAR_12;
  if (VAR_22 < -(int)VAR_11)
   VAR_22 = -(int)VAR_11;
  else if (VAR_22 > (int)(VAR_14[VAR_16].src_height - VAR_11 - VAR_9))
   VAR_22 = (int)VAR_14[VAR_16].src_height - VAR_11 - VAR_9;
  VAR_10 += VAR_21;
  VAR_11 += VAR_22;
 }
 if (VAR_20) {
  unsigned int VAR_23 = VAR_7;
  VAR_7 = VAR_4;
  VAR_4 = VAR_23;
  FUNC_1(VAR_15);
 }
 VAR_5 = (VAR_15->width - VAR_7) / 2;
 VAR_6 = (VAR_15->height - VAR_4) / 2;
 if (VAR_16 <= VAR_2)
  FUNC_2();
 FUNC_0(VAR_15, VAR_19, VAR_16, VAR_20);
}
