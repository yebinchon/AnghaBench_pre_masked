
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct bitmap*,int,int*,int) ;

int FUNC_1(struct bitmap *VAR_1, sector_t VAR_2, sector_t *VAR_3,
        int VAR_4)
{







 int VAR_5 = 0;
 sector_t VAR_6;

 *VAR_3 = 0;
 while (*VAR_3 < (VAR_0>>9)) {
  VAR_5 |= FUNC_0(VAR_1, VAR_2,
       &VAR_6, VAR_4);
  VAR_2 += VAR_6;
  *VAR_3 += VAR_6;
 }
 return VAR_5;
}
