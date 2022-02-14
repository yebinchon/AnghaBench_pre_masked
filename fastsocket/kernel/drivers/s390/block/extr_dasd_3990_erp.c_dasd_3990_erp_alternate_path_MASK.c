
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int opm; } ;
struct dasd_device {TYPE_6__* cdev; TYPE_1__ path_data; } ;
struct TYPE_9__ {int lpum; } ;
struct TYPE_10__ {TYPE_2__ sublog; } ;
struct TYPE_11__ {TYPE_3__ esw0; } ;
struct TYPE_12__ {TYPE_4__ esw; } ;
struct dasd_ccw_req {int lpm; int retries; int status; TYPE_5__ irb; struct dasd_device* startdev; } ;
typedef int __u8 ;
struct TYPE_13__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int,int,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct dasd_ccw_req * VAR_3)
{
 struct dasd_device *VAR_4 = VAR_3->startdev;
 __u8 VAR_5;
 unsigned long VAR_6;


 FUNC_4(FUNC_3(VAR_4->cdev), VAR_6);
 VAR_5 = FUNC_1(VAR_4->cdev);
 FUNC_5(FUNC_3(VAR_4->cdev), VAR_6);
 if (VAR_3->lpm == 0)
  VAR_3->lpm = VAR_4->path_data.opm &
   ~(VAR_3->irb.esw.esw0.sublog.lpum);
 else
  VAR_3->lpm &= ~(VAR_3->irb.esw.esw0.sublog.lpum);

 if ((VAR_3->lpm & VAR_5) != 0x00) {

  FUNC_0(VAR_2, VAR_4,
       "try alternate lpm=%x (lpum=%x / opm=%x)",
       VAR_3->lpm, VAR_3->irb.esw.esw0.sublog.lpum, VAR_5);


  VAR_3->status = VAR_1;
  VAR_3->retries = 10;
 } else {
  FUNC_2(&VAR_4->cdev->dev,
   "The DASD cannot be reached on any path (lpum=%x"
   "/opm=%x)\n", VAR_3->irb.esw.esw0.sublog.lpum, VAR_5);


  VAR_3->status = VAR_0;
 }
}
