
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_sliced_vbi_format {int ** service_lines; } ;



u16 FUNC_0(struct v4l2_sliced_vbi_format *VAR_0)
{
 int VAR_1, VAR_2;
 u16 VAR_3 = 0;

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < 24; VAR_2++)
   VAR_3 |= VAR_0->service_lines[VAR_1][VAR_2];
 }
 return VAR_3;
}
