
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_chip {int dummy; } ;
struct device_node {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 struct macio_chip* FUNC_5 (struct device_node*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static long FUNC_7(struct device_node *VAR_4, long VAR_5,
     long VAR_6)
{
 struct macio_chip* VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_5(VAR_4, 0);
 if (!VAR_7)
  return -VAR_0;
 if (VAR_6) {
  FUNC_0(VAR_8);
  FUNC_2(VAR_1, VAR_2);
  FUNC_2(VAR_1, VAR_3);
  FUNC_4(VAR_8);
  (void)FUNC_3(VAR_1);
  FUNC_6(10);
  FUNC_0(VAR_8);
  FUNC_1(VAR_1, VAR_3);
  FUNC_4(VAR_8);
  (void)FUNC_3(VAR_1);
  FUNC_6(10);
 } else {
  FUNC_0(VAR_8);
  FUNC_1(VAR_1, VAR_2);
  FUNC_4(VAR_8);
 }
 return 0;
}
