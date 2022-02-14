
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {scalar_t__ block_size; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct sep_lli_entry_t *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned long VAR_4;



 for (VAR_4 = 0; (VAR_4 < (VAR_0 - 1)) && (VAR_4 < VAR_2); VAR_4++)
  VAR_3 += VAR_1[VAR_4].block_size;
 return VAR_3;
}
