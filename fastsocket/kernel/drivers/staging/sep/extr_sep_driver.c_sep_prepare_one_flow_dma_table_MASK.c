
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {int physical_address; unsigned long block_size; } ;
struct sep_flow_context_t {int dummy; } ;
struct sep_device {int dummy; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct sep_lli_entry_t*) ;
 int FUNC_1 (struct sep_device*,unsigned long**) ;
 int FUNC_2 (struct sep_device*,unsigned long,unsigned long,unsigned long*,struct sep_lli_entry_t**,struct page***) ;
 int FUNC_3 (struct sep_device*,unsigned long,unsigned long,unsigned long*,struct sep_lli_entry_t**,struct page***) ;
 int FUNC_4 (unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct sep_device *VAR_1,
     unsigned long VAR_2,
     unsigned long VAR_3,
     struct sep_lli_entry_t *VAR_4,
     struct sep_lli_entry_t **VAR_5,
     struct sep_flow_context_t *VAR_6,
     bool VAR_7)
{
 int VAR_8;

 unsigned long VAR_9;
 struct sep_lli_entry_t *VAR_10;
 struct sep_lli_entry_t *VAR_11;
 unsigned long *VAR_12;

 unsigned long VAR_13;

 struct page **VAR_14;
 unsigned long VAR_15;


 VAR_8 = FUNC_1(VAR_1, &VAR_12);
 if (VAR_8)
  goto end_function;


 if (VAR_7 == 1)

  VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_9, &VAR_10, &VAR_14);
 else

  VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_9, &VAR_10, &VAR_14);

 if (VAR_8)
  goto end_function;



 *VAR_12 = VAR_9;


 VAR_12++;


 *VAR_12 = (unsigned long) VAR_14;


 VAR_11 = (struct sep_lli_entry_t *) (++VAR_12);


 for (VAR_13 = VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  VAR_11->physical_address = VAR_10[VAR_15].physical_address;

  VAR_11->block_size = VAR_10[VAR_15].block_size;


  VAR_13 += VAR_10[VAR_15].block_size;

  VAR_11++;
 }


 VAR_4->physical_address = FUNC_4(VAR_12);


 VAR_4->block_size = ((VAR_9 + 1) << VAR_0) | (VAR_13);


 VAR_11->physical_address = 0xffffffff;
 VAR_11->block_size = 0;


 *VAR_5 = VAR_11;


 FUNC_0(VAR_10);
end_function:
 return VAR_8;
}
