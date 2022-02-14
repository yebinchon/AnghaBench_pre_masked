
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ssb_device {struct ssb_bus* bus; } ;
struct ssb_bus {int sdio_sbaddr; int host_sdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ssb_bus*) ;
 int FUNC_5 (struct ssb_bus*,struct ssb_device*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static u32 FUNC_7(struct ssb_device *VAR_2, u16 VAR_3)
{
 struct ssb_bus *VAR_4 = VAR_2->bus;
 u32 VAR_5 = 0xffffffff;
 int VAR_6 = 0;

 FUNC_1(VAR_4->host_sdio);
 if (FUNC_6(FUNC_5(VAR_4, VAR_2)))
  goto out;
 VAR_3 |= VAR_4->sdio_sbaddr & 0xffff;
 VAR_3 &= VAR_1;
 VAR_3 |= VAR_0;
 VAR_5 = FUNC_2(VAR_4->host_sdio, VAR_3, &VAR_6);
 if (VAR_6) {
  FUNC_0(FUNC_4(VAR_4), "%04X:%04X > %08x, error %d\n",
   VAR_4->sdio_sbaddr >> 16, VAR_3, VAR_5, VAR_6);
 }
out:
 FUNC_3(VAR_4->host_sdio);

 return VAR_5;
}
