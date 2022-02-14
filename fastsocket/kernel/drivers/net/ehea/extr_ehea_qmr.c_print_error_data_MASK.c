
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__*,int,char*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void FUNC_3(u64 *VAR_6)
{
 int VAR_7;
 u64 VAR_8 = FUNC_0(VAR_5, VAR_6[2]);
 u64 VAR_9 = VAR_6[1];

 VAR_7 = FUNC_0(VAR_4, VAR_6[0]);

 if (VAR_7 > VAR_3)
  VAR_7 = VAR_3;

 if (VAR_8 == VAR_2)
  FUNC_2("QP (resource=%llX) state: AER=0x%llX, AERR=0x%llX, "
      "port=%llX", VAR_9, VAR_6[6], VAR_6[12], VAR_6[22]);
 else if (VAR_8 == VAR_0)
  FUNC_2("CQ (resource=%llX) state: AER=0x%llX", VAR_9,
      VAR_6[6]);
 else if (VAR_8 == VAR_1)
  FUNC_2("EQ (resource=%llX) state: AER=0x%llX", VAR_9,
      VAR_6[6]);

 FUNC_1(VAR_6, VAR_7, "error data");
}
