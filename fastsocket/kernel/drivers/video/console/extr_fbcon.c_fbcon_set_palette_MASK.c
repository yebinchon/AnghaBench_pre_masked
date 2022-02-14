
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct vc_data {size_t vc_num; int* vc_palette; } ;
struct fb_info {int fix; int var; } ;
struct TYPE_4__ {int len; scalar_t__ start; } ;


 int FUNC_0 (struct vc_data*) ;
 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,struct fb_info*) ;
 scalar_t__ FUNC_5 (struct vc_data*,struct fb_info*) ;
 int* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 struct fb_info** VAR_6 ;

__attribute__((used)) static int FUNC_6(struct vc_data *VAR_7, unsigned char *VAR_8)
{
 struct fb_info *VAR_9 = VAR_6[VAR_1[VAR_7->vc_num]];
 int VAR_10, VAR_11, VAR_12, VAR_13;
 u8 VAR_14;

 if (FUNC_5(VAR_7, VAR_9))
  return -VAR_0;

 if (!FUNC_0(VAR_7))
  return 0;

 VAR_13 = FUNC_3(&VAR_9->var, &VAR_9->fix);
 if (VAR_13 > 3) {
  for (VAR_10 = VAR_11 = 0; VAR_10 < 16; VAR_10++) {
   VAR_12 = VAR_8[VAR_10];
   VAR_14 = VAR_7->vc_palette[VAR_11++];
   VAR_5[VAR_12] = (VAR_14 << 8) | VAR_14;
   VAR_14 = VAR_7->vc_palette[VAR_11++];
   VAR_4[VAR_12] = (VAR_14 << 8) | VAR_14;
   VAR_14 = VAR_7->vc_palette[VAR_11++];
   VAR_2[VAR_12] = (VAR_14 << 8) | VAR_14;
  }
  VAR_3.len = 16;
  VAR_3.start = 0;




 } else
  FUNC_1(FUNC_2(1 << VAR_13), &VAR_3);

 return FUNC_4(&VAR_3, VAR_9);
}
