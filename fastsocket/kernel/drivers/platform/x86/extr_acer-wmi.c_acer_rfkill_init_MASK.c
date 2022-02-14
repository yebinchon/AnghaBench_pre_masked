
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*,int ,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct device *VAR_8)
{
 VAR_7 = FUNC_2(VAR_8, VAR_4,
  "acer-wireless", VAR_1);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (FUNC_3(VAR_0)) {
  VAR_6 = FUNC_2(VAR_8,
   VAR_3, "acer-bluetooth",
   VAR_0);
  if (FUNC_0(VAR_6)) {
   FUNC_5(VAR_7);
   FUNC_4(VAR_7);
   return FUNC_1(VAR_6);
  }
 }

 FUNC_7(&VAR_5, FUNC_6(VAR_2));

 return 0;
}
