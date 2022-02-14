
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_7__ {TYPE_1__ x; } ;
struct TYPE_6__ {scalar_t__ file; int y; } ;
typedef TYPE_2__ Coordinate ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,int,...) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_2(Coordinate *VAR_7) {
 if (VAR_7->file && VAR_7->file != VAR_4) {
  int VAR_8 = FUNC_0(1);
  FUNC_1(".stabs \"%s\",0x%x,0,0,%s%d\n", VAR_7->file, VAR_2, VAR_6, VAR_8);
  FUNC_1("%s%d:\n", VAR_6, VAR_8);
  VAR_4 = VAR_7->file;
 }
 if (VAR_0 == &VAR_5)
  FUNC_1(".stabd 0x%x,0,%d\n", VAR_1, VAR_7->y);
 else {
  int VAR_9 = FUNC_0(1);
  FUNC_1(".stabn 0x%x,0,%d,%s%d-%s\n", VAR_1, VAR_7->y,
   VAR_6, VAR_9, VAR_3->x.name);
  FUNC_1("%s%d:\n", VAR_6, VAR_9);
 }
}
