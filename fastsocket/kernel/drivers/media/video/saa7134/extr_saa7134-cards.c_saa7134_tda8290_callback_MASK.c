
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int board; } ;






 int FUNC_0 (struct saa7134_dev*,int,int) ;
 int FUNC_1 (struct saa7134_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct saa7134_dev *VAR_0,
        int VAR_1, int VAR_2)
{
 int VAR_3;

 switch (VAR_0->board) {
 case 129:
 case 130:
 case 131:
 case 128:

  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 default:

  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 }
 return VAR_3;
}
