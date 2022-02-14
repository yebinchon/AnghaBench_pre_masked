
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct uwb_rceb {int wEvent; void* bEventType; } ;
struct uwb_rccb {int wCommand; void* bCommandType; } ;
struct i1480 {int dev; scalar_t__ evt_buf; scalar_t__ cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct i1480*,char*,int,int) ;

__attribute__((used)) static
int FUNC_3(struct i1480 *VAR_5)
{
 int VAR_6;
 struct uwb_rccb *VAR_7 = (void *) VAR_5->cmd_buf;
 struct i1480_evt_reset {
  struct uwb_rceb rceb;
  u8 bResultCode;
 } __attribute__((packed)) *VAR_8 = (void *) VAR_5->evt_buf;

 VAR_6 = -VAR_1;
 VAR_7->bCommandType = VAR_2;
 VAR_7->wCommand = FUNC_0(VAR_3);
 VAR_8->rceb.bEventType = VAR_2;
 VAR_8->rceb.wEvent = VAR_3;
 VAR_6 = FUNC_2(VAR_5, "RESET", sizeof(*VAR_7), sizeof(*VAR_8));
 if (VAR_6 < 0)
  goto out;
 if (VAR_8->bResultCode != VAR_4) {
  FUNC_1(VAR_5->dev, "RESET: command execution failed: %u\n",
   VAR_8->bResultCode);
  VAR_6 = -VAR_0;
 }
out:
 return VAR_6;

}
