
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ha_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct asd_ha_struct*,int ) ;
 int FUNC_3 (struct asd_ha_struct*,int ,int ) ;
 int FUNC_4 (struct asd_ha_struct*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct asd_ha_struct *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  FUNC_4(VAR_2, FUNC_0(VAR_3), 0xFFFFFFFF);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  FUNC_2(VAR_2, FUNC_1(VAR_3));

 FUNC_3(VAR_2, VAR_0, VAR_1);
}
