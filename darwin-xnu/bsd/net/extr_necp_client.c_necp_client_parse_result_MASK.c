
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union necp_sockaddr_union {int dummy; } necp_sockaddr_union ;
typedef int u_int8_t ;
typedef size_t u_int32_t ;
struct necp_tlv_header {int dummy; } ;
struct TYPE_5__ {int sa_len; } ;
struct TYPE_4__ {TYPE_2__ sa; } ;
struct necp_client_endpoint {TYPE_1__ u; } ;




 int FUNC_0 (union necp_sockaddr_union*,TYPE_2__*,int ) ;
 size_t FUNC_1 (int*,size_t) ;
 int FUNC_2 (int*,size_t) ;
 int* FUNC_3 (int*,size_t,int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(u_int8_t *VAR_0,
       u_int32_t VAR_1,
       union necp_sockaddr_union *VAR_2,
       union necp_sockaddr_union *VAR_3,
       void **VAR_4)
{
#pragma unused(flow_stats)
 int VAR_5 = 0;
 size_t VAR_6 = 0;

 while ((VAR_6 + sizeof(struct necp_tlv_header)) <= VAR_1) {
  u_int8_t VAR_7 = FUNC_2(VAR_0, VAR_6);
  u_int32_t VAR_8 = FUNC_1(VAR_0, VAR_6);

  if (VAR_8 > 0 && (VAR_6 + sizeof(struct necp_tlv_header) + VAR_8) <= VAR_1) {
   u_int8_t *VAR_9 = FUNC_3(VAR_0, VAR_6, ((void*)0));
   if (VAR_9 != ((void*)0)) {
    switch (VAR_7) {
     case 129: {
      if (VAR_8 >= sizeof(struct necp_client_endpoint)) {
       struct necp_client_endpoint *VAR_10 = (struct necp_client_endpoint *)(void *)VAR_9;
       if (VAR_2 != ((void*)0) && FUNC_4(&VAR_10->u.sa)) {
        FUNC_0(VAR_2, &VAR_10->u.sa, VAR_10->u.sa.sa_len);
       }
      }
      break;
     }
     case 128: {
      if (VAR_8 >= sizeof(struct necp_client_endpoint)) {
       struct necp_client_endpoint *VAR_11 = (struct necp_client_endpoint *)(void *)VAR_9;
       if (VAR_3 != ((void*)0) && FUNC_4(&VAR_11->u.sa)) {
        FUNC_0(VAR_3, &VAR_11->u.sa, VAR_11->u.sa.sa_len);
       }
      }
      break;
     }
     default: {
      break;
     }
    }
   }
  }

  VAR_6 += sizeof(struct necp_tlv_header) + VAR_8;
 }

 return (VAR_5);
}
