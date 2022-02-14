
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct pvr2_hdw {int unit_number; } ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static v4l2_std_id FUNC_0(struct pvr2_hdw *VAR_2)
{
 int VAR_3 = VAR_2->unit_number;
 int VAR_4 = 0;
 if ((VAR_3 >= 0) && (VAR_3 < VAR_0)) {
  VAR_4 = VAR_1[VAR_3];
  if (VAR_4) return VAR_4;
 }
 return 0;
}
