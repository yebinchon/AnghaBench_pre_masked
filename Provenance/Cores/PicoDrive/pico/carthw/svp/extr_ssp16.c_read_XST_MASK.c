
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_3(void)
{

 u32 VAR_2 = FUNC_2(3, 0, 0);
 if (VAR_2 != (u32)-1) return VAR_2;

 FUNC_1(VAR_0, "XST raw r %04x @ %04x", VAR_1, FUNC_0());
 return VAR_1;
}
