
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i1480 {int (* read ) (struct i1480*,int,int) ;int dev; scalar_t__ cmd_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i1480*,int,int) ;

__attribute__((used)) static
int FUNC_3(struct i1480 *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 u32 *VAR_4 = (u32 *) VAR_1->cmd_buf;

 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  FUNC_1(100);
  VAR_3 = VAR_1->read(VAR_1, 0x80080000, 4);
  if (VAR_3 < 0) {
   FUNC_0(VAR_1->dev, "Can't read 0x8008000: %d\n", VAR_3);
   goto out;
  }
  if (*VAR_4 == 0x55555555UL)
   goto out;
 }
 FUNC_0(VAR_1->dev, "Timed out waiting for fw to start\n");
 VAR_3 = -VAR_0;
out:
 return VAR_3;

}
