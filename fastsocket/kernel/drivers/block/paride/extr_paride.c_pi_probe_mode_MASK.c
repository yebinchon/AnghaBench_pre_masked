
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mode; int port; int reserved; TYPE_1__* proto; } ;
struct TYPE_5__ {int epp_first; } ;
typedef TYPE_2__ PIA ;


 int FUNC_0 (TYPE_2__*,char*,int) ;

__attribute__((used)) static int FUNC_1(PIA * VAR_0, int VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_0->mode != -1) {
  if (VAR_0->mode >= VAR_1)
   return 0;
  VAR_5 = 3;
  if (VAR_0->mode >= VAR_0->proto->epp_first)
   VAR_5 = 8;
  if ((VAR_5 == 8) && (VAR_0->port % 8))
   return 0;
  VAR_0->reserved = VAR_5;
  return (!FUNC_0(VAR_0, VAR_2, VAR_3));
 }
 VAR_4 = -1;
 for (VAR_0->mode = 0; VAR_0->mode < VAR_1; VAR_0->mode++) {
  VAR_5 = 3;
  if (VAR_0->mode >= VAR_0->proto->epp_first)
   VAR_5 = 8;
  if ((VAR_5 == 8) && (VAR_0->port % 8))
   break;
  VAR_0->reserved = VAR_5;
  if (!FUNC_0(VAR_0, VAR_2, VAR_3))
   VAR_4 = VAR_0->mode;
 }
 VAR_0->mode = VAR_4;
 return (VAR_4 > -1);
}
