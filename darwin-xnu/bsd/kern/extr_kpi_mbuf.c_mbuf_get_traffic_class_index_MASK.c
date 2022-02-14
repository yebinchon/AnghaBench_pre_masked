
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef scalar_t__ mbuf_traffic_class_t ;
typedef int errno_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

errno_t
FUNC_3(mbuf_traffic_class_t VAR_2, u_int32_t *VAR_3)
{
 if (VAR_3 == ((void*)0) || (u_int32_t)VAR_2 >= VAR_1)
  return (VAR_0);

 *VAR_3 = FUNC_0(FUNC_2(FUNC_1(VAR_2)));
 return (0);
}
