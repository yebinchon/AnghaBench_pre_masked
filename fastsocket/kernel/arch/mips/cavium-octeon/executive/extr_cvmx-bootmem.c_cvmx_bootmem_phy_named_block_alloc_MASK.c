
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct cvmx_bootmem_named_block_desc {int base_addr; scalar_t__* name; scalar_t__ size; } ;
typedef int int64_t ;
typedef int cvmx_spinlock_t ;
struct TYPE_2__ {int major_version; int named_block_name_len; int lock; scalar_t__ minor_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 struct cvmx_bootmem_named_block_desc* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*,char*,int) ;

int64_t FUNC_7(uint64_t VAR_3, uint64_t VAR_4,
        uint64_t VAR_5,
        uint64_t VAR_6,
        char *VAR_7,
        uint32_t VAR_8)
{
 int64_t VAR_9;
 struct cvmx_bootmem_named_block_desc *VAR_10;
 if (VAR_2->major_version != 3) {
  FUNC_3("ERROR: Incompatible bootmem descriptor version: "
        "%d.%d at addr: %p\n",
        (int)VAR_2->major_version,
        (int)VAR_2->minor_version,
        VAR_2);
  return -1;
 }





 if (!(VAR_8 & VAR_1))
  FUNC_4((cvmx_spinlock_t *)&(VAR_2->lock));


 VAR_10 =
  FUNC_2(((void*)0),
        VAR_8 | VAR_1);





 if (FUNC_2(VAR_7,
           VAR_8 | VAR_1) || !VAR_10) {
  if (!(VAR_8 & VAR_1))
   FUNC_5((cvmx_spinlock_t *)&(VAR_2->lock));
  return -1;
 }
 VAR_3 = FUNC_0(VAR_3, (VAR_0 - 1));

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5,
      VAR_6,
      VAR_8 | VAR_1);
 if (VAR_9 >= 0) {
  VAR_10->base_addr = VAR_9;
  VAR_10->size = VAR_3;
  FUNC_6(VAR_10->name, VAR_7,
   VAR_2->named_block_name_len);
  VAR_10->name[VAR_2->named_block_name_len - 1] = 0;
 }

 if (!(VAR_8 & VAR_1))
  FUNC_5((cvmx_spinlock_t *)&(VAR_2->lock));
 return VAR_9;
}
