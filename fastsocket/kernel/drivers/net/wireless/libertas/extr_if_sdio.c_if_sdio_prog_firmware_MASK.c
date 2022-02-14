
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct if_sdio_card {int func; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct if_sdio_card*) ;
 int FUNC_1 (struct if_sdio_card*) ;
 scalar_t__ FUNC_2 (struct if_sdio_card*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct if_sdio_card *VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 FUNC_3(VAR_2);

 FUNC_6(VAR_3->func);
 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 FUNC_7(VAR_3->func);

 if (VAR_4)
  goto out;

 FUNC_5("firmware status = %#x\n", VAR_5);

 if (VAR_5 == VAR_1) {
  FUNC_5("firmware already loaded\n");
  goto success;
 }

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto out;

success:
 FUNC_6(VAR_3->func);
 FUNC_8(VAR_3->func, VAR_0);
 FUNC_7(VAR_3->func);
 VAR_4 = 0;

out:
 FUNC_4(VAR_2, "ret %d", VAR_4);

 return VAR_4;
}
