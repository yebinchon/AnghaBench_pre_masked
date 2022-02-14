
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_system_map_addr_info {int mod_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,long,long) ;
 int FUNC_4 (struct pdc_system_map_addr_info*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct pdc_system_map_addr_info *VAR_4,
         long VAR_5, long VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 FUNC_5(&VAR_2, VAR_8);
 VAR_7 = FUNC_3(VAR_1, VAR_0, FUNC_0(VAR_3),
         VAR_5, VAR_6);
 FUNC_1(VAR_3);
 FUNC_4(VAR_4, VAR_3, sizeof(*VAR_4));
 FUNC_6(&VAR_2, VAR_8);

 VAR_4->mod_addr = FUNC_2(VAR_4->mod_addr);
 return VAR_7;
}
