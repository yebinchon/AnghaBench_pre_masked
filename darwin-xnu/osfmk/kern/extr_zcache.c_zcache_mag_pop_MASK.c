
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcc_magazine {size_t zcc_magazine_index; int ** zcc_elements; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct zcc_magazine*) ;

void *FUNC_2(struct zcc_magazine *VAR_0)
{
 void *VAR_1;
 FUNC_0(FUNC_1(VAR_0));
 VAR_1 = VAR_0->zcc_elements[--VAR_0->zcc_magazine_index];

 VAR_0->zcc_elements[VAR_0->zcc_magazine_index] = ((void*)0);
 FUNC_0(VAR_1 != ((void*)0));
 return VAR_1;
}
