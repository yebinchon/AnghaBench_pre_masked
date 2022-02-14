
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
 int VAR_7 ;

__attribute__((used)) static int FUNC_1(int VAR_8, int VAR_9)
{
 unsigned char VAR_10;
 unsigned char VAR_11;
 unsigned char VAR_12[2];
 int VAR_13, VAR_14, VAR_15;

 if (VAR_6[VAR_8].type != VAR_5)
  return -VAR_1;
 VAR_14 = VAR_6[VAR_8].id;
 if (VAR_14 == VAR_4)
  return -VAR_1;

 VAR_13 = FUNC_0(0xb, &VAR_10, 1);
 if (VAR_13 != 1)
  return -VAR_2;
 if ((VAR_10 & (1 << VAR_14)) != 0)
  return -VAR_0;
 VAR_13 = FUNC_0(0xd, &VAR_11, 1);
 if (VAR_13 != 1)
  return -VAR_2;
 if ((VAR_11 & (1 << VAR_14)) == 0)
  return -VAR_3;


 VAR_15 = VAR_9 ? 0x10 : 0x11;
 VAR_13 = FUNC_0(VAR_15 + (VAR_14 * 2), VAR_12, 2);
 if (VAR_13 != 2)
  return -VAR_2;

 return (VAR_12[0] << (8 - VAR_7)) | VAR_12[1] >> VAR_7;
}
