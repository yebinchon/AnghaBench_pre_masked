
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ streamState; } ;
struct TYPE_6__ {TYPE_2__ status; } ;
struct cam_data {TYPE_3__ params; int raw_image; int lowlevel_data; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* streamRead ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct cam_data*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cam_data *VAR_2)
{

 FUNC_0("Clearing stall\n");

 VAR_2->ops->streamRead(VAR_2->lowlevel_data, VAR_2->raw_image, 0);
 FUNC_1(VAR_2, VAR_0,0,0,0,0);
 return VAR_2->params.status.streamState != VAR_1;
}
