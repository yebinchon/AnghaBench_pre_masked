
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ro_spine {int dummy; } ;
typedef int dm_block_t ;
struct TYPE_4__ {int nr_entries; int flags; } ;
struct TYPE_5__ {int * keys; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct ro_spine*) ;
 int FUNC_3 (struct ro_spine*,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(struct ro_spine *VAR_2, dm_block_t VAR_3,
       uint64_t *VAR_4, dm_block_t *VAR_5)
{
 int VAR_6, VAR_7;
 uint32_t VAR_8;

 do {
  VAR_7 = FUNC_3(VAR_2, VAR_3);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_8 = FUNC_0(FUNC_2(VAR_2)->header.flags);
  VAR_6 = FUNC_0(FUNC_2(VAR_2)->header.nr_entries);
  if (!VAR_6)
   return -VAR_0;
  else
   VAR_6--;

  *VAR_4 = FUNC_1(FUNC_2(VAR_2)->keys[VAR_6]);
  if (VAR_5 || VAR_8 & VAR_1)
   VAR_3 = FUNC_4(FUNC_2(VAR_2), VAR_6);

 } while (VAR_8 & VAR_1);

 if (VAR_5)
  *VAR_5 = VAR_3;
 return 0;
}
