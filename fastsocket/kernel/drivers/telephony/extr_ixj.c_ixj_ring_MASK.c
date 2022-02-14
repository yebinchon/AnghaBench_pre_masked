
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ringing; } ;
struct TYPE_8__ {char maxrings; TYPE_1__ flags; } ;
typedef TYPE_2__ IXJ ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,unsigned long) ;

__attribute__((used)) static int FUNC_7(IXJ *VAR_3)
{
 char VAR_4;
 unsigned long VAR_5;

 VAR_3->flags.ringing = 1;
 if (FUNC_0(VAR_3) & 1) {
  FUNC_1(VAR_3);
  VAR_3->flags.ringing = 0;
  return 1;
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->maxrings; VAR_4++) {
  VAR_5 = VAR_2 + (1 * VAR_1);
  FUNC_2(VAR_3);
  while (FUNC_6(VAR_2, VAR_5)) {
   if (FUNC_0(VAR_3) & 1) {
    FUNC_1(VAR_3);
    VAR_3->flags.ringing = 0;
    return 1;
   }
   FUNC_4(1);
   if (FUNC_5(VAR_0))
    break;
  }
  VAR_5 = VAR_2 + (3 * VAR_1);
  FUNC_1(VAR_3);
  while (FUNC_6(VAR_2, VAR_5)) {
   if (FUNC_0(VAR_3) & 1) {
    FUNC_3(10);
    if (FUNC_0(VAR_3) & 1) {
     VAR_3->flags.ringing = 0;
     return 1;
    }
   }
   FUNC_4(1);
   if (FUNC_5(VAR_0))
    break;
  }
 }
 FUNC_1(VAR_3);
 VAR_3->flags.ringing = 0;
 return 0;
}
