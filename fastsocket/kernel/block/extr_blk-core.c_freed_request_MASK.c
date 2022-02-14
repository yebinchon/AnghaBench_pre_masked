
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_list {int * starved; int elvpriv; int * count; } ;
struct request_queue {struct request_list rq; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct request_queue *VAR_1, unsigned int VAR_2)
{
 struct request_list *VAR_3 = &VAR_1->rq;
 int VAR_4 = FUNC_1(VAR_2);

 VAR_3->count[VAR_4]--;
 if (VAR_2 & VAR_0)
  VAR_3->elvpriv--;

 FUNC_0(VAR_1, VAR_4);

 if (FUNC_2(VAR_3->starved[VAR_4 ^ 1]))
  FUNC_0(VAR_1, VAR_4 ^ 1);
}
