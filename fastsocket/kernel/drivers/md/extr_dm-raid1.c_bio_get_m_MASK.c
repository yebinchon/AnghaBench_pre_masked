
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror {int dummy; } ;
struct bio {scalar_t__ bi_next; } ;



__attribute__((used)) static struct mirror *FUNC_0(struct bio *VAR_0)
{
 return (struct mirror *) VAR_0->bi_next;
}
