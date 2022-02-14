
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ene_device {int rx_enabled; int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ene_device*,int ,int) ;
 int FUNC_1 (struct ene_device*,int) ;
 int FUNC_2 (struct ene_device*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct ene_device *VAR_3)
{

 FUNC_1(VAR_3, 0);
 FUNC_2(VAR_3, 0);


 FUNC_0(VAR_3, VAR_0, VAR_1 | VAR_2);

 FUNC_3(VAR_3->rdev, 1);
 VAR_3->rx_enabled = 0;
}
