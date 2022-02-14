
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int8_t ;
struct ifaddr {int ** ifa_addr; } ;
typedef int sdlbuf ;
typedef int kauth_cred_t ;
typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_6__ {int sdl_len; } ;
struct TYPE_5__ {struct ifaddr* if_lladdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 TYPE_3__* FUNC_2 (int **) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int const*,void*,size_t) ;
 int FUNC_5 (void*,size_t) ;
 int * FUNC_6 (TYPE_3__*,size_t*,int *) ;

__attribute__((used)) static errno_t
FUNC_7(ifnet_t VAR_3, void *VAR_4,
    size_t VAR_5, kauth_cred_t *VAR_6)
{
 const u_int8_t *VAR_7;
 size_t VAR_8;
 struct ifaddr *VAR_9;
 uint8_t VAR_10[VAR_2 + 1];
 errno_t VAR_11 = 0;





 FUNC_3(sizeof (VAR_10) == (VAR_2 + 1));

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_9 = VAR_3->if_lladdr;
 FUNC_0(VAR_9);
 FUNC_4(*VAR_9->ifa_addr, &VAR_10, FUNC_2(VAR_9->ifa_addr)->sdl_len);
 FUNC_1(VAR_9);

 VAR_7 = FUNC_6(FUNC_2(&VAR_10), &VAR_8, VAR_6);
 if (VAR_8 != VAR_5) {
  FUNC_5(VAR_4, VAR_5);
  VAR_11 = VAR_1;
 } else {
  FUNC_4(VAR_7, VAR_4, VAR_8);
 }

 return (VAR_11);
}
