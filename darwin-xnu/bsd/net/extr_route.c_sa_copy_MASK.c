
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_2__ {int sin6_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct sockaddr* FUNC_1 (struct sockaddr_storage*) ;
 TYPE_1__* FUNC_2 (struct sockaddr_storage*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr*,struct sockaddr_storage*,int) ;
 int FUNC_5 (struct sockaddr_storage*,int) ;
 unsigned int FUNC_6 (struct sockaddr*) ;
 unsigned int FUNC_7 (struct sockaddr*) ;
 int FUNC_8 (struct sockaddr*,unsigned int) ;
 int FUNC_9 (struct sockaddr*,unsigned int) ;
 unsigned int FUNC_10 (struct sockaddr*) ;
 int FUNC_11 (struct sockaddr*,unsigned int) ;

struct sockaddr *
FUNC_12(struct sockaddr *VAR_3, struct sockaddr_storage *VAR_4,
    unsigned int *VAR_5)
{
 int VAR_6 = VAR_3->sa_family;
 unsigned int VAR_7 = (VAR_5 != ((void*)0)) ? *VAR_5 : VAR_2;

 FUNC_3(VAR_6 == VAR_0 || VAR_6 == VAR_1);

 FUNC_5(VAR_4, sizeof (*VAR_4));

 if (VAR_6 == VAR_0) {
  FUNC_4(VAR_3, VAR_4, sizeof (struct sockaddr_in));
  if (VAR_5 == ((void*)0) || VAR_7 != VAR_2)
   FUNC_11(FUNC_1(VAR_4), VAR_7);
 } else {
  FUNC_4(VAR_3, VAR_4, sizeof (struct sockaddr_in6));
  if (VAR_5 != ((void*)0) &&
      FUNC_0(&FUNC_2(VAR_4)->sin6_addr)) {
   unsigned int VAR_8;






   VAR_8 = FUNC_6(FUNC_1(VAR_4));
   if (VAR_8 != VAR_2 && VAR_7 == VAR_2)
    VAR_7 = VAR_8;
   if (VAR_7 != VAR_2) {

    FUNC_9(FUNC_1(VAR_4), VAR_7);
   } else {

    VAR_7 = FUNC_7(FUNC_1(VAR_4));
   }




   if (VAR_7 != VAR_2 && VAR_8 != VAR_7)
    FUNC_8(FUNC_1(VAR_4), VAR_7);
  } else if (VAR_5 == ((void*)0) || VAR_7 != VAR_2) {
   FUNC_9(FUNC_1(VAR_4), VAR_7);
  }
 }

 if (VAR_5 != ((void*)0)) {
  *VAR_5 = (VAR_6 == VAR_0) ? FUNC_10(FUNC_1(VAR_4)) :
      FUNC_7(FUNC_1(VAR_4));
 }

 return (FUNC_1(VAR_4));
}
