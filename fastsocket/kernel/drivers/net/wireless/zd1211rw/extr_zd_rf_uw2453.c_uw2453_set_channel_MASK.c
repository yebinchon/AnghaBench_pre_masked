
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct zd_rf {int dummy; } ;
struct zd_ioreq16 {int member_1; int member_0; } ;
struct zd_chip {int dummy; } ;
struct TYPE_2__ {int config; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (struct zd_rf*) ;

 int VAR_1 ;





 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*,int ) ;
 int ** VAR_2 ;
 int FUNC_5 (struct zd_chip*,int ,int) ;
 int FUNC_6 (struct zd_chip*,int ) ;
 int FUNC_7 (struct zd_chip*,int,int ) ;
 int FUNC_8 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;
 struct zd_chip* FUNC_9 (struct zd_rf*) ;

__attribute__((used)) static int FUNC_10(struct zd_rf *VAR_3, u8 VAR_4)
{
 int VAR_5;
 u16 VAR_6;
 int VAR_7 = FUNC_2(VAR_3)->config;
 bool VAR_8 = (VAR_7 == -1);
 struct zd_chip *VAR_9 = FUNC_9(VAR_3);

 static const struct zd_ioreq16 VAR_10[] = {
  { 129, 0x30 }, { 128, 0x30 }, { 130, 0x58 },
  { 133, 0xf0 }, { 132, 0x1b }, { 131, 0x58 },
 };

 VAR_5 = FUNC_5(VAR_9, VAR_4, VAR_8);
 if (VAR_5)
  return VAR_5;

 if (VAR_8)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_2[VAR_7][FUNC_1(VAR_4)];

 VAR_5 = FUNC_6(VAR_9, VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_9);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_8(VAR_9, VAR_10, FUNC_0(VAR_10));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_9, VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_7(VAR_9, 0x06, VAR_1);
}
