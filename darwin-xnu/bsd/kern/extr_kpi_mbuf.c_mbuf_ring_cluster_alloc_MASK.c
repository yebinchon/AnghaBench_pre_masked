
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
 int * FUNC_0 (int *,int ,int *,void (*) (caddr_t,VAR_2,caddr_t),size_t,int *,int ,int) ;
 int FUNC_1 (int ,size_t*,int **) ;
 int FUNC_2 (int *,size_t) ;

errno_t
FUNC_3(mbuf_how_t VAR_3, mbuf_type_t VAR_4, mbuf_t *VAR_5,
    void (*VAR_6)(caddr_t, VAR_7, caddr_t), size_t *VAR_8)
{
 caddr_t VAR_9 = ((void*)0);
 errno_t VAR_10;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_8 == ((void*)0) || *VAR_8 == 0)
  return (VAR_0);

 if ((VAR_10 = FUNC_1(VAR_3, VAR_8, &VAR_9)) != 0)
  return (VAR_10);

 if ((*VAR_5 = FUNC_0(*VAR_5, VAR_4, VAR_9,
     VAR_6, *VAR_8, ((void*)0), VAR_3, 1)) == ((void*)0)) {
  FUNC_2(VAR_9, *VAR_8);
  return (VAR_1);
 }

 return (0);
}
