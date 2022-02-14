
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_sliced_vbi_format {int ** service_lines; } ;


 int FUNC_0 (int,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct v4l2_sliced_vbi_format *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 24; VAR_3++) {
   VAR_0->service_lines[VAR_2][VAR_3] = FUNC_0(VAR_2, VAR_3, VAR_0->service_lines[VAR_2][VAR_3], VAR_1);
  }
 }
}
