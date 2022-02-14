
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
struct tty_struct {int dummy; } ;


 int FUNC_0 (struct tty_struct*,int) ;

__attribute__((used)) static void
FUNC_1(struct tty_struct *VAR_0, ushort VAR_1)
{
 if (VAR_1 < 0x80)

  FUNC_0(VAR_0, VAR_1);
 else if (VAR_1 < 0x800) {

  FUNC_0(VAR_0, 0xc0 | (VAR_1 >> 6));
  FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3f));
 } else {

  FUNC_0(VAR_0, 0xe0 | (VAR_1 >> 12));
  FUNC_0(VAR_0, 0x80 | ((VAR_1 >> 6) & 0x3f));
  FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3f));
 }
}
