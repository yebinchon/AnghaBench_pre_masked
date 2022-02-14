
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int text; } ;
typedef TYPE_2__ json_error_t ;
typedef int hb_value_array_t ;
struct TYPE_9__ {TYPE_1__* plane; } ;
typedef TYPE_3__ hb_image_t ;
typedef int hb_dict_t ;
struct TYPE_7__ {int size; int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_3__* FUNC_2 (int,int,int) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int * FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_2__*,int ,char*,char*,int ,...) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int **) ;
 int FUNC_12 (char const**) ;

hb_image_t* FUNC_13(char *VAR_1)
{
    int VAR_2;
    json_error_t VAR_3;
    hb_dict_t * VAR_4;
    int VAR_5, VAR_6, VAR_7;
    VAR_4 = FUNC_6(VAR_1);
    VAR_2 = FUNC_8(VAR_4, &VAR_3, 0,
        "{"

        "s:i, s:i, s:i,"
        "}",
        "Format", FUNC_10(&VAR_5),
        "Width", FUNC_10(&VAR_6),
        "Height", FUNC_9(&VAR_7)
    );
    if (VAR_2 < 0)
    {
        FUNC_1("image: json unpack failure: %s", VAR_3.text);
        FUNC_5(&VAR_4);
        return ((void*)0);
    }

    hb_image_t *VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
    if (VAR_8 == ((void*)0))
    {
        FUNC_5(&VAR_4);
        return ((void*)0);
    }

    hb_value_array_t * VAR_9 = ((void*)0);
    VAR_2 = FUNC_8(VAR_4, &VAR_3, 0,
                                 "{s:o}", "Planes", FUNC_11(&VAR_9));
    if (VAR_2 < 0)
    {
        FUNC_1("image::planes: json unpack failure: %s", VAR_3.text);
        FUNC_5(&VAR_4);
        return VAR_8;
    }
    if (FUNC_7(VAR_9) == VAR_0)
    {
        int VAR_10, VAR_11;
        hb_dict_t *VAR_12;
        VAR_11 = FUNC_4(VAR_9);
        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
        {
            VAR_12 = FUNC_3(VAR_9, VAR_10);
            const char *VAR_13 = ((void*)0);
            int VAR_14;
            VAR_2 = FUNC_8(VAR_12, &VAR_3, 0,
                                         "{s:i, s:s}",
                                         "Size", FUNC_10(&VAR_14),
                                         "Data", FUNC_12(&VAR_13));
            if (VAR_2 < 0)
            {
                FUNC_1("image::plane::data: json unpack failure: %s", VAR_3.text);
                FUNC_5(&VAR_4);
                return VAR_8;
            }
            if (VAR_8->plane[VAR_10].size > 0 && VAR_13 != ((void*)0))
            {
                FUNC_0(VAR_8->plane[VAR_10].data, VAR_13,
                                 VAR_8->plane[VAR_10].size);
            }
        }
    }
    FUNC_5(&VAR_4);

    return VAR_8;
}
