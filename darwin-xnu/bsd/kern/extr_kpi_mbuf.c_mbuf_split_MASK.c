
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * mbuf_t ;
typedef int mbuf_how_t ;
typedef int errno_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,size_t,int ) ;

errno_t
FUNC_1(mbuf_t VAR_1, size_t VAR_2,
     mbuf_how_t VAR_3, mbuf_t *VAR_4)
{

 *VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 return (*VAR_4 == ((void*)0) ? VAR_0 : 0);
}
