
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int height; } ;
struct vc_data {TYPE_1__ vc_font; } ;
struct TYPE_4__ {unsigned int orig_video_cols; unsigned int orig_video_lines; } ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vc_data*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct vc_data *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, unsigned int VAR_7)
{
 if (VAR_5 % 2 || VAR_5 > VAR_1.orig_video_cols ||
     VAR_6 > (VAR_1.orig_video_lines * VAR_2)/
     VAR_4->vc_font.height)


  return (VAR_7) ? 0 : -VAR_0;

 if (FUNC_0(VAR_4) && !VAR_3)
  FUNC_1(VAR_4, VAR_5, VAR_6);
 return 0;
}
