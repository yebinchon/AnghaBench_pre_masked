
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fat_entry {int nr_bhs; struct buffer_head** bhs; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_1(struct buffer_head **VAR_0, int *VAR_1,
       struct fat_entry *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_bhs; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < *VAR_1; VAR_4++) {
   if (VAR_2->bhs[VAR_3] == VAR_0[VAR_4])
    break;
  }
  if (VAR_4 == *VAR_1) {
   FUNC_0(VAR_2->bhs[VAR_3]);
   VAR_0[VAR_4] = VAR_2->bhs[VAR_3];
   (*VAR_1)++;
  }
 }
}
