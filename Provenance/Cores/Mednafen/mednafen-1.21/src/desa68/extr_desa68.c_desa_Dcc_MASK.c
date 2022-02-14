
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int reg0; int status; int ea; int branch; scalar_t__* s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (char) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2()
{
  FUNC_0(('DB'<<16) + VAR_6[(VAR_5.w>>8)&15]);
  FUNC_0(' D0,' + (VAR_5.reg0<<8));
  FUNC_1(VAR_3, VAR_4-VAR_3, 0);

  VAR_5.s[-4] = 0;
  VAR_5.branch = VAR_5.ea;
  VAR_5.status = VAR_2 | VAR_0 | VAR_1;
}
