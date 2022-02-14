
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct sockaddr_in6 {int sin6_len; int sin6_port; } ;
struct sockaddr_in {int sin_len; int sin_port; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct sockaddr_in* FUNC_1 (struct sockaddr*) ;
 struct sockaddr_in6* FUNC_2 (struct sockaddr*) ;

bool
FUNC_3(struct sockaddr *VAR_2, u_short VAR_3)
{
 struct sockaddr_in *VAR_4 = ((void*)0);
 struct sockaddr_in6 *VAR_5 = ((void*)0);

 if (VAR_2 == ((void*)0) || VAR_3 == 0) {
  return VAR_0;
 }

 switch (VAR_2->sa_family) {
  case 129:
   VAR_4 = FUNC_1(VAR_2);
   if (VAR_4->sin_len != sizeof(*VAR_4)) {
    return VAR_0;
   }
   if (VAR_3 == FUNC_0(VAR_4->sin_port)) {
    return VAR_1;
   }
   break;
  case 128:
   VAR_5 = FUNC_2(VAR_2);
   if (VAR_5->sin6_len != sizeof(*VAR_5)) {
    return VAR_0;
   }
   if (VAR_3 == FUNC_0(VAR_5->sin6_port)) {
    return VAR_1;
   }
   break;
  default:
   break;
 }
 return VAR_0;
}
