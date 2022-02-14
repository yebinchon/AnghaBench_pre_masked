
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,unsigned char*,int) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(int VAR_6, int VAR_7)
{
 unsigned char VAR_8[2];
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_4[VAR_6].type != VAR_3)
  return -VAR_0;
 VAR_10 = VAR_4[VAR_6].id;
 if (VAR_10 == VAR_2)
  return -VAR_0;

 VAR_11 = 2400 >> VAR_5;
 VAR_12 = 56000 >> VAR_5;

 if (VAR_7 < VAR_11)
  VAR_7 = VAR_11;
 else if (VAR_7 > VAR_12)
  VAR_7 = VAR_12;
 VAR_8[0] = VAR_7 >> (8 - VAR_5);
 VAR_8[1] = VAR_7 << VAR_5;
 VAR_9 = FUNC_0(0x10 + (VAR_10 * 2), VAR_8, 2);
 if (VAR_9 < 0)
  return -VAR_1;
 return 0;
}
