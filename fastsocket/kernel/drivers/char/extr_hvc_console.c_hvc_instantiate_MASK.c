
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct hvc_struct {int kref; } ;
struct hv_ops {int dummy; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 struct hv_ops const** VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct hvc_struct* FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int* VAR_5 ;

int FUNC_3(uint32_t VAR_6, int VAR_7, const struct hv_ops *VAR_8)
{
 struct hvc_struct *VAR_9;

 if (VAR_7 < 0 || VAR_7 >= VAR_0)
  return -1;

 if (VAR_5[VAR_7] != -1)
  return -1;


 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9) {
  FUNC_1(&VAR_9->kref, VAR_2);
  return -1;
 }

 VAR_5[VAR_7] = VAR_6;
 VAR_1[VAR_7] = VAR_8;


 if (VAR_4 < VAR_7)
  VAR_4 = VAR_7;





 if (VAR_7 == VAR_3.index)
  FUNC_2(&VAR_3);

 return 0;
}
