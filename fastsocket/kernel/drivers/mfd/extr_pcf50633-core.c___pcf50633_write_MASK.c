
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633 {int dev; int i2c_client; } ;


 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_2(struct pcf50633 *VAR_0, u8 VAR_1, int VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->i2c_client, VAR_1,
    VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_0(VAR_0->dev, "Error writing %d regs at %d\n", VAR_2, VAR_1);

 return VAR_4;

}
