
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parity; } ;
struct TYPE_4__ {unsigned int size; } ;
struct stripe {TYPE_3__ idx; int key; TYPE_1__ io; int sc; } ;
struct TYPE_5__ {unsigned int io_size; unsigned int chunk_size; int data_devs; } ;
struct raid_set {TYPE_2__ set; } ;
struct raid_address {int pi; } ;
typedef unsigned int sector_t ;


 int FUNC_0 (struct stripe*,int ) ;
 int VAR_0 ;
 struct raid_set* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct stripe*,unsigned int,unsigned int,int ) ;
 int FUNC_4 (struct raid_set*,int,struct raid_address*) ;
 int FUNC_5 (struct stripe*,int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct stripe *VAR_1)
{
 struct raid_set *VAR_2 = FUNC_1(VAR_1->sc);
 int VAR_3 = VAR_1->io.size != VAR_2->set.io_size;
 unsigned VAR_4 = VAR_2->set.chunk_size, VAR_5 = VAR_1->io.size,
   VAR_6 = VAR_4 > VAR_5 ? VAR_5 : VAR_4;
 sector_t VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7 += VAR_6) {





  if (FUNC_6(VAR_3)) {
   struct raid_address VAR_8;

   FUNC_4(VAR_2, (VAR_1->key + VAR_7) *
      VAR_2->set.data_devs, &VAR_8);
   VAR_1->idx.parity = VAR_8.pi;
   FUNC_5(VAR_1, VAR_8.pi, VAR_7, VAR_6);
  }

  FUNC_3(VAR_1, VAR_6, VAR_7, VAR_1->idx.parity);
  FUNC_2(FUNC_0(VAR_1, VAR_1->idx.parity), VAR_0);
 }
}
