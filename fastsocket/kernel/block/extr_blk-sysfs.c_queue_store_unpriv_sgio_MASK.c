
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (int ,struct request_queue*) ;
 int FUNC_3 (unsigned long*,char const*,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ssize_t
FUNC_6(struct request_queue *VAR_3, const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 ssize_t VAR_7;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_7 = FUNC_3(&VAR_6, VAR_4, VAR_5);
 FUNC_4(VAR_3->queue_lock);
 if (VAR_6)
  FUNC_2(VAR_2, VAR_3);
 else
  FUNC_1(VAR_2, VAR_3);
 FUNC_5(VAR_3->queue_lock);
 return VAR_7;
}
