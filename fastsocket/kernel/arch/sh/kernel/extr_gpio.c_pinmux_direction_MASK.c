
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinmux_info {TYPE_1__* gpios; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 scalar_t__ FUNC_1 (struct pinmux_info*,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pinmux_info *VAR_5,
       unsigned VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9 = -VAR_0;

 if (!VAR_5)
  goto err_out;

 VAR_8 = VAR_5->gpios[VAR_6].flags & VAR_4;

 switch (VAR_8) {
 case 132:
  break;
 case 128:
 case 131:
 case 129:
 case 130:
  FUNC_1(VAR_5, VAR_6, VAR_8, VAR_2);
  break;
 default:
  goto err_out;
 }

 if (FUNC_1(VAR_5, VAR_6,
          VAR_7,
          VAR_1) != 0)
  goto err_out;

 if (FUNC_1(VAR_5, VAR_6,
          VAR_7,
          VAR_3) != 0)
  FUNC_0();

 VAR_5->gpios[VAR_6].flags &= ~VAR_4;
 VAR_5->gpios[VAR_6].flags |= VAR_7;

 VAR_9 = 0;
 err_out:
 return VAR_9;
}
