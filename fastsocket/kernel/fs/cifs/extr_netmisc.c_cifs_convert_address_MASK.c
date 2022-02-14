
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s6_addr; } ;
struct sockaddr_in6 {int sin6_scope_id; void* sin6_family; TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {void* sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (void*,char const*,int,int *) ;
 int FUNC_1 (char*,int ,int *) ;
 char* FUNC_2 (char const*,char,int) ;
 int FUNC_3 (char*,char const*,int) ;

int
FUNC_4(struct sockaddr *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 const char *VAR_8;
 char VAR_9[13];
 struct sockaddr_in *VAR_10 = (struct sockaddr_in *) VAR_2;
 struct sockaddr_in6 *VAR_11 = (struct sockaddr_in6 *) VAR_2;


 if (FUNC_0(VAR_0, VAR_3, VAR_4, &VAR_10->sin_addr.s_addr)) {
  VAR_10->sin_family = VAR_0;
  return 1;
 }


 VAR_8 = FUNC_2(VAR_3, '%', VAR_4);
 VAR_6 = VAR_8 ? VAR_8 - VAR_3 : VAR_4;

 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_6, &VAR_11->sin6_addr.s6_addr);
 if (!VAR_5)
  return VAR_5;

 VAR_11->sin6_family = VAR_1;
 if (VAR_8) {

  VAR_7 = VAR_4 - (VAR_6 + 1);
  if (VAR_7 <= 0 || VAR_7 > 12)
   return 0;
  FUNC_3(VAR_9, VAR_8 + 1, VAR_7);
  VAR_9[VAR_7] = '\0';

  VAR_5 = FUNC_1(VAR_9, 0, &VAR_11->sin6_scope_id);
  VAR_5 = (VAR_5 == 0) ? 1 : 0;
 }

 return VAR_5;
}
