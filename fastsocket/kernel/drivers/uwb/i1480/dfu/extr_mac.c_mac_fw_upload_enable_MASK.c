
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i1480 {int hw_rev; int (* read ) (struct i1480*,int,int) ;int (* write ) (struct i1480*,int,int*,int) ;int dev; scalar_t__ cmd_buf; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct i1480*,int,int) ;
 int FUNC_2 (struct i1480*,int,int*,int) ;

__attribute__((used)) static
int FUNC_3(struct i1480 *VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0x800000c0;
 u32 *VAR_4 = (u32 *)VAR_1->cmd_buf;

 if (VAR_1->hw_rev > 1)
  VAR_3 = 0x8000d0d4;
 VAR_2 = VAR_1->read(VAR_1, VAR_3, sizeof(u32));
 if (VAR_2 < 0)
  goto error_cmd;
 *VAR_4 &= ~VAR_0;
 VAR_2 = VAR_1->write(VAR_1, VAR_3, VAR_4, sizeof(u32));
 if (VAR_2 < 0)
  goto error_cmd;
 return 0;
error_cmd:
 FUNC_0(VAR_1->dev, "can't enable fw upload mode: %d\n", VAR_2);
 return VAR_2;
}
