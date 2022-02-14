
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;


 int FUNC_0 (scalar_t__,int ,int*,char*) ;
 int FUNC_1 (scalar_t__,int ,int*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(u32 VAR_0, u16 VAR_1, char *VAR_2)
{
   int VAR_3=2;

   VAR_2 += FUNC_2(VAR_2, "bclr    ");
   VAR_2 += FUNC_1(VAR_0+VAR_3, 0, &VAR_3, VAR_2);
   VAR_2 += FUNC_2(VAR_2, ", ");
   FUNC_0(VAR_0+VAR_3, VAR_1, &VAR_3, VAR_2);
   return VAR_3;
}
