
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (unsigned long*,char const*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct request_queue *VAR_1, const char *VAR_2,
      size_t VAR_3)
{
 unsigned long VAR_4;
 ssize_t VAR_5 = FUNC_2(&VAR_4, VAR_2, VAR_3);

 FUNC_3(VAR_1->queue_lock);
 if (VAR_4)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
 FUNC_4(VAR_1->queue_lock);

 return VAR_5;
}
