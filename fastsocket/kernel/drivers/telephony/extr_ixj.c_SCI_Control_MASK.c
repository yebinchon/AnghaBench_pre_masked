
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c0; int c1; } ;
struct TYPE_7__ {int byte; TYPE_1__ bits; } ;
struct TYPE_8__ {int XILINXbase; TYPE_2__ pld_scrw; } ;
typedef TYPE_3__ IXJ ;






 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(IXJ *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 128:
  VAR_0->pld_scrw.bits.c0 = 0;

  VAR_0->pld_scrw.bits.c1 = 0;

  break;
 case 131:
  VAR_0->pld_scrw.bits.c0 = 1;

  VAR_0->pld_scrw.bits.c1 = 0;

  break;
 case 129:
  VAR_0->pld_scrw.bits.c0 = 0;

  VAR_0->pld_scrw.bits.c1 = 1;

  break;
 case 130:
  VAR_0->pld_scrw.bits.c0 = 1;

  VAR_0->pld_scrw.bits.c1 = 1;

  break;
 default:
  return 0;
  break;
 }
 FUNC_1(VAR_0->pld_scrw.byte, VAR_0->XILINXbase);

 switch (VAR_1) {
 case 128:
  return 1;
  break;
 case 131:
 case 129:
 case 130:
  if (!FUNC_0(VAR_0))
   return 0;
  break;
 default:
  return 0;
  break;
 }
 return 1;
}
