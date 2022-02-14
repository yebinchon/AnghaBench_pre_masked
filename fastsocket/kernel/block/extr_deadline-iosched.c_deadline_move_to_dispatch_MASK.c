
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {struct request_queue* q; } ;
struct deadline_data {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct request_queue*,struct request*) ;

__attribute__((used)) static inline void
FUNC_2(struct deadline_data *VAR_0, struct request *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->q;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_1);
}
