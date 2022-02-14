
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdio_func {int dummy; } ;
struct if_sdio_card {int priv; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct if_sdio_card*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (int ) ;
 struct if_sdio_card* FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int,int ,int*) ;

__attribute__((used)) static void FUNC_8(struct sdio_func *VAR_4)
{
 int VAR_5;
 struct if_sdio_card *VAR_6;
 u8 VAR_7;

 FUNC_1(VAR_3);

 VAR_6 = FUNC_5(VAR_4);

 VAR_7 = FUNC_6(VAR_6->func, VAR_1, &VAR_5);
 if (VAR_5)
  goto out;

 FUNC_3("interrupt: 0x%X\n", (unsigned)VAR_7);

 FUNC_7(VAR_6->func, ~VAR_7, VAR_1, &VAR_5);
 if (VAR_5)
  goto out;





 if (VAR_7 & VAR_0)
  FUNC_4(VAR_6->priv);


 if (VAR_7 & VAR_2) {
  VAR_5 = FUNC_0(VAR_6);
  if (VAR_5)
   goto out;
 }

 VAR_5 = 0;

out:
 FUNC_2(VAR_3, "ret %d", VAR_5);
}
