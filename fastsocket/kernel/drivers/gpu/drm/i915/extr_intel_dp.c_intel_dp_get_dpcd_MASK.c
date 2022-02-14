
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* dpcd; int* downstream_ports; } ;
typedef int dpcd_hex_dump ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,int,int,int,char*,int,int) ;
 scalar_t__ FUNC_2 (struct intel_dp*,int,int*,int) ;

__attribute__((used)) static bool
FUNC_3(struct intel_dp *VAR_5)
{
 char VAR_6[sizeof(VAR_5->dpcd) * 3];

 if (FUNC_2(VAR_5, 0x000, VAR_5->dpcd,
        sizeof(VAR_5->dpcd)) == 0)
  return 0;

 FUNC_1(VAR_5->dpcd, sizeof(VAR_5->dpcd),
      32, 1, VAR_6, sizeof(VAR_6), 0);
 FUNC_0("DPCD: %s\n", VAR_6);

 if (VAR_5->dpcd[VAR_2] == 0)
  return 0;

 if (!(VAR_5->dpcd[VAR_0] &
       VAR_3))
  return 1;

 if (VAR_5->dpcd[VAR_2] == 0x10)
  return 1;

 if (FUNC_2(VAR_5, VAR_1,
        VAR_5->downstream_ports,
        VAR_4) == 0)
  return 0;

 return 1;
}
