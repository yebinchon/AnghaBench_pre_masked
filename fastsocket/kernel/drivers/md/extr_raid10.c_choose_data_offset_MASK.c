
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10bio {int state; } ;
struct md_rdev {int new_data_offset; int data_offset; TYPE_1__* mddev; } ;
typedef int sector_t ;
struct TYPE_2__ {int recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static sector_t FUNC_1(struct r10bio *VAR_2,
       struct md_rdev *VAR_3)
{
 if (!FUNC_0(VAR_0, &VAR_3->mddev->recovery) ||
     FUNC_0(VAR_1, &VAR_2->state))
  return VAR_3->data_offset;
 else
  return VAR_3->new_data_offset;
}
