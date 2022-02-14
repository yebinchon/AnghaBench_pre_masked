
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_bus {int sdio_sbaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct ssb_bus*) ;
 int FUNC_2 (struct ssb_bus*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ssb_bus *VAR_6, u32 VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_1,
    (VAR_7 >> 8) & VAR_4);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_2(VAR_6, VAR_2,
    (VAR_7 >> 16) & VAR_5);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_2(VAR_6, VAR_0,
    (VAR_7 >> 24) & VAR_3);
 if (VAR_8)
  goto out;
 VAR_6->sdio_sbaddr = VAR_7;
out:
 if (VAR_8) {
  FUNC_0(FUNC_1(VAR_6), "failed to set address window"
   " to 0x%08x, error %d\n", VAR_7, VAR_8);
 }

 return VAR_8;
}
