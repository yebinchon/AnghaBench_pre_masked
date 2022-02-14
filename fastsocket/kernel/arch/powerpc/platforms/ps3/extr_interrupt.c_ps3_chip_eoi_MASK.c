
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_private {int thread_id; int ppe_id; } ;


 struct ps3_private* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_0)
{
 const struct ps3_private *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->ppe_id, VAR_1->thread_id, VAR_0);
}
