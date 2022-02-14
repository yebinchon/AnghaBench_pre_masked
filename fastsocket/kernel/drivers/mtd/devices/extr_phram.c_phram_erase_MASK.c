
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {scalar_t__ size; int * priv; } ;
struct erase_info {scalar_t__ addr; scalar_t__ len; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,scalar_t__) ;
 int FUNC_1 (struct erase_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, struct erase_info *VAR_3)
{
 u_char *VAR_4 = VAR_2->priv;

 if (VAR_3->addr + VAR_3->len > VAR_2->size)
  return -VAR_0;

 FUNC_0(VAR_4 + VAR_3->addr, 0xff, VAR_3->len);






 VAR_3->state = VAR_1;

 FUNC_1(VAR_3);

 return 0;
}
