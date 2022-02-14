
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {scalar_t__ waitq_set_id; scalar_t__ waitq_prepost_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct waitq*,scalar_t__,int ,void*,int ) ;

__attribute__((used)) static int FUNC_1(struct waitq *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;







 if (VAR_3->waitq_set_id == 0) {
  VAR_6 = 3;
 } else {

  if (VAR_3->waitq_prepost_id == 0)
   VAR_6 = 3;
  (void)FUNC_0(VAR_0,
           VAR_3, VAR_3->waitq_set_id,
           VAR_1, (void *)&VAR_6,
           VAR_2);
 }

 if (VAR_4 > 0)
  VAR_6 += VAR_4;

 if (VAR_6 == 0 && !VAR_5) {
  VAR_6 = 3;
 }

 return VAR_6;
}
