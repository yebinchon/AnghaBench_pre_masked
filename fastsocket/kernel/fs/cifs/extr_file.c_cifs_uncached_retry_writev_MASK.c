
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_writedata {TYPE_1__* cfile; } ;
struct TYPE_2__ {scalar_t__ invalidHandle; } ;


 int VAR_0 ;
 int FUNC_0 (struct cifs_writedata*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_2(struct cifs_writedata *VAR_1)
{
 int VAR_2;

 do {
  if (VAR_1->cfile->invalidHandle) {
   VAR_2 = FUNC_1(VAR_1->cfile, 0);
   if (VAR_2 != 0)
    continue;
  }
  VAR_2 = FUNC_0(VAR_1);
 } while (VAR_2 == -VAR_0);

 return VAR_2;
}
