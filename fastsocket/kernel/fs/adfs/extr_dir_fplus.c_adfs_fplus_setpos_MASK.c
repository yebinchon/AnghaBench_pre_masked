
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adfs_dir {unsigned int pos; TYPE_1__** bh; } ;
struct adfs_bigdirheader {int bigdirentries; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct adfs_dir *VAR_1, unsigned int VAR_2)
{
 struct adfs_bigdirheader *VAR_3 = (struct adfs_bigdirheader *)VAR_1->bh[0]->b_data;
 int VAR_4 = -VAR_0;

 if (VAR_2 <= FUNC_0(VAR_3->bigdirentries)) {
  VAR_1->pos = VAR_2;
  VAR_4 = 0;
 }

 return VAR_4;
}
