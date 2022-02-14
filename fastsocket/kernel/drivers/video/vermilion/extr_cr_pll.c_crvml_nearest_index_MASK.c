
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vml_sys {int dummy; } ;


 int* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct vml_sys *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7;

 VAR_6 = VAR_3 - VAR_0[0];
 VAR_6 = (VAR_6 < 0) ? -VAR_6 : VAR_6;
 for (VAR_4 = 1; VAR_4 < VAR_1; ++VAR_4) {
  VAR_7 = VAR_3 - VAR_0[VAR_4];
  VAR_7 = (VAR_7 < 0) ? -VAR_7 : VAR_7;
  if (VAR_7 < VAR_6) {
   VAR_5 = VAR_4;
   VAR_6 = VAR_7;
  }
 }
 return VAR_5;
}
