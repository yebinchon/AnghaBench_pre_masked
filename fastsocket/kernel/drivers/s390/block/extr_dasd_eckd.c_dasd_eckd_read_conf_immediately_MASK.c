
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int cdev; } ;
struct dasd_ccw_req {int retries; int callback; int flags; } ;
struct ciw {scalar_t__ cmd; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ciw* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dasd_device*,struct dasd_ccw_req*,int *,int ) ;
 int FUNC_3 (struct dasd_ccw_req*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_5,
        struct dasd_ccw_req *VAR_6,
        __u8 *VAR_7,
        __u8 VAR_8)
{
 struct ciw *VAR_9;
 int VAR_10;




 VAR_9 = FUNC_0(VAR_5->cdev, VAR_0);
 if (!VAR_9 || VAR_9->cmd != VAR_2)
  return -VAR_3;

 FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_1(VAR_1, &VAR_6->flags);
 VAR_6->retries = 5;
 VAR_6->callback = VAR_4;
 VAR_10 = FUNC_3(VAR_6);
 return VAR_10;
}
