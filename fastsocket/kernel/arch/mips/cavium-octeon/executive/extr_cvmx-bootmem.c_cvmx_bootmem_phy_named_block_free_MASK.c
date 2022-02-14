
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct cvmx_bootmem_named_block_desc {scalar_t__ size; scalar_t__ base_addr; } ;
struct TYPE_2__ {int major_version; scalar_t__ minor_version; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 struct cvmx_bootmem_named_block_desc* FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;

int FUNC_5(char *VAR_2, uint32_t VAR_3)
{
 struct cvmx_bootmem_named_block_desc *VAR_4;

 if (VAR_1->major_version != 3) {
  FUNC_4("ERROR: Incompatible bootmem descriptor version: "
        "%d.%d at addr: %p\n",
        (int)VAR_1->major_version,
        (int)VAR_1->minor_version,
        VAR_1);
  return 0;
 }
 FUNC_1();

 VAR_4 =
     FUNC_2(VAR_2,
           VAR_0);
 if (VAR_4) {







  FUNC_0(VAR_4->base_addr,
     VAR_4->size,
     VAR_0);
  VAR_4->size = 0;

 }

 FUNC_3();
 return VAR_4 != ((void*)0);
}
