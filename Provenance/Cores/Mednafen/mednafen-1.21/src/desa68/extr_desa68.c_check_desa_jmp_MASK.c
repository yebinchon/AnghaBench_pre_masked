
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int adrmode0; int opsz; int status; int ea; int branch; int szchar; int reg0; int mode3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4()
{
  int VAR_4 = 03744;
  if((VAR_3.w&07600) != 07200) {
    return 0;
  }

  if(VAR_4 & (1<<VAR_3.adrmode0)) {
    int VAR_5 = 'MP ', VAR_6 = VAR_2 | VAR_0;
    FUNC_1('J');
    if (VAR_3.opsz==2) {
      VAR_6 = VAR_2 | VAR_0 | VAR_1;
      VAR_5 = 'SR ';
    }
    VAR_3.status = VAR_6;
    FUNC_0(VAR_5);
    FUNC_3(VAR_3.mode3, VAR_3.reg0, VAR_3.szchar);
    VAR_3.branch = VAR_3.ea;

    return 1;
  }


  FUNC_2();
  return 1;

}
