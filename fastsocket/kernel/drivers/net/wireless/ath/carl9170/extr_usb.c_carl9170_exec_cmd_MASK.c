
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void u8 ;
struct TYPE_5__ {unsigned int len; int cmd; } ;
struct TYPE_7__ {scalar_t__ data; TYPE_1__ hdr; } ;
struct ar9170 {unsigned int readlen; int cmd_lock; int * readbuf; TYPE_3__ cmd; TYPE_2__* udev; int cmd_wait; } ;
typedef enum carl9170_cmd_oids { ____Placeholder_carl9170_cmd_oids } carl9170_cmd_oids ;
struct TYPE_6__ {int dev; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ar9170*) ;
 scalar_t__ FUNC_1 (struct ar9170*) ;
 int FUNC_2 (struct ar9170*,TYPE_3__*,int) ;
 int FUNC_3 (struct ar9170*,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (scalar_t__,void*,unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ,TYPE_3__*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

int FUNC_11(struct ar9170 *VAR_8, const enum carl9170_cmd_oids VAR_9,
 unsigned int VAR_10, void *VAR_11, unsigned int VAR_12, void *VAR_13)
{
 int VAR_14 = -VAR_5;

 if (!FUNC_0(VAR_8))
  return -VAR_3;

 if (!(VAR_9 & VAR_0))
  FUNC_6();

 VAR_8->cmd.hdr.len = VAR_10;
 VAR_8->cmd.hdr.cmd = VAR_9;

 if (VAR_10 && VAR_11 != (u8 *)(VAR_8->cmd.data))
  FUNC_5(VAR_8->cmd.data, VAR_11, VAR_10);

 FUNC_8(&VAR_8->cmd_lock);
 VAR_8->readbuf = (u8 *)VAR_13;
 VAR_8->readlen = VAR_12;
 FUNC_9(&VAR_8->cmd_lock);

 VAR_14 = FUNC_2(VAR_8, &VAR_8->cmd, 0);

 if (!(VAR_9 & VAR_0)) {
  VAR_14 = FUNC_10(&VAR_8->cmd_wait, VAR_7);
  if (VAR_14 == 0) {
   VAR_14 = -VAR_6;
   goto err_unbuf;
  }

  if (VAR_8->readlen != VAR_12) {
   VAR_14 = -VAR_4;
   goto err_unbuf;
  }
 }

 return 0;

err_unbuf:

 if (FUNC_1(VAR_8)) {
  FUNC_4(&VAR_8->udev->dev, "no command feedback "
   "received (%d).\n", VAR_14);


  FUNC_7("carl9170 cmd: ", VAR_2,
         &VAR_8->cmd, VAR_10 + 4);

  FUNC_3(VAR_8, VAR_1);
 }


 FUNC_8(&VAR_8->cmd_lock);
 VAR_8->readbuf = ((void*)0);
 VAR_8->readlen = 0;
 FUNC_9(&VAR_8->cmd_lock);

 return VAR_14;
}
