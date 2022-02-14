
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_list_t ;
typedef int hb_attachment_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int const*) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int const*,int) ;

hb_list_t *FUNC_5(const hb_list_t *VAR_0)
{
    hb_list_t *VAR_1 = FUNC_3();
    hb_attachment_t *VAR_2 = ((void*)0);
    int VAR_3;

    if( VAR_0 )
    {
        for( VAR_3 = 0; VAR_3 < FUNC_2(VAR_0); VAR_3++ )
        {
            if( ( VAR_2 = FUNC_4( VAR_0, VAR_3 ) ) )
            {
                FUNC_1( VAR_1, FUNC_0(VAR_2) );
            }
        }
    }
    return VAR_1;
}
