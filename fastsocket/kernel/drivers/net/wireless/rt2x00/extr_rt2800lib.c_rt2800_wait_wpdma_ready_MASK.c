
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (struct rt2x00_dev*,char*,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct rt2x00_dev *VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7;





 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_1(VAR_5, VAR_2, &VAR_7);
  if (!FUNC_3(VAR_7, VAR_4) &&
      !FUNC_3(VAR_7, VAR_3))
   return 0;

  FUNC_0(10);
 }

 FUNC_2(VAR_5, "WPDMA TX/RX busy [0x%08x]\n", VAR_7);
 return -VAR_0;
}
