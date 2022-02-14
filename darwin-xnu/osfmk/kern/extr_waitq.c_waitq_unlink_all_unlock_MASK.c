
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct waitq {scalar_t__ waitq_set_id; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct waitq*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq*) ;
 int VAR_3 ;
 int FUNC_4 (struct waitq*) ;
 int FUNC_5 (int ,struct waitq*,scalar_t__,int ,int *,int ) ;
 int FUNC_6 (char*,void*) ;

kern_return_t FUNC_7(struct waitq *VAR_4)
{
 uint64_t VAR_5 = 0;
 FUNC_6("unlink waitq %p from all sets",
  (void *)FUNC_0(VAR_4));
 FUNC_1(!FUNC_3(VAR_4));


 if (VAR_4->waitq_set_id == 0) {
  FUNC_4(VAR_4);
  return VAR_0;
 }

 VAR_5 = VAR_4->waitq_set_id;
 VAR_4->waitq_set_id = 0;







 (void)FUNC_2(VAR_4);

 FUNC_4(VAR_4);

 if (VAR_5) {





  (void)FUNC_5(VAR_1, VAR_4, VAR_5,
           VAR_2, ((void*)0), VAR_3);
 }

 return VAR_0;
}
