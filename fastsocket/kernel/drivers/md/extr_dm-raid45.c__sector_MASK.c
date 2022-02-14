
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_devs; } ;
struct raid_set {TYPE_1__ set; } ;
struct bio {int bi_sector; } ;
typedef int sector_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static sector_t FUNC_1(struct raid_set *VAR_0, struct bio *VAR_1)
{
 sector_t VAR_2 = VAR_1->bi_sector;

 FUNC_0(VAR_2, VAR_0->set.data_devs);
 return VAR_2;
}
