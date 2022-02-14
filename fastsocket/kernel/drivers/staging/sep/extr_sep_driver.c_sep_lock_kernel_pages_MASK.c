
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {unsigned long physical_address; unsigned long block_size; } ;
struct sep_device {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 struct sep_lli_entry_t* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct sep_device *VAR_5,
     unsigned long VAR_6,
     unsigned long VAR_7,
     unsigned long *VAR_8,
     struct sep_lli_entry_t **VAR_9,
     struct page ***VAR_10)
{
 int VAR_11 = 0;

 unsigned long VAR_12;

 unsigned long VAR_13;

 unsigned long VAR_14;
 struct sep_lli_entry_t *VAR_15;

 unsigned long VAR_16;
 unsigned long VAR_17;

 FUNC_0("SEP Driver:--------> sep_lock_kernel_pages start\n");


 VAR_12 = (VAR_6 + VAR_7 - 1) >> VAR_3;
 VAR_13 = VAR_6 >> VAR_3;
 VAR_14 = VAR_12 - VAR_13 + 1;

 FUNC_1("SEP Driver: kernel_virt_addr is %08lx\n", VAR_6);
 FUNC_1("SEP Driver: data_size is %lu\n", VAR_7);
 FUNC_1("SEP Driver: start_page is %lx\n", VAR_13);
 FUNC_1("SEP Driver: end_page is %lx\n", VAR_12);
 FUNC_1("SEP Driver: num_pages is %lu\n", VAR_14);

 VAR_15 = FUNC_2(sizeof(struct sep_lli_entry_t) * VAR_14, VAR_1);
 if (!VAR_15) {
  FUNC_1("SEP Driver: kmalloc for lli_array failed\n");
  VAR_11 = -VAR_0;
  goto end_function;
 }



 VAR_15[0].physical_address = (unsigned long) FUNC_3((unsigned long *) VAR_6);


 if ((VAR_4 - (VAR_6 & (~VAR_2))) >= VAR_7)
  VAR_15[0].block_size = VAR_7;
 else
  VAR_15[0].block_size = VAR_4 - (VAR_6 & (~VAR_2));


 FUNC_0("lli_array[0].physical_address is %08lx, lli_array[0].block_size is %lu\n", VAR_15[0].physical_address, VAR_15[0].block_size);


 VAR_16 = (VAR_6 & VAR_2) + VAR_4;


 for (VAR_17 = 1; VAR_17 < (VAR_14 - 1); VAR_17++) {
  VAR_15[VAR_17].physical_address = (unsigned long) FUNC_3((unsigned long *) VAR_16);
  VAR_15[VAR_17].block_size = VAR_4;

  FUNC_1("lli_array[%lu].physical_address is %08lx, lli_array[%lu].block_size is %lu\n", VAR_17, VAR_15[VAR_17].physical_address, VAR_17, VAR_15[VAR_17].block_size);
  VAR_16 += VAR_4;
 }


 if (VAR_14 > 1) {

  VAR_15[VAR_17].physical_address = (unsigned long) FUNC_3((unsigned long *) VAR_16);


  VAR_15[VAR_17].block_size = (VAR_6 + VAR_7) & (~VAR_2);

  if (VAR_15[VAR_17].block_size == 0) {
   FUNC_0("app_virt_addr is %08lx\n", VAR_6);
   FUNC_0("data_size is %lu\n", VAR_7);
   while (1);
  }

  FUNC_1("lli_array[%lu].physical_address is %08lx, lli_array[%lu].block_size is %lu\n", VAR_17, VAR_15[VAR_17].physical_address, VAR_17, VAR_15[VAR_17].block_size);
 }

 *VAR_9 = VAR_15;
 *VAR_8 = VAR_14;
 *VAR_10 = 0;
end_function:
 FUNC_0("SEP Driver:<-------- sep_lock_kernel_pages end\n");
 return 0;
}
