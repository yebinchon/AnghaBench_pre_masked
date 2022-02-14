
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {scalar_t__ finished; } ;
typedef int mce_banks_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(struct mce *VAR_0)
{
 unsigned long VAR_1;
 mce_banks_t VAR_2;

 FUNC_3(&VAR_2, 0xff, sizeof(mce_banks_t));
 FUNC_1(VAR_1);
 FUNC_2(0, &VAR_2);
 FUNC_0(VAR_1);
 VAR_0->finished = 0;
}
