
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opsz; int w; int adrmode0; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1()
{
  int VAR_1, VAR_2;

  if(VAR_0.opsz==3)
    return 0;


  else if(VAR_0.w&0400)
    {
      VAR_1 = 00775;
      VAR_2 = 'EOR';
    }


  else
    {
      VAR_1 = (!VAR_0.opsz) ? 07775 : 07777;
      VAR_2 = 'CMP';
    }

  if(!(VAR_1&(1<<VAR_0.adrmode0)))
    return 0;

  FUNC_0(VAR_2);
  return 1;
}
