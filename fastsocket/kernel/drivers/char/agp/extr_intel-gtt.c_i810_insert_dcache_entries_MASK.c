
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {int page_count; int is_flushed; } ;
typedef int off_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int num_dcache_entries; scalar_t__ gtt; TYPE_1__* driver; } ;
struct TYPE_3__ {int (* write_entry ) (int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static int FUNC_3(struct agp_memory *VAR_3, off_t VAR_4,
          int VAR_5)
{
 int VAR_6;

 if ((VAR_4 + VAR_3->page_count)
   > VAR_2.num_dcache_entries)
  return -VAR_0;

 if (!VAR_3->is_flushed)
  FUNC_0();

 for (VAR_6 = VAR_4; VAR_6 < (VAR_4 + VAR_3->page_count); VAR_6++) {
  dma_addr_t VAR_7 = VAR_6 << VAR_1;
  VAR_2.driver->write_entry(VAR_7,
        VAR_6, VAR_5);
 }
 FUNC_1(VAR_2.gtt+VAR_6-1);

 return 0;
}
