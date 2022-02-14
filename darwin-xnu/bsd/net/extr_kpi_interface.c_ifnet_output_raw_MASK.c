
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int protocol_family_t ;
typedef int * mbuf_t ;
typedef int * ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int *,int *,int,int *) ;
 int FUNC_1 (int *) ;

errno_t
FUNC_2(ifnet_t VAR_1, protocol_family_t VAR_2, mbuf_t VAR_3)
{
 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_1(VAR_3);
  return (VAR_0);
 }
 return (FUNC_0(VAR_1, VAR_2, VAR_3, ((void*)0), ((void*)0), 1, ((void*)0)));
}
