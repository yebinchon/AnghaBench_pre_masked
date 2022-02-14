
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_sdbp_header {int len; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (char*,...) ;
 struct smu_sdbp_header const* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct smu_sdbp_header* FUNC_5 (int ,char*,unsigned int*) ;
 TYPE_1__* VAR_0 ;
 struct smu_sdbp_header* FUNC_6 (int) ;
 int VAR_1 ;
 int FUNC_7 (char*,char*,int) ;

const struct smu_sdbp_header *FUNC_8(int VAR_2,
  unsigned int *VAR_3, int VAR_4)
{
 char VAR_5[32];
 const struct smu_sdbp_header *VAR_6;

 if (!VAR_0)
  return ((void*)0);

 FUNC_7(VAR_5, "sdb-partition-%02x", VAR_2);

 FUNC_0("smu_get_sdb_partition(%02x)\n", VAR_2);

 if (VAR_4) {
  int VAR_7;
  VAR_7 = FUNC_3(&VAR_1);
  if (VAR_7)
   return FUNC_1(VAR_7);
 } else
  FUNC_2(&VAR_1);

 VAR_6 = FUNC_5(VAR_0->of_node, VAR_5, VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_0("trying to extract from SMU ...\n");
  VAR_6 = FUNC_6(VAR_2);
  if (VAR_6 != ((void*)0) && VAR_3)
   *VAR_3 = VAR_6->len << 2;
 }
 FUNC_4(&VAR_1);
 return VAR_6;
}
