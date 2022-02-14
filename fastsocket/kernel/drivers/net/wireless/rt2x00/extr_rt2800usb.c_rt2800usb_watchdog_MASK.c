
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rt2x00_dev*,char*) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6;

 FUNC_2(VAR_4, VAR_1, &VAR_6);
 if (FUNC_0(VAR_6, VAR_2)) {
  FUNC_1(VAR_4, "TX HW queue 0 timed out, invoke forced kick\n");

  FUNC_3(VAR_4, VAR_0, 0xf40012);

  for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
   FUNC_5(10);
   if (!FUNC_0(VAR_6, VAR_2))
    break;
  }

  FUNC_3(VAR_4, VAR_0, 0xf40006);
 }

 FUNC_2(VAR_4, VAR_1, &VAR_6);
 if (FUNC_0(VAR_6, VAR_3)) {
  FUNC_1(VAR_4, "TX HW queue 1 timed out, invoke forced kick\n");

  FUNC_3(VAR_4, VAR_0, 0xf4000a);

  for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
   FUNC_5(10);
   if (!FUNC_0(VAR_6, VAR_3))
    break;
  }

  FUNC_3(VAR_4, VAR_0, 0xf40006);
 }

 FUNC_4(VAR_4);
}
