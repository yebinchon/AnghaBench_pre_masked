
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (void*,int) ;
 int * FUNC_4 (int ,int,void**) ;
 void** VAR_0 ;
 unsigned int VAR_1 ;

void*
FUNC_5
( int VAR_2,
  int VAR_3 )
{
    byte* VAR_4;

    if ((unsigned)VAR_2 >= VAR_1)
 FUNC_0 ("W_CacheLumpNum: %i >= numlumps",VAR_2);

    if (!VAR_0[VAR_2])
    {



 VAR_4 = FUNC_4 (FUNC_1 (VAR_2), VAR_3, &VAR_0[VAR_2]);
 FUNC_2 (VAR_2, VAR_0[VAR_2]);
    }
    else
    {

 FUNC_3 (VAR_0[VAR_2],VAR_3);
    }

    return VAR_0[VAR_2];
}
