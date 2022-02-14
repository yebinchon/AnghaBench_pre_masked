
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int * mbuf_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t,size_t,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

errno_t
FUNC_3(mbuf_t VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = 0;
 mbuf_t VAR_6;

 if (VAR_2 == ((void*)0))
  return (VAR_0);

 for (VAR_6 = VAR_2; VAR_6; VAR_6 = FUNC_2(VAR_6))
  VAR_5 += FUNC_1(VAR_6);

 return (FUNC_0(VAR_2, VAR_5, VAR_4, VAR_3, VAR_1));
}
