
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whcrc {struct uwb_rc* uwb_rc; struct umc_dev* umc_dev; } ;
struct uwb_rc {int stop; int start; int reset; int cmd; int owner; } ;
struct device {int dummy; } ;
struct umc_dev {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct whcrc*) ;
 struct whcrc* FUNC_2 (int,int ) ;
 int FUNC_3 (struct umc_dev*,struct whcrc*) ;
 int FUNC_4 (struct uwb_rc*,struct device*,struct whcrc*) ;
 struct uwb_rc* FUNC_5 () ;
 int FUNC_6 (struct uwb_rc*) ;
 int VAR_3 ;
 int FUNC_7 (struct whcrc*) ;
 int FUNC_8 (struct whcrc*) ;
 int VAR_4 ;
 int FUNC_9 (struct whcrc*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static
int FUNC_10(struct umc_dev *VAR_7)
{
 int VAR_8;
 struct uwb_rc *VAR_9;
 struct whcrc *VAR_10;
 struct device *VAR_11 = &VAR_7->dev;

 VAR_8 = -VAR_0;
 VAR_9 = FUNC_5();
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_11, "unable to allocate RC instance\n");
  goto error_rc_alloc;
 }
 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_11, "unable to allocate WHC-RC instance\n");
  goto error_alloc;
 }
 FUNC_7(VAR_10);
 VAR_10->umc_dev = VAR_7;

 VAR_8 = FUNC_9(VAR_10);
 if (VAR_8 < 0) {
  FUNC_0(VAR_11, "Can't setup RC UMC interface: %d\n", VAR_8);
  goto error_setup_rc_umc;
 }
 VAR_10->uwb_rc = VAR_9;

 VAR_9->owner = VAR_2;
 VAR_9->cmd = VAR_3;
 VAR_9->reset = VAR_4;
 VAR_9->start = VAR_5;
 VAR_9->stop = VAR_6;

 VAR_8 = FUNC_4(VAR_9, VAR_11, VAR_10);
 if (VAR_8 < 0)
  goto error_rc_add;
 FUNC_3(VAR_7, VAR_10);
 return 0;

error_rc_add:
 FUNC_8(VAR_10);
error_setup_rc_umc:
 FUNC_1(VAR_10);
error_alloc:
 FUNC_6(VAR_9);
error_rc_alloc:
 return VAR_8;
}
