
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_private {struct mon_private** msg_array; } ;


 int VAR_0 ;
 int FUNC_0 (struct mon_private*) ;

__attribute__((used)) static void FUNC_1(struct mon_private *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->msg_array[VAR_2])
   FUNC_0(VAR_1->msg_array[VAR_2]);
 FUNC_0(VAR_1);
}
