
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct request {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct request* FUNC_1 (struct request_queue*,int,int *,int) ;
 struct request* FUNC_2 (struct request_queue*,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

struct request *FUNC_5(struct request_queue *VAR_3, int VAR_4, gfp_t VAR_5)
{
 struct request *VAR_6;

 FUNC_0(VAR_4 != VAR_0 && VAR_4 != VAR_1);

 FUNC_3(VAR_3->queue_lock);
 if (VAR_5 & VAR_2)
  VAR_6 = FUNC_2(VAR_3, VAR_4, ((void*)0));
 else
  VAR_6 = FUNC_1(VAR_3, VAR_4, ((void*)0), VAR_5);
 if (!VAR_6)
  FUNC_4(VAR_3->queue_lock);


 return VAR_6;
}
