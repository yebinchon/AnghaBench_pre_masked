
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ u64; } ;
typedef TYPE_1__ cvmx_helper_link_info_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__ FUNC_2 (int) ;
 int FUNC_3 (int,TYPE_1__) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_0 ;

cvmx_helper_link_info_t FUNC_5(int VAR_1)
{
 cvmx_helper_link_info_t VAR_2;
 int VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = FUNC_0(VAR_1);

 if (VAR_4 >= FUNC_4(VAR_3)) {
  VAR_2.u64 = 0;
  return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2.u64 == VAR_0[VAR_1].u64)
  return VAR_2;


 FUNC_3(VAR_1, VAR_2);





 return VAR_0[VAR_1];
}
