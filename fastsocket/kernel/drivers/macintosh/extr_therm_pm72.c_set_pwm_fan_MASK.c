
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,unsigned char*,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(int VAR_4, int VAR_5)
{
 unsigned char VAR_6[2];
 int VAR_7, VAR_8;

 if (VAR_3[VAR_4].type != VAR_2)
  return -VAR_0;
 VAR_8 = VAR_3[VAR_4].id;
 if (VAR_8 == VAR_1)
  return -VAR_0;

 if (VAR_5 < 10)
  VAR_5 = 10;
 else if (VAR_5 > 100)
  VAR_5 = 100;
 VAR_5 = (VAR_5 * 2559) / 1000;
 VAR_6[0] = VAR_5;
 VAR_7 = FUNC_0(0x30 + (VAR_8 * 2), VAR_6, 1);
 if (VAR_7 < 0)
  return VAR_7;
 return 0;
}
