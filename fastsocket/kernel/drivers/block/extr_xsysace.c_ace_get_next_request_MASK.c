
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {scalar_t__ cmd_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct request*,int ) ;
 struct request* FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request*) ;

struct request *FUNC_3(struct request_queue * VAR_2)
{
 struct request *VAR_3;

 while ((VAR_3 = FUNC_1(VAR_2)) != ((void*)0)) {
  if (VAR_3->cmd_type == VAR_1)
   break;
  FUNC_2(VAR_3);
  FUNC_0(VAR_3, -VAR_0);
 }
 return VAR_3;
}
