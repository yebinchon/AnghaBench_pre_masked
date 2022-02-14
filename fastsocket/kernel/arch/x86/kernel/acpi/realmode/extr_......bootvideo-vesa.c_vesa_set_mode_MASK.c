
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mode_info {int mode; int y; int x; } ;
struct biosregs {int ax; int cx; size_t di; int bx; } ;
struct TYPE_3__ {int mode_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int FUNC_4(struct mode_info *VAR_6)
{
 struct biosregs VAR_7, VAR_8;
 int VAR_9;
 u16 VAR_10 = VAR_6->mode - VAR_0;

 FUNC_2(&VAR_5, 0, sizeof VAR_5);

 FUNC_0(&VAR_7);
 VAR_7.ax = 0x4f01;
 VAR_7.cx = VAR_10;
 VAR_7.di = (size_t)&VAR_5;
 FUNC_1(0x10, &VAR_7, &VAR_8);

 if (VAR_8.ax != 0x004f)
  return -1;

 if ((VAR_5.mode_attr & 0x15) == 0x05) {

  VAR_9 = 0;






 } else {
  return -1;
 }


 FUNC_0(&VAR_7);
 VAR_7.ax = 0x4f02;
 VAR_7.bx = VAR_10;
 FUNC_1(0x10, &VAR_7, &VAR_8);

 if (VAR_8.ax != 0x004f)
  return -1;

 VAR_4 = VAR_9;
 if (!VAR_9) {

  VAR_2 = VAR_6->x;
  VAR_3 = VAR_6->y;
  VAR_1 = 1;
 } else {

  FUNC_3();
 }

 return 0;
}
