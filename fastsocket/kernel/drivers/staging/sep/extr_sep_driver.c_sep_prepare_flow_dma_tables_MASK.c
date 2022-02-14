
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {int physical_address; int block_size; } ;
struct sep_flow_context_t {int dummy; } ;
struct sep_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long*) ;
 int FUNC_1 (struct sep_device*,unsigned long,unsigned long,struct sep_lli_entry_t*,struct sep_lli_entry_t**,struct sep_flow_context_t*,int) ;

__attribute__((used)) static int FUNC_2(struct sep_device *VAR_1,
     unsigned long VAR_2,
            unsigned long VAR_3, struct sep_flow_context_t *VAR_4, struct sep_lli_entry_t *VAR_5, struct sep_lli_entry_t *VAR_6, bool VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 struct sep_lli_entry_t VAR_11;
 struct sep_lli_entry_t *VAR_12;
 struct sep_lli_entry_t *VAR_13;
 unsigned long VAR_14;


 VAR_8 = 0;
 VAR_13 = 0;


 VAR_11.physical_address = 0xffffffff;
 VAR_5->physical_address = 0xffffffff;
 VAR_11.block_size = 0;

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {

  VAR_8 = FUNC_0(VAR_9, &VAR_3);
  if (VAR_8)
   goto end_function;


  VAR_3++;
  VAR_8 = FUNC_0(VAR_10, &VAR_3);
  if (VAR_8)
   goto end_function;


  VAR_3++;


  VAR_8 = FUNC_1(VAR_1, VAR_9, VAR_10, &VAR_11, &VAR_12, VAR_4, VAR_7);
  if (VAR_8)
   goto end_function;

  if (VAR_14 == 0) {


   *VAR_5 = VAR_11;


   VAR_13 = VAR_12;
  } else {


   VAR_13->block_size = (0x1 << VAR_0) | (VAR_11.block_size);


   VAR_13 = VAR_12;
  }
 }


 *VAR_6 = VAR_11;
end_function:
 return VAR_8;
}
