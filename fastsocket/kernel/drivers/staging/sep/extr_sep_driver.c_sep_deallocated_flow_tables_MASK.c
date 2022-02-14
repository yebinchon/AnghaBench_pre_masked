
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {unsigned long block_size; scalar_t__ physical_address; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct page**,unsigned long,int) ;

__attribute__((used)) static void FUNC_1(struct sep_lli_entry_t *VAR_2)
{

 unsigned long *VAR_3;

 unsigned long VAR_4;
 unsigned long VAR_5;
 struct page **VAR_6;

 struct sep_lli_entry_t *VAR_7;


 VAR_3 = (unsigned long *) VAR_2->physical_address;


 VAR_4 = (VAR_2->block_size >> VAR_1)
     & VAR_0;


 while (*VAR_3 != 0xffffffff) {

  VAR_5 = *(VAR_3 - 2);


  VAR_6 = (struct page **) (*(VAR_3 - 1));


  FUNC_0(VAR_6, VAR_5, 1);


  VAR_7 = ((struct sep_lli_entry_t *) VAR_3) + (VAR_4 - 1);

  VAR_3 = (unsigned long *) VAR_7->physical_address;
  VAR_4 = (VAR_7->block_size >> VAR_1) & VAR_0;
 }

 return;
}
