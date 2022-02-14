
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(struct sockaddr *VAR_3)
{
 if (VAR_3->sa_family == VAR_0) {
  return (VAR_3->sa_len == sizeof(struct sockaddr_in));
 } else if (VAR_3->sa_family == VAR_1) {
  return (VAR_3->sa_len == sizeof(struct sockaddr_in6));
 } else {
  return (VAR_2);
 }
}
