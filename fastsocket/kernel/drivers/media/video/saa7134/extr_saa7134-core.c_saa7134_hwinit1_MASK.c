
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int slock; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct saa7134_dev*) ;
 int FUNC_4 (struct saa7134_dev*) ;
 int FUNC_5 (struct saa7134_dev*,char*) ;
 int FUNC_6 (struct saa7134_dev*) ;
 int FUNC_7 (struct saa7134_dev*) ;
 int FUNC_8 (struct saa7134_dev*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct saa7134_dev *VAR_3)
{
 FUNC_1("hwinit1\n");

 FUNC_10(VAR_0, 0);
 FUNC_10(VAR_1, 0);


 FUNC_10(VAR_2, FUNC_9(VAR_2));

 FUNC_2(&VAR_3->lock);
 FUNC_11(&VAR_3->slock);

 FUNC_5(VAR_3,"pre-init");
 FUNC_8(VAR_3);
 FUNC_7(VAR_3);
 if (FUNC_0(VAR_3))
  FUNC_6(VAR_3);
 FUNC_4(VAR_3);

 FUNC_3(VAR_3);

 return 0;
}
