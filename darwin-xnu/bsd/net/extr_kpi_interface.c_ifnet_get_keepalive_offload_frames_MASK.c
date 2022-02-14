
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ifnet_keepalive_offload_frame {int dummy; } ;
typedef int ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ifnet_keepalive_offload_frame*,int) ;
 scalar_t__ FUNC_4 (int ,struct ifnet_keepalive_offload_frame*,scalar_t__,size_t) ;
 int FUNC_5 (int ,struct ifnet_keepalive_offload_frame*,scalar_t__,size_t,scalar_t__*) ;
 int FUNC_6 (int ,struct ifnet_keepalive_offload_frame*,scalar_t__,size_t,scalar_t__*) ;

errno_t
FUNC_7(ifnet_t VAR_2,
    struct ifnet_keepalive_offload_frame *VAR_3,
    u_int32_t VAR_4, size_t VAR_5,
    u_int32_t *VAR_6)
{
 u_int32_t VAR_7;

 if (VAR_3 == ((void*)0) || VAR_6 == ((void*)0) ||
     VAR_5 >= VAR_1)
  return (VAR_0);


 if (FUNC_1(VAR_5, sizeof(u_int32_t)) !=
     VAR_5)
  return (VAR_0);

 *VAR_6 = 0;
 if (VAR_4 == 0)
  return (0);


 if (FUNC_0(VAR_2))
  return (0);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  struct ifnet_keepalive_offload_frame *VAR_8 = VAR_3 + VAR_7;

  FUNC_3(VAR_8, sizeof(struct ifnet_keepalive_offload_frame));
 }


 *VAR_6 = FUNC_4(VAR_2,
     VAR_3, VAR_4, VAR_5);


 if (*VAR_6 < VAR_4)
  FUNC_6(VAR_2, VAR_3,
      VAR_4, VAR_5,
      VAR_6);


 if (*VAR_6 < VAR_4)
  FUNC_5(VAR_2, VAR_3,
      VAR_4, VAR_5,
      VAR_6);

 FUNC_2(*VAR_6 <= VAR_4);

 return (0);
}
