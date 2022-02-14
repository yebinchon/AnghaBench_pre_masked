
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int* VAR_5 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_2( int VAR_7 )
{
   int VAR_8 = FUNC_0(VAR_7 + VAR_0);
   if (VAR_4 != VAR_6 && !VAR_1 && VAR_2[(VAR_8 & 0xc0) >> 6 ] != VAR_3)
    return 0;
   return VAR_5[(VAR_8 & 0x0e) >> 1];
}
