
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3305_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3305_state*,int ,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct lgdt3305_state *VAR_1)
{
 int VAR_2;

 FUNC_0("\n");

 VAR_2 = FUNC_2(VAR_1, VAR_0, 0, 0);
 if (FUNC_1(VAR_2))
  goto fail;

 FUNC_3(20);
 VAR_2 = FUNC_2(VAR_1, VAR_0, 0, 1);
fail:
 return VAR_2;
}
