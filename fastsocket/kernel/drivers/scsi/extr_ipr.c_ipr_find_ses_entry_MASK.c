
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_std_inq_vpids {scalar_t__* product_id; } ;
struct ipr_ses_table_entry {char* compare_product_id_byte; scalar_t__* product_id; } ;
struct TYPE_2__ {struct ipr_std_inq_vpids vpids; } ;
struct ipr_resource_entry {TYPE_1__ std_inq_data; } ;


 int FUNC_0 (struct ipr_ses_table_entry*) ;
 int VAR_0 ;
 struct ipr_ses_table_entry* VAR_1 ;

__attribute__((used)) static const struct ipr_ses_table_entry *
FUNC_1(struct ipr_resource_entry *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct ipr_std_inq_vpids *VAR_6;
 const struct ipr_ses_table_entry *VAR_7 = VAR_1;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++, VAR_7++) {
  for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_7->compare_product_id_byte[VAR_4] == 'X') {
    VAR_6 = &VAR_2->std_inq_data.vpids;
    if (VAR_6->product_id[VAR_4] == VAR_7->product_id[VAR_4])
     VAR_5++;
    else
     break;
   } else
    VAR_5++;
  }

  if (VAR_5 == VAR_0)
   return VAR_7;
 }

 return ((void*)0);
}
