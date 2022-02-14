
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (short*,int,int) ;
 int* VAR_4 ;

int
FUNC_4
( int VAR_5,
  int VAR_6,
  int VAR_7 )
{
    int VAR_8, VAR_9;


    FUNC_2(VAR_1, VAR_3, VAR_5*VAR_6);



    FUNC_3((short*)VAR_3, VAR_5/2, VAR_6);
    FUNC_3((short*)VAR_2, VAR_5/2, VAR_6);



    VAR_4 = (int *) FUNC_1(VAR_5*sizeof(int), VAR_0, 0);
    VAR_4[0] = -(FUNC_0()%16);
    for (VAR_8=1;VAR_8<VAR_5;VAR_8++)
    {
 VAR_9 = (FUNC_0()%3) - 1;
 VAR_4[VAR_8] = VAR_4[VAR_8-1] + VAR_9;
 if (VAR_4[VAR_8] > 0) VAR_4[VAR_8] = 0;
 else if (VAR_4[VAR_8] == -16) VAR_4[VAR_8] = -15;
    }

    return 0;
}
