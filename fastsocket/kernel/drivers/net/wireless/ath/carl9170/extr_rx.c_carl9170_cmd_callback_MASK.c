
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int len; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
struct ar9170 {int readlen; void* cmd_buf; int cmd_lock; int cmd_wait; int * readbuf; TYPE_3__ cmd; TYPE_1__* udev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar9170*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (char*,int ,void*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ar9170 *VAR_2, u32 VAR_3, void *VAR_4)
{





 if (FUNC_7(VAR_2->readlen != (VAR_3 - 4))) {
  FUNC_2(&VAR_2->udev->dev, "received invalid command response:"
    "got %d, instead of %d\n", VAR_3 - 4, VAR_2->readlen);
  FUNC_4("carl9170 cmd:", VAR_1,
   VAR_2->cmd_buf, (VAR_2->cmd.hdr.len + 4) & 0x3f);
  FUNC_4("carl9170 rsp:", VAR_1,
   VAR_4, VAR_3);




  FUNC_0(VAR_2, VAR_0);
 }

 FUNC_5(&VAR_2->cmd_lock);
 if (VAR_2->readbuf) {
  if (VAR_3 >= 4)
   FUNC_3(VAR_2->readbuf, VAR_4 + 4, VAR_3 - 4);

  VAR_2->readbuf = ((void*)0);
 }
 FUNC_1(&VAR_2->cmd_wait);
 FUNC_6(&VAR_2->cmd_lock);
}
