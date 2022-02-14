
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int n_sections; int unsupported; int plat_bus_err; int host_ctlr_err; int plat_specific_err; int pci_comp_err; int smbios_dev_err; int pci_bus_err; int sel_dev_err; int mem_dev_err; int proc_err; void* header; } ;
typedef TYPE_1__ slidx_table_t ;
struct TYPE_7__ {int guid; scalar_t__ len; } ;
typedef TYPE_2__ sal_log_section_hdr_t ;
struct TYPE_8__ {int len; } ;
typedef TYPE_3__ sal_log_record_header_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_9, slidx_table_t *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = ((sal_log_record_header_t*)VAR_9)->len;
 u32 VAR_13;
 int VAR_14;
 sal_log_section_hdr_t *VAR_15;




 FUNC_0(&(VAR_10->proc_err));
 FUNC_0(&(VAR_10->mem_dev_err));
 FUNC_0(&(VAR_10->sel_dev_err));
 FUNC_0(&(VAR_10->pci_bus_err));
 FUNC_0(&(VAR_10->smbios_dev_err));
 FUNC_0(&(VAR_10->pci_comp_err));
 FUNC_0(&(VAR_10->plat_specific_err));
 FUNC_0(&(VAR_10->host_ctlr_err));
 FUNC_0(&(VAR_10->plat_bus_err));
 FUNC_0(&(VAR_10->unsupported));




 VAR_10->header = VAR_9;





 for (VAR_13 = sizeof(sal_log_record_header_t), VAR_14 = 0;
  VAR_13 < VAR_12; VAR_13 += VAR_15->len, VAR_14++) {
  VAR_15 = (sal_log_section_hdr_t *)((char*)VAR_9 + VAR_13);
  if (!FUNC_2(VAR_15->guid, VAR_8)) {
   FUNC_1(VAR_10->proc_err, VAR_15);
  } else if (!FUNC_2(VAR_15->guid,
    VAR_2)) {
   VAR_11 = 1;
   FUNC_1(VAR_10->mem_dev_err, VAR_15);
  } else if (!FUNC_2(VAR_15->guid,
    VAR_5)) {
   VAR_11 = 1;
   FUNC_1(VAR_10->sel_dev_err, VAR_15);
  } else if (!FUNC_2(VAR_15->guid,
    VAR_3)) {
   VAR_11 = 1;
   FUNC_1(VAR_10->pci_bus_err, VAR_15);
  } else if (!FUNC_2(VAR_15->guid,
    VAR_6)) {
   VAR_11 = 1;
   FUNC_1(VAR_10->smbios_dev_err, VAR_15);
  } else if (!FUNC_2(VAR_15->guid,
    VAR_4)) {
   VAR_11 = 1;
   FUNC_1(VAR_10->pci_comp_err, VAR_15);
  } else if (!FUNC_2(VAR_15->guid,
    VAR_7)) {
   VAR_11 = 1;
   FUNC_1(VAR_10->plat_specific_err, VAR_15);
  } else if (!FUNC_2(VAR_15->guid,
    VAR_1)) {
   VAR_11 = 1;
   FUNC_1(VAR_10->host_ctlr_err, VAR_15);
  } else if (!FUNC_2(VAR_15->guid,
    VAR_0)) {
   VAR_11 = 1;
   FUNC_1(VAR_10->plat_bus_err, VAR_15);
  } else {
   FUNC_1(VAR_10->unsupported, VAR_15);
  }
 }
 VAR_10->n_sections = VAR_14;

 return VAR_11;
}
