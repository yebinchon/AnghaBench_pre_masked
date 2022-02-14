
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_chip {scalar_t__ type; } ;
struct device_node {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned long) ;
 struct macio_chip* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int) ;

__attribute__((used)) static long
FUNC_5(struct device_node *VAR_8, long VAR_9, long VAR_10)
{
 unsigned long VAR_11;
 struct macio_chip *VAR_12;

 VAR_12 = &VAR_4[0];
 if (VAR_12->type != VAR_6 && VAR_12->type != VAR_7 &&
     VAR_12->type != VAR_5)
  return -VAR_0;

 FUNC_0(VAR_11);
 FUNC_2(VAR_3, VAR_2);
 (void)FUNC_1(VAR_3);
 FUNC_3(VAR_11);
 FUNC_4(10);
 FUNC_0(VAR_11);
 FUNC_2(VAR_3,
  VAR_1);
 FUNC_3(VAR_11);
 FUNC_4(10);

 return 0;
}
