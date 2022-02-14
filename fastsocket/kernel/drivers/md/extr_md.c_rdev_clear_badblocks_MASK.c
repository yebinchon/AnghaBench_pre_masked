
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int badblocks; scalar_t__ data_offset; scalar_t__ new_data_offset; } ;
typedef int sector_t ;


 int FUNC_0 (int *,int ,int) ;

int FUNC_1(struct md_rdev *VAR_0, sector_t VAR_1, int VAR_2,
    int VAR_3)
{
 if (VAR_3)
  VAR_1 += VAR_0->new_data_offset;
 else
  VAR_1 += VAR_0->data_offset;
 return FUNC_0(&VAR_0->badblocks,
      VAR_1, VAR_2);
}
