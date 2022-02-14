
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct if_sdio_card {scalar_t__ model; int priv; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct if_sdio_card *VAR_4,
  u8 *VAR_5, unsigned VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 FUNC_0(VAR_3);

 if (VAR_4->model == VAR_2) {
  VAR_8 = FUNC_4(VAR_4->func, VAR_1, &VAR_7);
  if (VAR_7)
   goto out;


  VAR_8 >>= 3;
 } else {
  if (VAR_6 < 4) {
   FUNC_2("event packet too small (%d bytes)\n",
    (int)VAR_6);
   VAR_7 = -VAR_0;
   goto out;
  }
  VAR_8 = VAR_5[3] << 24;
  VAR_8 |= VAR_5[2] << 16;
  VAR_8 |= VAR_5[1] << 8;
  VAR_8 |= VAR_5[0] << 0;
 }

 FUNC_3(VAR_4->priv, VAR_8 & 0xFF);
 VAR_7 = 0;

out:
 FUNC_1(VAR_3, "ret %d", VAR_7);

 return VAR_7;
}
