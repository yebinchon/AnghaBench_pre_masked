
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_fabric_s {int fcs; } ;
typedef int bfa_status_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct bfa_fcxp_s *VAR_1, void *VAR_2,
        bfa_status_t VAR_3, u32 VAR_4,
        u32 VAR_5, struct fchs_s *VAR_6)
{
 struct bfa_fcs_fabric_s *VAR_7 = VAR_2;

 FUNC_0(VAR_7->fcs, VAR_3);
}
