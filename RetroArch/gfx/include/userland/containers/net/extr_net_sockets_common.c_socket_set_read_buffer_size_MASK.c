
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vc_container_net_status_t ;
typedef int uint32_t ;
typedef int buffer_size ;
struct TYPE_3__ {int socket; } ;
typedef TYPE_1__ VC_CONTAINER_NET_T ;
typedef int SOCKOPT_CAST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int const,int) ;
 int FUNC_1 () ;

__attribute__((used)) static vc_container_net_status_t FUNC_2(VC_CONTAINER_NET_T *VAR_4,
      uint32_t VAR_5)
{
   int VAR_6;
   const SOCKOPT_CAST_T VAR_7 = (const SOCKOPT_CAST_T)&VAR_5;

   VAR_6 = FUNC_0(VAR_4->socket, VAR_1, VAR_2, VAR_7, sizeof(VAR_5));

   if (VAR_6 == VAR_0)
      return FUNC_1();

   return VAR_3;
}
