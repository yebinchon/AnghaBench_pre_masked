
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct em28xx* priv; } ;
struct em28xx_dvb {TYPE_1__ adapter; } ;
struct em28xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*,int ) ;
 int FUNC_1 (struct em28xx*) ;

__attribute__((used)) static int FUNC_2(struct em28xx_dvb *VAR_1)
{
 struct em28xx *VAR_2 = VAR_1->adapter.priv;

 FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_0);

 return 0;
}
