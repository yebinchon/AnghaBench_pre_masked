
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; int ss_len; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef scalar_t__ sa_family_t ;
typedef int errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sockaddr* FUNC_0 (struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_storage*,int ,int) ;

__attribute__((used)) static errno_t
FUNC_2(sa_family_t VAR_4, struct sockaddr *VAR_5,
                     struct sockaddr **VAR_6)
{
 int VAR_7 = 0;
 struct sockaddr *VAR_8;
 struct sockaddr_storage VAR_9;

 if (VAR_5 != ((void*)0)) {
  VAR_8 = VAR_5;
 } else {
  FUNC_1(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.ss_family = VAR_4;
  if (VAR_9.ss_family == VAR_0) {
   VAR_9.ss_len = sizeof(struct sockaddr_in);
  }





  else {
   VAR_7 = VAR_2;
  }
  VAR_8 = (struct sockaddr *)&VAR_9;
 }

 if (!VAR_7) {
  *VAR_6 = FUNC_0(VAR_8, 1);
  if (*VAR_6 == ((void*)0)) {
   VAR_7 = VAR_3;
  }
 }

 return VAR_7;
}
