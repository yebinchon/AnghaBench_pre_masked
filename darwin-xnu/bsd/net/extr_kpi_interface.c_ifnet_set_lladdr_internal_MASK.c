
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_dl {size_t sdl_alen; int sdl_type; } ;
struct ifaddr {scalar_t__ ifa_addr; } ;
typedef TYPE_1__* ifnet_t ;
typedef scalar_t__ errno_t ;
struct TYPE_7__ {size_t if_addrlen; int if_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sockaddr_dl*) ;
 int FUNC_3 (void const*,int ,size_t) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int *,int ) ;
 struct ifaddr** VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static errno_t
FUNC_11(ifnet_t VAR_6, const void *VAR_7,
    size_t VAR_8, u_char VAR_9, int VAR_10)
{
 struct ifaddr *VAR_11;
 errno_t VAR_12 = 0;

 if (VAR_6 == ((void*)0))
  return (VAR_0);

 FUNC_7();
 FUNC_9(VAR_6);
 if (VAR_8 != 0 &&
     (VAR_8 != VAR_6->if_addrlen || VAR_7 == 0)) {
  FUNC_8(VAR_6);
  FUNC_6();
  return (VAR_0);
 }
 VAR_11 = VAR_5[VAR_6->if_index - 1];
 if (VAR_11 != ((void*)0)) {
  struct sockaddr_dl *VAR_13;

  FUNC_0(VAR_11);
  VAR_13 = (struct sockaddr_dl *)(void *)VAR_11->ifa_addr;
  if (VAR_8 != 0) {
   FUNC_3(VAR_7, FUNC_2(VAR_13), VAR_8);
  } else {
   FUNC_4(FUNC_2(VAR_13), VAR_6->if_addrlen);
  }
  VAR_13->sdl_alen = VAR_8;

  if (VAR_10) {
   VAR_13->sdl_type = VAR_9;
  }
  FUNC_1(VAR_11);
 } else {
  VAR_12 = VAR_1;
 }
 FUNC_8(VAR_6);
 FUNC_6();


 if (VAR_12 == 0) {
  FUNC_10(VAR_6, ((void*)0),
      VAR_2);
  FUNC_5(VAR_6, VAR_4,
      VAR_3, ((void*)0), 0);
 }

 return (VAR_12);
}
