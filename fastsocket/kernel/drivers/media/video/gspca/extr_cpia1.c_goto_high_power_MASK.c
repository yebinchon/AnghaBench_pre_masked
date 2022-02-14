
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ systemState; } ;
struct TYPE_4__ {TYPE_1__ status; } ;
struct sd {TYPE_2__ params; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_7 ;
 int FUNC_1 (struct gspca_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_8;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_1, 0, 0, 0, 0);
 if (VAR_10)
  return VAR_10;

 FUNC_2(40);

 if (FUNC_4(VAR_7))
  return -VAR_4;

 FUNC_1(VAR_8, VAR_0, 0, 0, 0, 0);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->params.status.systemState != VAR_6) {
  FUNC_0(VAR_3, "unexpected state after hi power cmd: %02x",
          VAR_9->params.status.systemState);
  FUNC_3(&VAR_9->params);
  return -VAR_5;
 }

 FUNC_0(VAR_2, "camera now in HIGH power state");
 return 0;
}
