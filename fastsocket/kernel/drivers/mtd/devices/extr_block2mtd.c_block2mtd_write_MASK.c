
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {size_t size; struct block2mtd_dev* priv; } ;
struct block2mtd_dev {int write_mutex; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct block2mtd_dev*,int const*,size_t,size_t,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
  size_t *VAR_4, const u_char *VAR_5)
{
 struct block2mtd_dev *VAR_6 = VAR_1->priv;
 int VAR_7;

 if (!VAR_3)
  return 0;
 if (VAR_2 >= VAR_1->size)
  return -VAR_0;
 if (VAR_2 + VAR_3 > VAR_1->size)
  VAR_3 = VAR_1->size - VAR_2;

 FUNC_1(&VAR_6->write_mutex);
 VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_6->write_mutex);
 if (VAR_7 > 0)
  VAR_7 = 0;
 return VAR_7;
}
