
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptw32_mcs_local_node_t ;
typedef int * pthread_cond_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int **,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3 (pthread_cond_t * VAR_3)
{
  int VAR_4 = 0;
  ptw32_mcs_local_node_t VAR_5;





  FUNC_1(&VAR_2, &VAR_5);
  if (*VAR_3 == VAR_1)
    {
      VAR_4 = FUNC_0 (VAR_3, ((void*)0));
    }
  else if (*VAR_3 == ((void*)0))
    {





      VAR_4 = VAR_0;
    }

  FUNC_2(&VAR_5);

  return VAR_4;
}
