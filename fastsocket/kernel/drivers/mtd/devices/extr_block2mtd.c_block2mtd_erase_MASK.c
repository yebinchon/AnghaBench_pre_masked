
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct block2mtd_dev* priv; } ;
struct erase_info {size_t addr; size_t len; void* state; } ;
struct block2mtd_dev {int write_mutex; } ;


 int FUNC_0 (char*,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct block2mtd_dev*,size_t,size_t) ;
 int FUNC_2 (struct erase_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_3, struct erase_info *VAR_4)
{
 struct block2mtd_dev *VAR_5 = VAR_3->priv;
 size_t VAR_6 = VAR_4->addr;
 size_t VAR_7 = VAR_4->len;
 int VAR_8;

 VAR_4->state = VAR_2;
 FUNC_3(&VAR_5->write_mutex);
 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
 FUNC_4(&VAR_5->write_mutex);
 if (VAR_8) {
  FUNC_0("erase failed err = %d", VAR_8);
  VAR_4->state = VAR_1;
 } else
  VAR_4->state = VAR_0;

 VAR_4->state = VAR_0;
 FUNC_2(VAR_4);
 return VAR_8;
}
