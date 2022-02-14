
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_information2_t {int label_block; int FBA_layout; int characteristics_size; int confdata_size; int configuration_data; int characteristics; int format; } ;
struct dasd_eckd_private {int * conf_data; scalar_t__ conf_len; int rdc_data; scalar_t__ uses_cdl; } ;
struct dasd_eckd_characteristics {int dummy; } ;
struct dasd_device {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static int
FUNC_2(struct dasd_device * VAR_2,
      struct dasd_information2_t * VAR_3)
{
 struct dasd_eckd_private *VAR_4;

 VAR_4 = (struct dasd_eckd_private *) VAR_2->private;
 VAR_3->label_block = 2;
 VAR_3->FBA_layout = VAR_4->uses_cdl ? 0 : 1;
 VAR_3->format = VAR_4->uses_cdl ? VAR_0 : VAR_1;
 VAR_3->characteristics_size = sizeof(struct dasd_eckd_characteristics);
 FUNC_0(VAR_3->characteristics, &VAR_4->rdc_data,
        sizeof(struct dasd_eckd_characteristics));
 VAR_3->confdata_size = FUNC_1((unsigned long)VAR_4->conf_len,
      sizeof(VAR_3->configuration_data));
 FUNC_0(VAR_3->configuration_data, VAR_4->conf_data,
        VAR_3->confdata_size);
 return 0;
}
