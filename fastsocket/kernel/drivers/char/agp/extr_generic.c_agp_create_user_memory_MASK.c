
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct agp_memory {scalar_t__ key; scalar_t__ num_scratch_pages; int * pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,struct agp_memory*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct agp_memory*) ;
 struct agp_memory* FUNC_4 (int,int ) ;

__attribute__((used)) static struct agp_memory *FUNC_5(unsigned long VAR_2)
{
 struct agp_memory *VAR_3;
 unsigned long VAR_4 = VAR_2*sizeof(struct page *);

 if (VAR_1/sizeof(struct page *) < VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_4(sizeof(struct agp_memory), VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->key = FUNC_2();

 if (VAR_3->key < 0) {
  FUNC_3(VAR_3);
  return ((void*)0);
 }

 FUNC_0(VAR_4, VAR_3);

 if (VAR_3->pages == ((void*)0)) {
  FUNC_1(VAR_3->key);
  FUNC_3(VAR_3);
  return ((void*)0);
 }
 VAR_3->num_scratch_pages = 0;
 return VAR_3;
}
