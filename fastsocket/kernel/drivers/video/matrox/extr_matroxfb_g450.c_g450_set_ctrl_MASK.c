
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_control {int id; scalar_t__ value; } ;
struct matrox_fb_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ maximum; scalar_t__ minimum; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;





 unsigned char FUNC_0 (struct matrox_fb_info*,int) ;
 int FUNC_1 (struct matrox_fb_info*,int,unsigned char) ;
 int FUNC_2 (struct matrox_fb_info*,int,int) ;
 int FUNC_3 (struct matrox_fb_info*,int*,int*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__* FUNC_5 (struct matrox_fb_info*,int) ;

__attribute__((used)) static int FUNC_6(void* VAR_2, struct v4l2_control *VAR_3) {
 int VAR_4;
 struct matrox_fb_info *VAR_5 = VAR_2;

 VAR_4 = FUNC_4(VAR_3->id);
 if (VAR_4 < 0) return -VAR_0;




 if (VAR_3->value == *FUNC_5(VAR_5, VAR_4)) return 0;




 if (VAR_3->value > VAR_1[VAR_4].desc.maximum) return -VAR_0;
 if (VAR_3->value < VAR_1[VAR_4].desc.minimum) return -VAR_0;




 *FUNC_5(VAR_5, VAR_4) = VAR_3->value;

 switch (VAR_3->id) {
  case 131:
  case 130:
   {
    int VAR_6, VAR_7;
    FUNC_3(VAR_5, &VAR_6, &VAR_7);
    FUNC_2(VAR_5, 0x0e, VAR_6);
    FUNC_2(VAR_5, 0x1e, VAR_7);
   }
   break;
  case 128:
   FUNC_1(VAR_5, 0x20, VAR_3->value);
   FUNC_1(VAR_5, 0x22, VAR_3->value);
   break;
  case 129:
   FUNC_1(VAR_5, 0x25, VAR_3->value);
   break;
  case 132:
   {
    unsigned char VAR_8 = FUNC_0(VAR_5, 0x05);
    if (VAR_3->value) VAR_8 |= 0x02;
    else VAR_8 &= ~0x02;
    FUNC_1(VAR_5, 0x05, VAR_8);
   }
   break;
 }


 return 0;
}
