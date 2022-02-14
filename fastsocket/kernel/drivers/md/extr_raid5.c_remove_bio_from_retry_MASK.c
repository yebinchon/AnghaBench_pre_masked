
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {struct bio* retry_read_aligned_list; struct bio* retry_read_aligned; } ;
struct bio {struct bio* bi_next; } ;


 int FUNC_0 (struct bio*,int) ;

__attribute__((used)) static struct bio *FUNC_1(struct r5conf *VAR_0)
{
 struct bio *VAR_1;

 VAR_1 = VAR_0->retry_read_aligned;
 if (VAR_1) {
  VAR_0->retry_read_aligned = ((void*)0);
  return VAR_1;
 }
 VAR_1 = VAR_0->retry_read_aligned_list;
 if(VAR_1) {
  VAR_0->retry_read_aligned_list = VAR_1->bi_next;
  VAR_1->bi_next = ((void*)0);




  FUNC_0(VAR_1, 1);
 }

 return VAR_1;
}
