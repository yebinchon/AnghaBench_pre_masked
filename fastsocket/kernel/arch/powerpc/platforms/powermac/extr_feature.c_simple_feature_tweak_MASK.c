
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct macio_chip {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 struct macio_chip* FUNC_5 (struct device_node*,int) ;

__attribute__((used)) static inline int FUNC_6(struct device_node *VAR_1, int VAR_2,
           int VAR_3, u32 VAR_4, int VAR_5)
{
 struct macio_chip* VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_5(VAR_1, VAR_2);
 if (!VAR_6)
  return -VAR_0;
 FUNC_0(VAR_7);
 if (VAR_5)
  FUNC_2(VAR_3, VAR_4);
 else
  FUNC_1(VAR_3, VAR_4);
 (void)FUNC_3(VAR_3);
 FUNC_4(VAR_7);

 return 0;
}
