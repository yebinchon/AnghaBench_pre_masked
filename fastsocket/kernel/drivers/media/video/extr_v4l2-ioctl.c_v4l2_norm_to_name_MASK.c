
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ v4l2_std_id ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ std; char const* descr; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

const char *FUNC_1(v4l2_std_id VAR_1)
{
 u32 VAR_2 = VAR_1;
 int VAR_3;





 FUNC_0(VAR_2 != VAR_1);

 for (VAR_3 = 0; VAR_0[VAR_3].std; VAR_3++)
  if (VAR_2 == VAR_0[VAR_3].std)
   break;
 return VAR_0[VAR_3].descr;
}
