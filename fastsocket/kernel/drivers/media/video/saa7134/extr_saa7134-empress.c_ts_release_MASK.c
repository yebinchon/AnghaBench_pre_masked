
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int empress_users; int empress_tsq; } ;
struct file {struct saa7134_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct saa7134_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1)
{
 struct saa7134_dev *VAR_2 = VAR_1->private_data;

 FUNC_5(&VAR_2->empress_tsq);
 FUNC_4(&VAR_2->empress_tsq);


 FUNC_3(VAR_2);


 FUNC_2(VAR_0,
  FUNC_1(VAR_0) | (1 << 6));

 FUNC_0(&VAR_2->empress_users);

 return 0;
}
