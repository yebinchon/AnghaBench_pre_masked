
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxt6000_state {int dummy; } ;
typedef int fe_guard_interval_t ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct nxt6000_state*,int ) ;
 int FUNC_1 (struct nxt6000_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct nxt6000_state* VAR_2, fe_guard_interval_t VAR_3)
{
 switch (VAR_3) {

 case 131:
  return FUNC_1(VAR_2, VAR_1, 0x00 | (FUNC_0(VAR_2, VAR_1) & ~0x03));

 case 132:
  return FUNC_1(VAR_2, VAR_1, 0x01 | (FUNC_0(VAR_2, VAR_1) & ~0x03));

 case 128:
 case 129:
  return FUNC_1(VAR_2, VAR_1, 0x02 | (FUNC_0(VAR_2, VAR_1) & ~0x03));

 case 130:
  return FUNC_1(VAR_2, VAR_1, 0x03 | (FUNC_0(VAR_2, VAR_1) & ~0x03));

 default:
  return -VAR_0;
 }
}
