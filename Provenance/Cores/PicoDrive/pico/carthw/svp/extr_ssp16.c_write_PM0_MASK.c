
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(u32 VAR_2)
{
 u32 VAR_3 = FUNC_2(0, 1, VAR_2);
 if (VAR_3 != (u32)-1) return;
 FUNC_1(VAR_0, "PM0 raw w %04x @ %04x", VAR_2, FUNC_0());
 VAR_1 = VAR_2;
}
