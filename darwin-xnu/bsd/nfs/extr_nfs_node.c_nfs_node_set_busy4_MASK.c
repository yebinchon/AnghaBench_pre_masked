
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int nfsnode_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int*) ;

int
FUNC_3(nfsnode_t VAR_0, nfsnode_t VAR_1, nfsnode_t VAR_2, nfsnode_t VAR_3, thread_t VAR_4)
{
 nfsnode_t VAR_5[4];
 int VAR_6, VAR_7, VAR_8;

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, &VAR_7);


 for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
  if ((VAR_8 = FUNC_1(VAR_5[VAR_6], VAR_4))) {

   while (--VAR_6 >= 0)
    FUNC_0(VAR_5[VAR_6]);
   return (VAR_8);
  }
 return (0);
}
