
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct siena_nvram_type_info {scalar_t__ port; int * name; } ;
struct efx_nic {int dummy; } ;
struct TYPE_4__ {size_t size; size_t erasesize; int flags; int type; } ;
struct TYPE_3__ {unsigned int nvram_type; } ;
struct efx_mtd_partition {TYPE_2__ mtd; int * type_name; TYPE_1__ mcdi; } ;
struct efx_mtd {struct efx_mtd_partition* part; } ;


 unsigned int FUNC_0 (struct siena_nvram_type_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct efx_nic*,unsigned int,size_t*,size_t*,int*) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 struct siena_nvram_type_info* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_4,
         struct efx_mtd *VAR_5,
         unsigned int VAR_6,
         unsigned int VAR_7)
{
 struct efx_mtd_partition *VAR_8 = &VAR_5->part[VAR_6];
 const struct siena_nvram_type_info *VAR_9;
 size_t VAR_10, VAR_11;
 bool VAR_12;
 int VAR_13;

 if (VAR_7 >= FUNC_0(VAR_3) ||
     VAR_3[VAR_7].name == ((void*)0))
  return -VAR_0;

 VAR_9 = &VAR_3[VAR_7];

 if (VAR_9->port != FUNC_2(VAR_4))
  return -VAR_0;

 VAR_13 = FUNC_1(VAR_4, VAR_7, &VAR_10, &VAR_11, &VAR_12);
 if (VAR_13)
  return VAR_13;
 if (VAR_12)
  return -VAR_0;

 VAR_8->mcdi.nvram_type = VAR_7;
 VAR_8->type_name = VAR_9->name;

 VAR_8->mtd.type = VAR_2;
 VAR_8->mtd.flags = VAR_1;
 VAR_8->mtd.size = VAR_10;
 VAR_8->mtd.erasesize = VAR_11;

 return 0;
}
