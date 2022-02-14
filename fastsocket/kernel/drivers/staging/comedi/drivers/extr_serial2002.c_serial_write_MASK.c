
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_data {scalar_t__ kind; int value; int index; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(struct file *VAR_1, struct serial_data VAR_2)
{
 if (VAR_2.kind == VAR_0) {
  unsigned char VAR_3 =
      ((VAR_2.value << 5) & 0x20) | (VAR_2.index & 0x1f);
  FUNC_0(VAR_1, &VAR_3, 1);
 } else {
  unsigned char VAR_4[6];
  int VAR_5 = 0;
  if (VAR_2.value >= (1L << 30)) {
   VAR_4[VAR_5] = 0x80 | ((VAR_2.value >> 30) & 0x03);
   VAR_5++;
  }
  if (VAR_2.value >= (1L << 23)) {
   VAR_4[VAR_5] = 0x80 | ((VAR_2.value >> 23) & 0x7f);
   VAR_5++;
  }
  if (VAR_2.value >= (1L << 16)) {
   VAR_4[VAR_5] = 0x80 | ((VAR_2.value >> 16) & 0x7f);
   VAR_5++;
  }
  if (VAR_2.value >= (1L << 9)) {
   VAR_4[VAR_5] = 0x80 | ((VAR_2.value >> 9) & 0x7f);
   VAR_5++;
  }
  VAR_4[VAR_5] = 0x80 | ((VAR_2.value >> 2) & 0x7f);
  VAR_5++;
  VAR_4[VAR_5] = ((VAR_2.value << 5) & 0x60) | (VAR_2.index & 0x1f);
  VAR_5++;
  FUNC_0(VAR_1, VAR_4, VAR_5);
 }
}
