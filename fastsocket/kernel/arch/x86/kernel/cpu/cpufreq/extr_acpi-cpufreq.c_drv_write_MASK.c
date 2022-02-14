
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drv_cmd {int mask; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (struct drv_cmd*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int (*) (struct drv_cmd*),struct drv_cmd*,int) ;

__attribute__((used)) static void FUNC_5(struct drv_cmd *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2();
 if (FUNC_0(VAR_1, VAR_0->mask))
  FUNC_1(VAR_0);
 FUNC_4(VAR_0->mask, FUNC_1, VAR_0, 1);
 FUNC_3();
}
