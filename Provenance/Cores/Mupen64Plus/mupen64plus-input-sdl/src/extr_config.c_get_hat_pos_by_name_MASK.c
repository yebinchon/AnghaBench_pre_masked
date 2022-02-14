
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2( const char *VAR_5 )
{
    if( !FUNC_1( VAR_5, "up" ) )
        return VAR_4;
    if( !FUNC_1( VAR_5, "down" ) )
        return VAR_1;
    if( !FUNC_1( VAR_5, "left" ) )
        return VAR_2;
    if( !FUNC_1( VAR_5, "right" ) )
        return VAR_3;
    FUNC_0(VAR_0, "get_hat_pos_by_name(): direction '%s' unknown", VAR_5);
    return -1;
}
