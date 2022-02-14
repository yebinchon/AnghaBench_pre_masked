
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int graph; int output; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_9__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
struct TYPE_10__ {char* human_readable_desc; int output; } ;
typedef TYPE_3__ hb_filter_info_t ;


 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static hb_filter_info_t * FUNC_6(hb_filter_object_t * VAR_1)
{
    hb_filter_private_t * VAR_2 = VAR_1->private_data;
    hb_filter_info_t * VAR_3;

    if (VAR_0 < 2)
    {

        return ((void*)0);
    }
    if (VAR_2 == ((void*)0))
    {
        return ((void*)0);
    }

    VAR_3 = FUNC_0(1, sizeof(hb_filter_info_t));
    if (VAR_3 == ((void*)0))
    {
        FUNC_3("avfilter_info: allocation failure");
        return ((void*)0);
    }
    VAR_3->output = VAR_2->output;
    VAR_3->human_readable_desc = FUNC_4(1024);
    if (VAR_3->human_readable_desc == ((void*)0))
    {
        FUNC_1(VAR_3);
        FUNC_3("avfilter_info: allocation failure");
        return ((void*)0);
    }
    VAR_3->human_readable_desc[0] = 0;

    char * VAR_4 = VAR_3->human_readable_desc;
    const char * VAR_5 = FUNC_2(VAR_2->graph);
    while (VAR_5 != ((void*)0) && *VAR_5 != 0)
    {

        char * VAR_6 = FUNC_5(VAR_5, ',');
        char * VAR_7 = FUNC_5(VAR_5, '\'');
        if (VAR_6 != ((void*)0) && VAR_7 != ((void*)0) && VAR_7 < VAR_6)
        {

            VAR_7 = FUNC_5(VAR_7+1, '\'');
            VAR_6 = FUNC_5(VAR_5, ',');
        }

        int VAR_8 = 1;
        while (*VAR_5 != 0 && (VAR_6 == ((void*)0) || VAR_5 < VAR_6))
        {
            switch (*VAR_5)
            {
                case '=':
                    if (VAR_8)
                    {
                        *VAR_4++ = ':';
                        *VAR_4++ = ' ';
                        VAR_8 = 0;
                    }
                    else
                    {
                        *VAR_4++ = '=';
                    }
                    break;

                case ':':
                    *VAR_4++ = ',';
                    *VAR_4++ = ' ';
                    break;

                case '\'':
                case ' ':
                    break;

                default:
                    *VAR_4++ = *VAR_5;

            }
            VAR_5++;
        }
        if (*VAR_5 != 0)
        {
            *VAR_4++ = '\n';
            VAR_5++;
        }
    }
    *VAR_4 = 0;
    return VAR_3;
}
