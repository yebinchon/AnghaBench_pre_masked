
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int dummy; } ;
struct cryptd_queue {int cpu_queue; } ;
struct cryptd_cpu_queue {int work; int queue; } ;


 int FUNC_0 (int *,struct crypto_async_request*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct cryptd_cpu_queue* FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct cryptd_queue *VAR_1,
      struct crypto_async_request *VAR_2)
{
 int VAR_3, VAR_4;
 struct cryptd_cpu_queue *VAR_5;

 VAR_3 = FUNC_1();
 VAR_5 = FUNC_2(VAR_1->cpu_queue, VAR_3);
 VAR_4 = FUNC_0(&VAR_5->queue, VAR_2);
 FUNC_4(VAR_3, VAR_0, &VAR_5->work);
 FUNC_3();

 return VAR_4;
}
