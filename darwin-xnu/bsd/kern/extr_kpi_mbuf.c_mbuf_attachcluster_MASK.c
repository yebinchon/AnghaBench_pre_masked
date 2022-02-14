
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbuf_type_t ;
typedef int * mbuf_t ;
typedef int mbuf_how_t ;
typedef int errno_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int *,void (*) (int *,VAR_2,int *),size_t,int *,int ,int ) ;

errno_t
FUNC_1(mbuf_how_t VAR_3, mbuf_type_t VAR_4, mbuf_t *VAR_5,
    caddr_t VAR_6, void (*VAR_7)(caddr_t, VAR_8, caddr_t),
    size_t VAR_9, caddr_t VAR_10)
{
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_9 == 0)
  return (VAR_0);

 if ((*VAR_5 = FUNC_0(*VAR_5, VAR_4, VAR_6,
     VAR_7, VAR_9, VAR_10, VAR_3, 0)) == ((void*)0))
  return (VAR_1);

 return (0);
}
