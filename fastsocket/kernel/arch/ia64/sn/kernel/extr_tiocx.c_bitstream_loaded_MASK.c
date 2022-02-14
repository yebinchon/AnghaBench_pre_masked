
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int nasid_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(nasid_t VAR_2)
{
 u64 VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 VAR_3 &= VAR_1;
 FUNC_0("cx_credits= 0x%lx\n", VAR_3);

 return (VAR_3 == 0xf) ? 1 : 0;
}
