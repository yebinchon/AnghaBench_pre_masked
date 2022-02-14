
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,unsigned char*,int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_1(int VAR_7)
{
 unsigned char VAR_8;
 unsigned char VAR_9;
 unsigned char VAR_10[2];
 int VAR_11, VAR_12;

 if (VAR_6[VAR_7].type != VAR_5)
  return -VAR_1;
 VAR_12 = VAR_6[VAR_7].id;
 if (VAR_12 == VAR_4)
  return -VAR_1;

 VAR_11 = FUNC_0(0x2b, &VAR_8, 1);
 if (VAR_11 != 1)
  return -VAR_2;
 if ((VAR_8 & (1 << VAR_12)) != 0)
  return -VAR_0;
 VAR_11 = FUNC_0(0x2d, &VAR_9, 1);
 if (VAR_11 != 1)
  return -VAR_2;
 if ((VAR_9 & (1 << VAR_12)) == 0)
  return -VAR_3;


 VAR_11 = FUNC_0(0x30 + (VAR_12 * 2), VAR_10, 1);
 if (VAR_11 != 1)
  return -VAR_2;

 return (VAR_10[0] * 1000) / 2559;
}
