
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drv_cmd {int mask; scalar_t__ val; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct drv_cmd*,int) ;

__attribute__((used)) static void FUNC_2(struct drv_cmd *VAR_1)
{
 VAR_1->val = 0;

 FUNC_1(FUNC_0(VAR_1->mask), VAR_0, VAR_1, 1);
}
