
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int mtype_cap; int get_sdram_scrub_rate; int set_sdram_scrub_rate; int * ctl_page_to_phys; int dev_name; int ctl_name; int mod_ver; int mod_name; int edac_cap; int edac_ctl_cap; struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int nbcap; int F2; } ;
struct amd64_family_type {int ctl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct amd64_pvt*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_11,
     struct amd64_family_type *VAR_12)
{
 struct amd64_pvt *VAR_13 = VAR_11->pvt_info;

 VAR_11->mtype_cap = VAR_5 | VAR_6;
 VAR_11->edac_ctl_cap = VAR_1;

 if (VAR_13->nbcap & VAR_8)
  VAR_11->edac_ctl_cap |= VAR_3;

 if (VAR_13->nbcap & VAR_7)
  VAR_11->edac_ctl_cap |= VAR_2;

 VAR_11->edac_cap = FUNC_0(VAR_13);
 VAR_11->mod_name = VAR_4;
 VAR_11->mod_ver = VAR_0;
 VAR_11->ctl_name = VAR_12->ctl_name;
 VAR_11->dev_name = FUNC_1(VAR_13->F2);
 VAR_11->ctl_page_to_phys = ((void*)0);


 VAR_11->set_sdram_scrub_rate = VAR_10;
 VAR_11->get_sdram_scrub_rate = VAR_9;
}
