
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_standard {int id; } ;


 struct v4l2_standard* VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static struct v4l2_standard *FUNC_0(v4l2_std_id VAR_2)
{
 unsigned int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].id & VAR_2) {
   return VAR_0 + VAR_3;
  }
 }
 return ((void*)0);
}
