
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct request_queue *VAR_2, char *VAR_3)
{
 bool VAR_4 = FUNC_1(VAR_0, &VAR_2->queue_flags);
 bool VAR_5 = FUNC_1(VAR_1, &VAR_2->queue_flags);

 return FUNC_0(VAR_4 << VAR_5, VAR_3);
}
