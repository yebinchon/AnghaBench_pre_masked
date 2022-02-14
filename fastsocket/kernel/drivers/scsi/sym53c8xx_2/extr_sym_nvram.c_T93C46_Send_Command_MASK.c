
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct sym_device {int dummy; } ;


 int FUNC_0 (struct sym_device*,int ) ;
 int FUNC_1 (struct sym_device*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct sym_device *VAR_1, u_short VAR_2,
    u_char *VAR_3, u_char *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < 9; VAR_5++)
  FUNC_1(VAR_1, (u_char) (VAR_2 >> (8 - VAR_5)), VAR_4);

 *VAR_3 = FUNC_0(VAR_1, VAR_0);
}
