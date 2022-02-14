
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct asd_ha_struct {struct asd_ha_addrspace* io_handle; } ;
struct asd_ha_addrspace {int swa_base; int swb_base; int swc_base; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct asd_ha_struct*,int) ;
 int FUNC_2 (struct asd_ha_struct*,int,int ) ;
 int FUNC_3 (struct asd_ha_struct*,int,int ) ;
 int FUNC_4 (struct asd_ha_struct*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct asd_ha_struct *VAR_4, u32 VAR_5, u8 VAR_6)
{
 struct asd_ha_addrspace *VAR_7=&VAR_4->io_handle[0];
 FUNC_0(VAR_5 >= 0xC0000000 || VAR_5 < VAR_0);
 if (VAR_7->swa_base <= VAR_5
     && VAR_5 < VAR_7->swa_base + VAR_1)
  FUNC_2 (VAR_4, VAR_5,VAR_6);
 else if (VAR_7->swb_base <= VAR_5
   && VAR_5 < VAR_7->swb_base + VAR_2)
  FUNC_3 (VAR_4, VAR_5, VAR_6);
 else if (VAR_7->swc_base <= VAR_5
   && VAR_5 < VAR_7->swc_base + VAR_3)
  FUNC_4 (VAR_4, VAR_5, VAR_6);
 else {

  FUNC_1(VAR_4, VAR_5);
  FUNC_3 (VAR_4, VAR_5, VAR_6);
 }
}
