
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ssb_bus {int host_sdio; } ;


 int FUNC_0 (int ,char*,unsigned int,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int,int*) ;
 int FUNC_2 (struct ssb_bus*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ssb_bus *VAR_0, unsigned int VAR_1, u8 VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(VAR_0->host_sdio, VAR_2, VAR_1, &VAR_3);
 if (FUNC_3(VAR_3)) {
  FUNC_0(FUNC_2(VAR_0), "%08X <- %02x, error %d\n",
   VAR_1, VAR_2, VAR_3);
 }

 return VAR_3;
}
