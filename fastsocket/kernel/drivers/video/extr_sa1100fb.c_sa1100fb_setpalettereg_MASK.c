
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int var; } ;
struct sa1100fb_info {int palette_size; int* palette_cpu; TYPE_1__ fb; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
         u_int VAR_4, struct fb_info *VAR_5)
{
 struct sa1100fb_info *VAR_6 = (struct sa1100fb_info *)VAR_5;
 u_int VAR_7, VAR_8 = 1;

 if (VAR_0 < VAR_6->palette_size) {
  VAR_7 = ((VAR_1 >> 4) & 0xf00);
  VAR_7 |= ((VAR_2 >> 8) & 0x0f0);
  VAR_7 |= ((VAR_3 >> 12) & 0x00f);

  if (VAR_0 == 0)
   VAR_7 |= FUNC_0(&VAR_6->fb.var);

  VAR_6->palette_cpu[VAR_0] = VAR_7;
  VAR_8 = 0;
 }
 return VAR_8;
}
