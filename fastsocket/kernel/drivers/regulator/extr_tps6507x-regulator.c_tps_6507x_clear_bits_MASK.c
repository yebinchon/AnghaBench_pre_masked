
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tps_pmic {int io_lock; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tps_pmic*,int) ;
 int FUNC_4 (struct tps_pmic*,int,int) ;

__attribute__((used)) static int FUNC_5(struct tps_pmic *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1(&VAR_0->io_lock);

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_0->client->dev, "Read from reg 0x%x failed\n", VAR_1);
  VAR_3 = VAR_4;
  goto out;
 }

 VAR_4 &= ~VAR_2;
 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_4);
 if (VAR_3)
  FUNC_0(&VAR_0->client->dev, "Write for reg 0x%x failed\n", VAR_1);

out:
 FUNC_2(&VAR_0->io_lock);
 return VAR_3;
}
