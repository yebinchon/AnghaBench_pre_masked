
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {struct bio* bi_next; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0, struct bio **VAR_1, struct bio **VAR_2)
{
 VAR_0->bi_next = ((void*)0);
 if (*VAR_2) {
  FUNC_0((*VAR_1) == ((void*)0));
  (*VAR_2)->bi_next = VAR_0;
  (*VAR_2) = VAR_0;
 } else {
  FUNC_0((*VAR_1) != ((void*)0));
  (*VAR_1) = VAR_0;
  (*VAR_2) = VAR_0;
 }
}
