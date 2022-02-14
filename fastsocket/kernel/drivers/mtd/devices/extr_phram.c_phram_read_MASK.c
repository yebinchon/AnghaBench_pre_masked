
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {scalar_t__ size; int * priv; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
  size_t *VAR_4, u_char *VAR_5)
{
 u_char *VAR_6 = VAR_1->priv;

 if (VAR_2 >= VAR_1->size)
  return -VAR_0;

 if (VAR_3 > VAR_1->size - VAR_2)
  VAR_3 = VAR_1->size - VAR_2;

 FUNC_0(VAR_5, VAR_6 + VAR_2, VAR_3);

 *VAR_4 = VAR_3;
 return 0;
}
