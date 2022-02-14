
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_memory {scalar_t__ key; int num_scratch_pages; int type; int * pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct agp_memory*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct agp_memory*) ;
 struct agp_memory* FUNC_4 (int,int ) ;

struct agp_memory *FUNC_5(int VAR_3)
{
 struct agp_memory *VAR_4;

 VAR_4 = FUNC_4(sizeof(struct agp_memory), VAR_1);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->key = FUNC_2();

 if (VAR_4->key < 0) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 FUNC_0(VAR_2 * VAR_3, VAR_4);

 if (VAR_4->pages == ((void*)0)) {
  FUNC_1(VAR_4->key);
  FUNC_3(VAR_4);
  return ((void*)0);
 }
 VAR_4->num_scratch_pages = VAR_3;
 VAR_4->type = VAR_0;
 return VAR_4;
}
