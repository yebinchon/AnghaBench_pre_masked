
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_allocation_site_t ;


 int FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 int FUNC_1 (void*,int) ;
 void* FUNC_2 (size_t,int,int,int *) ;
 int FUNC_3 (void*,void*,int ) ;
 int FUNC_4 (void*,size_t) ;
 size_t FUNC_5 (size_t) ;
 size_t FUNC_6 (void*) ;

void *
FUNC_7(
 void *VAR_1,
 size_t VAR_2,
 int VAR_3,
 int VAR_4,
 vm_allocation_site_t *VAR_5)
{
 void *VAR_6;
 size_t VAR_7;


 if (VAR_1 == ((void*)0))
  return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5));

 VAR_7 = FUNC_6(VAR_1);





 if (FUNC_5(VAR_2) == VAR_7) {
  if (VAR_4 & VAR_0) {
   if (VAR_7 < VAR_2)
    FUNC_4(VAR_1 + VAR_7, (VAR_2 - VAR_7));
   else
    FUNC_4(VAR_1 + VAR_2, (VAR_7 - VAR_2));
  }
  return VAR_1;
 }


 if ((VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5)) == ((void*)0))
  return (((void*)0));


 FUNC_3(VAR_1, VAR_6, FUNC_0(VAR_2, VAR_7));
 FUNC_1(VAR_1, VAR_3);

 return (VAR_6);
}
