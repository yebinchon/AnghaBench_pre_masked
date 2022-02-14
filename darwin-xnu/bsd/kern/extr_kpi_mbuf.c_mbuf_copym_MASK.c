
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * mbuf_t ;
typedef int mbuf_how_t ;
typedef int errno_t ;


 int VAR_0 ;
 int * FUNC_0 (int * const,size_t,size_t,int ) ;

errno_t
FUNC_1(const mbuf_t VAR_1, size_t VAR_2, size_t VAR_3,
    mbuf_how_t VAR_4, mbuf_t *VAR_5)
{

 *VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return (*VAR_5 == ((void*)0) ? VAR_0 : 0);
}
