
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
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 struct macio_chip* FUNC_5 (struct device_node*,int ) ;
 int VAR_4 ;
 int FUNC_6 (int) ;

__attribute__((used)) static long FUNC_7(struct device_node *VAR_5, long VAR_6,
     long VAR_7)
{
 struct macio_chip* VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_5(VAR_5, VAR_4);
 if (!VAR_8)
  return -VAR_0;
 FUNC_0(VAR_9);

 if (VAR_7)
  FUNC_2(VAR_1, VAR_3);
 else
  FUNC_1(VAR_1, VAR_3);
 (void)FUNC_3(VAR_1);
 FUNC_6(10);

 if (VAR_7)
  FUNC_1(VAR_2, 0x04000000);
 else
  FUNC_2(VAR_2, 0x04000000);
 (void)FUNC_3(VAR_2);
 FUNC_6(10);
 FUNC_4(VAR_9);

 return 0;
}
