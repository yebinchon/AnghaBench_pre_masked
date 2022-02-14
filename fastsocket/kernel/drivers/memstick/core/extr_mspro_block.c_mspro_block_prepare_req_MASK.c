
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {scalar_t__ cmd_type; int cmd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct request*,char*) ;

__attribute__((used)) static int FUNC_1(struct request_queue *VAR_5, struct request *VAR_6)
{
 if (VAR_6->cmd_type != VAR_4 &&
     VAR_6->cmd_type != VAR_3) {
  FUNC_0(VAR_6, "MSPro unsupported request");
  return VAR_0;
 }

 VAR_6->cmd_flags |= VAR_2;

 return VAR_1;
}
