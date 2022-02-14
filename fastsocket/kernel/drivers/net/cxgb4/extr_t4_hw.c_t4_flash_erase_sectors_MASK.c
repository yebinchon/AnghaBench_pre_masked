
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int pdev_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct adapter*,int,int) ;
 int FUNC_2 (struct adapter*,int,int ,int,int) ;
 int FUNC_3 (struct adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 while (VAR_4 <= VAR_5) {
  if ((VAR_6 = FUNC_2(VAR_3, 1, 0, 1, VAR_2)) != 0 ||
      (VAR_6 = FUNC_2(VAR_3, 4, 0, 1,
         VAR_0 | (VAR_4 << 8))) != 0 ||
      (VAR_6 = FUNC_1(VAR_3, 14, 500)) != 0) {
   FUNC_0(VAR_3->pdev_dev,
    "erase of flash sector %d failed, error %d\n",
    VAR_4, VAR_6);
   break;
  }
  VAR_4++;
 }
 FUNC_3(VAR_3, VAR_1, 0);
 return VAR_6;
}
