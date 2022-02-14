
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {unsigned int vc_rows; unsigned int vc_size_row; int vc_cols; int vc_video_erase_char; scalar_t__ vc_origin; TYPE_1__* vc_sw; } ;
struct TYPE_2__ {scalar_t__ (* con_scroll ) (struct vc_data*,unsigned int,unsigned int,int ,int) ;} ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned short*,unsigned short*,unsigned int) ;
 int FUNC_2 (unsigned short*,int ,int) ;
 scalar_t__ FUNC_3 (struct vc_data*,unsigned int,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_1, unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 unsigned short *VAR_5;
 unsigned int VAR_6;

 if (VAR_2+VAR_4 >= VAR_3)
  VAR_4 = VAR_3 - VAR_2 - 1;
 if (VAR_3 > VAR_1->vc_rows || VAR_2 >= VAR_3 || VAR_4 < 1)
  return;
 if (FUNC_0(VAR_1) && VAR_1->vc_sw->con_scroll(VAR_1, VAR_2, VAR_3, VAR_0, VAR_4))
  return;
 VAR_5 = (unsigned short *)(VAR_1->vc_origin + VAR_1->vc_size_row * VAR_2);
 VAR_6 = VAR_1->vc_cols * VAR_4;
 FUNC_1(VAR_5 + VAR_6, VAR_5, (VAR_3 - VAR_2 - VAR_4) * VAR_1->vc_size_row);
 FUNC_2(VAR_5, VAR_1->vc_video_erase_char, 2 * VAR_6);
}
