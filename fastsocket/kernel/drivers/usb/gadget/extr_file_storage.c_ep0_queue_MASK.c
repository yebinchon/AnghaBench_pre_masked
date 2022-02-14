
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsg_dev {TYPE_1__* ep0; int ep0req; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsg_dev*,char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct fsg_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->ep0, VAR_2->ep0req, VAR_1);
 if (VAR_3 != 0 && VAR_3 != -VAR_0) {


  FUNC_0(VAR_2, "error in submission: %s --> %d\n",
    VAR_2->ep0->name, VAR_3);
 }
 return VAR_3;
}
