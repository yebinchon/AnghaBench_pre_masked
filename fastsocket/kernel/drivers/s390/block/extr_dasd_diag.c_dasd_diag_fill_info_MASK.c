
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_information2_t {unsigned int label_block; int FBA_layout; int characteristics_size; scalar_t__ confdata_size; int characteristics; int format; } ;
struct dasd_diag_private {int rdc_data; scalar_t__ pt_block; } ;
struct dasd_diag_characteristics {int dummy; } ;
struct dasd_device {scalar_t__ private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct dasd_device * VAR_1,
      struct dasd_information2_t * VAR_2)
{
 struct dasd_diag_private *VAR_3;

 VAR_3 = (struct dasd_diag_private *) VAR_1->private;
 VAR_2->label_block = (unsigned int) VAR_3->pt_block;
 VAR_2->FBA_layout = 1;
 VAR_2->format = VAR_0;
 VAR_2->characteristics_size = sizeof (struct dasd_diag_characteristics);
 FUNC_0(VAR_2->characteristics,
        &((struct dasd_diag_private *) VAR_1->private)->rdc_data,
        sizeof (struct dasd_diag_characteristics));
 VAR_2->confdata_size = 0;
 return 0;
}
