
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ misc; } ;
struct pending_request {TYPE_1__ req; } ;
struct file_info {scalar_t__ notification; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pending_request*) ;

__attribute__((used)) static int FUNC_2(struct file_info *VAR_3, struct pending_request *VAR_4)
{
 FUNC_0("reset_notification called - switch %s ",
        (VAR_4->req.misc == VAR_1) ? "OFF" : "ON");
 if ((VAR_4->req.misc == VAR_1) ||
     (VAR_4->req.misc == VAR_2)) {
  VAR_3->notification = (u8) VAR_4->req.misc;
  FUNC_1(VAR_4);
  return 0;
 }

 return (-VAR_0);
}
