
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_value_array_t ;
struct TYPE_3__ {int list_audio; } ;
typedef TYPE_1__ hb_title_t ;
typedef int hb_dict_t ;


 int FUNC_0 (int ,char*,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(hb_value_array_t *VAR_1, hb_title_t *VAR_2, int VAR_3)
{

    if (FUNC_3(VAR_2->list_audio, VAR_3-1) == ((void*)0))
    {
        FUNC_0(VAR_0, "Warning: Could not find audio track %d, skipped\n",
                VAR_3);
        return -1;
    }
    hb_dict_t *VAR_4 = FUNC_1();
    FUNC_2(VAR_4, "Track", FUNC_5(VAR_3-1));
    FUNC_4(VAR_1, VAR_4);

    return 0;
}
