
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_memory {int vmalloc_flag; int * pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (size_t,int) ;
 int * FUNC_1 (size_t) ;

void FUNC_2(size_t VAR_3, struct agp_memory *VAR_4)
{
 VAR_4->pages = ((void*)0);
 VAR_4->vmalloc_flag = 0;

 if (VAR_3 <= 2*VAR_1)
  VAR_4->pages = FUNC_0(VAR_3, VAR_0 | VAR_2);
 if (VAR_4->pages == ((void*)0)) {
  VAR_4->pages = FUNC_1(VAR_3);
  VAR_4->vmalloc_flag = 1;
 }
}
