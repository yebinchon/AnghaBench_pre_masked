
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ha_struct {int dummy; } ;
struct asd_ddb_ssp_smp_target_port {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct asd_ha_struct *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0 ; VAR_3 < VAR_0; VAR_3++)
  for (VAR_2 = 0; VAR_2 < sizeof(struct asd_ddb_ssp_smp_target_port); VAR_2+= 4)
   FUNC_0(VAR_1, VAR_3, VAR_2, 0);
}
