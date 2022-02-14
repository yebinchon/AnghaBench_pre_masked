
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int right; unsigned int left; } ;
struct vino_channel_settings {unsigned int decimation; size_t data_format; unsigned int line_size; TYPE_1__ clipping; } ;
struct TYPE_4__ {unsigned int bpp; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct vino_channel_settings *VAR_1)
{
 unsigned int VAR_2 = VAR_1->clipping.right - VAR_1->clipping.left;
 unsigned int VAR_3 = VAR_1->decimation;
 unsigned int VAR_4 = VAR_0[VAR_1->data_format].bpp;
 unsigned int VAR_5;

 FUNC_0("update_line_size(): before: w = %d, d = %d, "
  "line_size = %d\n", VAR_2, VAR_3, VAR_1->line_size);


 VAR_5 = (VAR_4 * (VAR_2 / VAR_3)) & ~7;
 VAR_2 = (VAR_5 / VAR_4) * VAR_3;

 VAR_1->clipping.right = VAR_1->clipping.left + VAR_2;
 VAR_1->line_size = VAR_5;

 FUNC_0("update_line_size(): after: w = %d, d = %d, "
  "line_size = %d\n", VAR_2, VAR_3, VAR_1->line_size);
}
