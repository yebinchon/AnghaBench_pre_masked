
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7134_dev {int board; int empress_started; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct saa7134_dev*,int ,int ,int) ;
 int FUNC_1 (struct saa7134_dev*) ;

__attribute__((used)) static int FUNC_2(struct saa7134_dev* VAR_2)
{
 u32 VAR_3 = 0;



 switch (VAR_2->board) {
 case 130:
 case 129:
 case 128:
  VAR_3 = 1;
  break;
 }
 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_0, VAR_1, VAR_3);
 VAR_2->empress_started = 1;
 return 0;
}
