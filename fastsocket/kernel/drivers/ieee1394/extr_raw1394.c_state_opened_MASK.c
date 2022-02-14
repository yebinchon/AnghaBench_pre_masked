
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int misc; scalar_t__ length; int error; int generation; } ;
struct pending_request {TYPE_1__ req; } ;
struct file_info {int protocol_version; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pending_request*) ;

__attribute__((used)) static int FUNC_2(struct file_info *VAR_6, struct pending_request *VAR_7)
{
 if (VAR_7->req.type == VAR_3) {
  switch (VAR_7->req.misc) {
  case 128:
  case 3:
   VAR_6->state = VAR_4;
   VAR_6->protocol_version = VAR_7->req.misc;
   VAR_7->req.error = VAR_1;
   VAR_7->req.generation = FUNC_0(&VAR_5);
   break;

  default:
   VAR_7->req.error = VAR_0;
   VAR_7->req.misc = 128;
  }
 } else {
  VAR_7->req.error = VAR_2;
 }

 VAR_7->req.length = 0;
 FUNC_1(VAR_7);
 return 0;
}
