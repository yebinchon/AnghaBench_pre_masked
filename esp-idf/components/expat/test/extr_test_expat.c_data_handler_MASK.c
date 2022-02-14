
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ output_off; scalar_t__ output; } ;
typedef TYPE_1__ user_data_t ;
typedef int XML_Char ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,char*,char*) ;
 int FUNC_3 (char*,int const*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, const XML_Char *VAR_1, int VAR_2)
{
    user_data_t *VAR_3 = (user_data_t *) VAR_0;

    FUNC_1(VAR_3);


    char VAR_4[VAR_2+1];
    FUNC_3(VAR_4, VAR_1, VAR_2+1);

    int VAR_5 = FUNC_2(VAR_3->output + VAR_3->output_off, sizeof(VAR_3->output) - VAR_3->output_off,
                "%s", VAR_4);
    FUNC_0(FUNC_4(VAR_4), VAR_5);
    VAR_3->output_off += VAR_5;
}
