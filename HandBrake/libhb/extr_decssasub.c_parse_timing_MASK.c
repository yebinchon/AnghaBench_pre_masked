
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (char*,char*,int*,int*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_2( char *VAR_0, int64_t *VAR_1, int64_t *VAR_2 )
{



    int VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10;






    int VAR_11 = FUNC_1(VAR_0, "Dialogue:%*128[^,],"
        "%d:%d:%d.%d,"
        "%d:%d:%d.%d,",
        &VAR_3, &VAR_4, &VAR_5, &VAR_6,
          &VAR_7, &VAR_8, &VAR_9, &VAR_10 );
    if ( VAR_11 != 8 )
        return 1;

    *VAR_1 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
    *VAR_2 = FUNC_0( VAR_7, VAR_8, VAR_9, VAR_10);

    return 0;
}
