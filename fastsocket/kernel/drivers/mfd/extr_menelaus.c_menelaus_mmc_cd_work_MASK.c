
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menelaus_chip {int mmc_callback_data; int (* mmc_callback ) (int ,unsigned char) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct menelaus_chip *VAR_1)
{
 int VAR_2;
 unsigned char VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return;

 if (!(VAR_2 & 0x1))
  VAR_3 |= (1 << 0);

 if (!(VAR_2 & 0x2))
  VAR_3 |= (1 << 1);

 if (VAR_1->mmc_callback)
  VAR_1->mmc_callback(VAR_1->mmc_callback_data,
       VAR_3);
}
