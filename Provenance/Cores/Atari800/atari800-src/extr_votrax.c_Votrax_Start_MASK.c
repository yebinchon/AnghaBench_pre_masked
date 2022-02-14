
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Votrax_interface {int dummy; } ;
struct TYPE_5__ {int iSecondStart; int iLengthms; } ;
struct TYPE_4__ {int actPhoneme; int actIntonation; int * lpBuffer; struct Votrax_interface* intf; } ;
typedef int SWORD ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_1 ;

int FUNC_4(void *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2(&VAR_1, 0x00, sizeof VAR_1);


 VAR_1.intf = (struct Votrax_interface *)VAR_2;

 VAR_1.actPhoneme = 0x3f;


 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 <= 0x3f; VAR_3++) {
  int VAR_5;
  int VAR_6;
  int VAR_7;
  VAR_7 = VAR_0[VAR_3].iSecondStart;
  VAR_5 = FUNC_3(VAR_0[VAR_3].iLengthms);
  VAR_6 = VAR_5 + VAR_7;
  if (VAR_6 > VAR_4) VAR_4 = VAR_6;
 }
 VAR_1.lpBuffer = (SWORD*) FUNC_1(VAR_4*sizeof(SWORD));
 FUNC_0(VAR_1.actPhoneme, VAR_1.actIntonation);
 return 0;
}
