
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct corgi_lcd {int dummy; } ;
struct TYPE_2__ {int phadadj; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct corgi_lcd*,int ,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct corgi_lcd *VAR_4, int VAR_5)
{
 int VAR_6;

 switch(VAR_5) {
 case 128:

  VAR_6 = VAR_3.phadadj;
  VAR_6 = (VAR_6 < 0) ? VAR_2 :
      VAR_2 | ((VAR_6 & 0xf) << 1);
  break;
 case 129:
 default:

  VAR_6 = (VAR_0 << 1) | VAR_2;
  break;
 }

 FUNC_0(VAR_4, VAR_1, VAR_6);
}
