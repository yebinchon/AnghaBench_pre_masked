
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av7110 {int feeding1; int dev; scalar_t__ ttbp; int grabbing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int,char*,struct av7110*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct av7110 *VAR_5)
{
 FUNC_2(2, "budget: %p\n", VAR_5);

 if (VAR_5->feeding1)
  return ++VAR_5->feeding1;
 FUNC_3(VAR_5->grabbing, 0x00, VAR_4);
 VAR_5->ttbp = 0;
 FUNC_1(VAR_5->dev, VAR_1);
 FUNC_0(VAR_5->dev, VAR_1);
 FUNC_4(VAR_5->dev, VAR_3, (VAR_0 | VAR_2));
 return ++VAR_5->feeding1;
}
