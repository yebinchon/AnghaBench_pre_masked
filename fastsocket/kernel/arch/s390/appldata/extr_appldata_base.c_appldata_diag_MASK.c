
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct appldata_product_id {int prod_fn; int version_nr; int release_nr; char record_nr; char mod_lvl; int prod_nr; } ;


 int FUNC_0 (struct appldata_product_id*,int ,void*,int ) ;

int FUNC_1(char VAR_0, u16 VAR_1, unsigned long VAR_2,
   u16 VAR_3, char *VAR_4)
{
 struct appldata_product_id VAR_5 = {
  .prod_nr = {0xD3, 0xC9, 0xD5, 0xE4,
          0xE7, 0xD2, 0xD9},
  .prod_fn = 0xD5D3,
  .version_nr = 0xF2F6,
  .release_nr = 0xF0F1,
 };

 VAR_5.record_nr = VAR_0;
 VAR_5.mod_lvl = (VAR_4[0]) << 8 | VAR_4[1];
 return FUNC_0(&VAR_5, VAR_1, (void *) VAR_2, VAR_3);
}
