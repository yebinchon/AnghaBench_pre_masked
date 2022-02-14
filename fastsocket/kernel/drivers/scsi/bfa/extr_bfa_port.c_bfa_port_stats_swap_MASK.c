
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bfa_port_stats_u {int dummy; } bfa_port_stats_u ;
typedef int u32 ;
struct bfa_port_s {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_port_s *VAR_0, union bfa_port_stats_u *VAR_1)
{
 u32 *VAR_2 = (u32 *) VAR_1;
 __be32 VAR_3, VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < sizeof(union bfa_port_stats_u)/sizeof(u32);
  VAR_5 += 2) {
  VAR_3 = VAR_2[VAR_5];
  VAR_4 = VAR_2[VAR_5 + 1];




  VAR_2[VAR_5] = FUNC_0(VAR_4);
  VAR_2[VAR_5 + 1] = FUNC_0(VAR_3);

 }
}
