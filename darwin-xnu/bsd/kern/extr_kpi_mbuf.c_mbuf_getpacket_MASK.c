
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * mbuf_t ;
typedef scalar_t__ mbuf_how_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (scalar_t__) ;

errno_t
FUNC_1(mbuf_how_t VAR_3, mbuf_t *VAR_4)
{

 errno_t VAR_5 = 0;

 *VAR_4 = FUNC_0(VAR_3);

 if (*VAR_4 == ((void*)0)) {
  if (VAR_3 == VAR_2)
   VAR_5 = VAR_0;
  else
   VAR_5 = VAR_1;
 }

 return (VAR_5);
}
