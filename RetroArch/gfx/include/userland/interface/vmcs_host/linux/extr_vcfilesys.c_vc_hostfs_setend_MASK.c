
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int ) ;

int FUNC_2(int VAR_1)
{
    off_t VAR_2;

    if (( VAR_2 = FUNC_1( VAR_1, 0, VAR_0 )) != (off_t)-1 )
    {
        if ( FUNC_0( VAR_1, VAR_2 ) == 0 )
        {
            return 0;
        }
    }
   return -1;
}
