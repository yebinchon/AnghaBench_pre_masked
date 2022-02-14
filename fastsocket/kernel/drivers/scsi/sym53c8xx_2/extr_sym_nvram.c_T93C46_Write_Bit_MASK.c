
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_device {int dummy; } ;


 int FUNC_0 (struct sym_device*,int ) ;
 int FUNC_1 (struct sym_device*,int ,int) ;
 int FUNC_2 (struct sym_device*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct sym_device *VAR_2, u_char VAR_3, u_char *VAR_4)
{
 if (VAR_3 & 0x01)
  *VAR_4 |= 0x02;
 else
  *VAR_4 &= 0xfd;

 *VAR_4 |= 0x10;

 FUNC_1(VAR_2, VAR_0, *VAR_4);
 FUNC_0(VAR_2, VAR_1);
 FUNC_3(2);

 FUNC_2(VAR_2, VAR_4);
}
