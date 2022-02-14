
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ Result ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static Result FUNC_6(const char* VAR_1)
{
 u32 VAR_2 = FUNC_4(VAR_1) + 1;
 u32* VAR_3 = FUNC_3();

 VAR_3[0] = FUNC_1(2, 0, 2);
 VAR_3[1] = FUNC_0(VAR_2, 0);
 VAR_3[2] = (u32)VAR_1;

 Result VAR_4 = FUNC_5(VAR_0);
 if (FUNC_2(VAR_4)) VAR_4 = VAR_3[1];
 return VAR_4;
}
