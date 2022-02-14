
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror {int dummy; } ;
struct bio {struct bio* bi_next; } ;



__attribute__((used)) static void FUNC_0(struct bio *VAR_0, struct mirror *VAR_1)
{
 VAR_0->bi_next = (struct bio *) VAR_1;
}
