
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ actual; scalar_t__ length; } ;
struct s3c_hsotg_req {TYPE_1__ req; } ;
struct s3c_hsotg_ep {int index; int dir_in; struct s3c_hsotg_req* req; } ;
struct s3c_hsotg {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct s3c_hsotg*,struct s3c_hsotg_ep*,struct s3c_hsotg_req*) ;

__attribute__((used)) static int FUNC_2(struct s3c_hsotg *VAR_0,
      struct s3c_hsotg_ep *VAR_1)
{
 struct s3c_hsotg_req *VAR_2 = VAR_1->req;

 if (!VAR_1->dir_in || !VAR_2)
  return 0;

 if (VAR_2->req.actual < VAR_2->req.length) {
  FUNC_0(VAR_0->dev, "trying to write more for ep%d\n",
   VAR_1->index);
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 }

 return 0;
}
