
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct dst_node* queuedata; } ;
struct dst_node {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct dst_node*,struct bio*) ;

__attribute__((used)) static int FUNC_5(struct request_queue *VAR_1, struct bio *VAR_2)
{
 struct dst_node *VAR_3 = VAR_1->queuedata;
 int VAR_4 = -VAR_0;

 if (FUNC_0(VAR_2) && !FUNC_3(VAR_1)) {
  VAR_4 = 0;
  goto end_io;
 }

 FUNC_2(VAR_2);

 return FUNC_4(VAR_3, VAR_2);

end_io:
 FUNC_1(VAR_2, VAR_4);
 return VAR_4;
}
