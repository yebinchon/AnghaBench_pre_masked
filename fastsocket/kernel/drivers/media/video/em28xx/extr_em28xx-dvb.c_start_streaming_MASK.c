
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct em28xx* priv; } ;
struct em28xx_dvb {TYPE_1__ adapter; } ;
struct em28xx {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct em28xx*,int ,int ,int,int ) ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct em28xx_dvb *VAR_4)
{
 int VAR_5;
 struct em28xx *VAR_6 = VAR_4->adapter.priv;
 int VAR_7;

 FUNC_3(VAR_6->udev, 0, 1);
 VAR_5 = FUNC_2(VAR_6, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_7 = FUNC_1(VAR_6);

 return FUNC_0(VAR_6, VAR_1,
    VAR_2, VAR_7,
    VAR_3);
}
