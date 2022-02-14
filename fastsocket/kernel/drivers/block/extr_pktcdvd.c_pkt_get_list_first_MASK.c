
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {struct bio* bi_next; } ;



__attribute__((used)) static inline struct bio *FUNC_0(struct bio **VAR_0, struct bio **VAR_1)
{
 struct bio *VAR_2;

 if (*VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_2 = *VAR_0;
 *VAR_0 = VAR_2->bi_next;
 if (*VAR_0 == ((void*)0))
  *VAR_1 = ((void*)0);

 VAR_2->bi_next = ((void*)0);
 return VAR_2;
}
