
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (char*,size_t,char*,int ,int ,int ) ;
 int FUNC_1 (struct zd_chip*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct zd_chip *VAR_0, char *VAR_1, size_t VAR_2)
{
 u8 *VAR_3 = FUNC_2(FUNC_1(VAR_0));
 return FUNC_0(VAR_1, VAR_2, "%02x-%02x-%02x",
           VAR_3[0], VAR_3[1], VAR_3[2]);
}
