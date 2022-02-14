
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saa7146_dev {int dummy; } ;
struct budget {struct saa7146_dev* dev; } ;


 int FUNC_0 (struct budget*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,struct budget*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct saa7146_dev*,int,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6 (struct budget *VAR_2, int VAR_3, u8 *VAR_4, unsigned long VAR_5)
{
 struct saa7146_dev *VAR_6=VAR_2->dev;
 int VAR_7;

 FUNC_1(2, "budget: %p\n", VAR_2);

 FUNC_4(VAR_6, 3, VAR_1);
 FUNC_2(16);

 for (VAR_7=0; VAR_7<VAR_3; VAR_7++)
  FUNC_0(VAR_2, VAR_4[VAR_7]);

 FUNC_2(16);

 if (VAR_5!=-1) {
  if (VAR_5)
   FUNC_0(VAR_2, 0xff);
  else {
   FUNC_4(VAR_6, 3, VAR_0);
   FUNC_2(12);
   FUNC_5(500);
   FUNC_4(VAR_6, 3, VAR_1);
  }
  FUNC_3(20);
 }

 return 0;
}
