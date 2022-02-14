
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_device {int dummy; } ;


 int FUNC_0 (struct sym_device*,int *,int,int*) ;
 int FUNC_1 (struct sym_device*,int*,int*,int*) ;

__attribute__((used)) static void FUNC_2(struct sym_device *VAR_0, u_char *VAR_1, u_char VAR_2,
        u_char *VAR_3, u_char *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  FUNC_0(VAR_0, ((void*)0), (VAR_2 >> (7 - VAR_5)) & 0x01, VAR_3);

 FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4);
}
