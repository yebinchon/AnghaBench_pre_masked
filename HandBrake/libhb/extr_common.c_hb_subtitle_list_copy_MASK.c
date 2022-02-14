
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_subtitle_t ;
typedef int hb_list_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int const*,int) ;
 int FUNC_4 (int *) ;

hb_list_t *FUNC_5(const hb_list_t *VAR_0)
{
    hb_list_t *VAR_1 = FUNC_2();
    hb_subtitle_t *VAR_2 = ((void*)0);
    int VAR_3;

    if( VAR_0 )
    {
        for( VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++ )
        {
            if( ( VAR_2 = FUNC_3( VAR_0, VAR_3 ) ) )
            {
                FUNC_0( VAR_1, FUNC_4(VAR_2) );
            }
        }
    }
    return VAR_1;
}
