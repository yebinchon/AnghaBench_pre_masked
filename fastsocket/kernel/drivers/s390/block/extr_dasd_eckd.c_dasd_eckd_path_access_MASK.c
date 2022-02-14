
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int identifier; } ;
struct dasd_gneq {TYPE_1__ flags; } ;



__attribute__((used)) static unsigned char FUNC_0(void *VAR_0, int VAR_1)
{
 struct dasd_gneq *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = VAR_1 / sizeof(*VAR_2);
 VAR_2 = (struct dasd_gneq *)VAR_0;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
  if (VAR_2->flags.identifier == 2) {
   VAR_5 = 1;
   break;
  }
  VAR_2++;
 }
 if (VAR_5)
  return ((char *)VAR_2)[18] & 0x07;
 else
  return 0;
}
