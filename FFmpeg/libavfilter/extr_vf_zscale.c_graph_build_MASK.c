
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zimg_image_format ;
typedef int zimg_graph_builder_params ;
typedef int zimg_filter_graph ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void**) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,size_t*) ;

__attribute__((used)) static int FUNC_7(zimg_filter_graph **VAR_1, zimg_graph_builder_params *VAR_2,
                       zimg_image_format *VAR_3, zimg_image_format *VAR_4,
                       void **VAR_5, size_t *VAR_6)
{
    int VAR_7;
    size_t VAR_8;

    FUNC_5(*VAR_1);
    *VAR_1 = FUNC_4(VAR_3, VAR_4, VAR_2);
    if (!*VAR_1)
        return FUNC_3(((void*)0));

    VAR_7 = FUNC_6(*VAR_1, &VAR_8);
    if (VAR_7)
        return FUNC_3(((void*)0));

    if (VAR_8 > *VAR_6) {
        FUNC_1(VAR_5);
        *VAR_5 = FUNC_2(VAR_8);
        if (!*VAR_5)
            return FUNC_0(VAR_0);

        *VAR_6 = VAR_8;
    }

    return 0;
}
