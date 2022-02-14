
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_slot {int dummy; } ;
struct input_dev {unsigned int mtsize; int * mt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int ,unsigned int,int ,int ) ;
 int FUNC_2 (struct input_dev*,int) ;
 int * FUNC_3 (unsigned int,int,int ) ;

int FUNC_4(struct input_dev *VAR_6, unsigned int VAR_7)
{
 int VAR_8;

 if (!VAR_7)
  return 0;
 if (VAR_6->mt)
  return VAR_6->mtsize != VAR_7 ? -VAR_2 : 0;

 VAR_6->mt = FUNC_3(VAR_7, sizeof(struct input_mt_slot), VAR_4);
 if (!VAR_6->mt)
  return -VAR_3;

 VAR_6->mtsize = VAR_7;
 FUNC_1(VAR_6, VAR_0, 0, VAR_7 - 1, 0, 0);
 FUNC_1(VAR_6, VAR_1, 0, VAR_5, 0, 0);






 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_0(&VAR_6->mt[VAR_8], VAR_1, -1);

 return 0;
}
