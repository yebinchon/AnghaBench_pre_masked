
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_header {unsigned long size; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (unsigned long) ;
 int FUNC_2 (void*,void*,unsigned long) ;

void* FUNC_3(void* VAR_0,size_t VAR_1)
{
 if (VAR_0==0){
  return FUNC_1(VAR_1);
 }
 else if (VAR_1==0)
  return VAR_0;

 struct malloc_header *VAR_2=VAR_0-sizeof(struct malloc_header);
 unsigned long VAR_3=VAR_2->size;
 void *VAR_4=FUNC_1(VAR_3+VAR_1);
 FUNC_2(VAR_4,VAR_0,VAR_3);
 FUNC_0(VAR_0);
 return VAR_4;
}
