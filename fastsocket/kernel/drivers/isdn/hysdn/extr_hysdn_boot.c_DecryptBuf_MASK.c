
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* BootBuf; } ;
struct boot_data {int Cryptor; TYPE_1__ buf; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct boot_data *VAR_1, int VAR_2)
{
 unsigned char *VAR_3 = VAR_1->buf.BootBuf;

 while (VAR_2--) {
  VAR_1->Cryptor = (VAR_1->Cryptor >> 1) ^ ((VAR_1->Cryptor & 1U) ? VAR_0 : 0);
  *VAR_3++ ^= (unsigned char)VAR_1->Cryptor;
 }
}
