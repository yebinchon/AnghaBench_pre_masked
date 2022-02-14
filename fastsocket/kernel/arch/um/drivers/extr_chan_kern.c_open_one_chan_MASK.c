
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chan {int opened; int fd; int data; TYPE_1__* ops; int dev; int primary; int output; int input; } ;
struct TYPE_2__ {int (* open ) (int ,int ,int ,int ,int *) ;int (* close ) (int,int ) ;} ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct chan *VAR_0)
{
 int VAR_1, VAR_2;

 if (VAR_0->opened)
  return 0;

 if (VAR_0->ops->open == ((void*)0))
  VAR_1 = 0;
 else VAR_1 = (*VAR_0->ops->open)(VAR_0->input, VAR_0->output, VAR_0->primary,
         VAR_0->data, &VAR_0->dev);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_2 = FUNC_0(VAR_1, 0);
 if (VAR_2) {
  (*VAR_0->ops->close)(VAR_1, VAR_0->data);
  return VAR_2;
 }

 VAR_0->fd = VAR_1;

 VAR_0->opened = 1;
 return 0;
}
