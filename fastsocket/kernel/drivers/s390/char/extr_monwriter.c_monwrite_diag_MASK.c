
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct monwrite_hdr {int datalen; int mod_level; int release; int version; int record_num; int applid; } ;
struct appldata_product_id {int mod_lvl; int release_nr; int version_nr; int record_nr; int prod_fn; int prod_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct appldata_product_id*,int,void*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct monwrite_hdr *VAR_2, char *VAR_3, int VAR_4)
{
 struct appldata_product_id VAR_5;
 int VAR_6;

 FUNC_2(VAR_5.prod_nr, "LNXAPPL");
 VAR_5.prod_fn = VAR_2->applid;
 VAR_5.record_nr = VAR_2->record_num;
 VAR_5.version_nr = VAR_2->version;
 VAR_5.release_nr = VAR_2->release;
 VAR_5.mod_lvl = VAR_2->mod_level;
 VAR_6 = FUNC_0(&VAR_5, VAR_4, (void *) VAR_3, VAR_2->datalen);
 if (VAR_6 <= 0)
  return VAR_6;
 FUNC_1("Writing monitor data failed with rc=%i\n", VAR_6);
 if (VAR_6 == 5)
  return -VAR_1;
 return -VAR_0;
}
