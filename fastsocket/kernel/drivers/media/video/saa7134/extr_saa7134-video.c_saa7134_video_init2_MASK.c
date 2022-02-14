
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int ctl_volume; } ;


 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (struct saa7134_dev*,int ) ;
 int FUNC_2 (struct saa7134_dev*,int *) ;
 int * VAR_0 ;
 int FUNC_3 (struct saa7134_dev*,int ) ;

int FUNC_4(struct saa7134_dev *VAR_1)
{

 FUNC_2(VAR_1,&VAR_0[0]);
 FUNC_3(VAR_1,0);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1,VAR_1->ctl_volume);
 return 0;
}
