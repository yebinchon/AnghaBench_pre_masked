
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct md_rdev {scalar_t__ data_offset; TYPE_1__ badblocks; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int,scalar_t__*,int*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct md_rdev *VAR_0, sector_t VAR_1, int VAR_2,
         sector_t *VAR_3, int *VAR_4)
{
 if (FUNC_1(VAR_0->badblocks.count)) {
  int VAR_5 = FUNC_0(&VAR_0->badblocks, VAR_0->data_offset + VAR_1,
     VAR_2,
     VAR_3, VAR_4);
  if (VAR_5)
   *VAR_3 -= VAR_0->data_offset;
  return VAR_5;
 }
 return 0;
}
