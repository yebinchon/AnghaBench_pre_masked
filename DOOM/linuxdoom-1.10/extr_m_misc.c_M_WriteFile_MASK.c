
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int) ;
 int FUNC_2 (int,void*,int) ;

boolean
FUNC_3
( char const* VAR_4,
  void* VAR_5,
  int VAR_6 )
{
    int VAR_7;
    int VAR_8;

    VAR_7 = FUNC_1 ( VAR_4, VAR_3 | VAR_1 | VAR_2 | VAR_0, 0666);

    if (VAR_7 == -1)
 return 0;

    VAR_8 = FUNC_2 (VAR_7, VAR_5, VAR_6);
    FUNC_0 (VAR_7);

    if (VAR_8 < VAR_6)
 return 0;

    return 1;
}
