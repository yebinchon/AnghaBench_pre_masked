
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct btmrvl_sdio_card {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct btmrvl_sdio_card*,scalar_t__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct btmrvl_sdio_card *VAR_2,
        int VAR_3)
{
 int VAR_4 = -VAR_0;
 u16 VAR_5;
 unsigned int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (FUNC_0(VAR_2, &VAR_5) < 0)
   continue;

  if (VAR_5 == VAR_1) {
   VAR_4 = 0;
   break;
  } else {
   FUNC_1(10);
  }
 }

 return VAR_4;
}
