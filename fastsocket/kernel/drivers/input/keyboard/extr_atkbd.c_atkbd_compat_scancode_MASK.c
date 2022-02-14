
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbd {int set; int emul; } ;



__attribute__((used)) static unsigned int FUNC_0(struct atkbd *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->set == 3) {
  if (VAR_0->emul == 1)
   VAR_1 |= 0x100;
        } else {
  VAR_1 = (VAR_1 & 0x7f) | ((VAR_1 & 0x80) << 1);
  if (VAR_0->emul == 1)
   VAR_1 |= 0x80;
 }

 return VAR_1;
}
