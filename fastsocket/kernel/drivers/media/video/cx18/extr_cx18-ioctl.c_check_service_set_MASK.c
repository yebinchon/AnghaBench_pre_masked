
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_sliced_vbi_format {int ** service_lines; } ;


 int FUNC_0 (int,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_sliced_vbi_format *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 u16 VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 24; VAR_3++) {
   VAR_0->service_lines[VAR_2][VAR_3] = FUNC_0(VAR_2, VAR_3, VAR_0->service_lines[VAR_2][VAR_3], VAR_1);
   VAR_4 |= VAR_0->service_lines[VAR_2][VAR_3];
  }
 }
 return VAR_4 != 0;
}
