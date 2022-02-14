
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {scalar_t__* text; int textfile; } ;
typedef TYPE_1__ DrawTextContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__**,size_t*,int ,TYPE_2__*) ;
 int FUNC_2 (scalar_t__*,size_t) ;
 int FUNC_3 (TYPE_2__*,int ,char*,int ) ;
 scalar_t__* FUNC_4 (scalar_t__*,size_t) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,size_t) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_3)
{
    DrawTextContext *VAR_4 = VAR_3->priv;
    int VAR_5;
    uint8_t *VAR_6;
    uint8_t *VAR_7;
    size_t VAR_8;

    if ((VAR_5 = FUNC_1(VAR_4->textfile, &VAR_6, &VAR_8, 0, VAR_3)) < 0) {
        FUNC_3(VAR_3, VAR_0,
               "The text file '%s' could not be read or is empty\n",
               VAR_4->textfile);
        return VAR_5;
    }

    if (VAR_8 > VAR_2 - 1 || !(VAR_7 = FUNC_4(VAR_4->text, VAR_8 + 1))) {
        FUNC_2(VAR_6, VAR_8);
        return FUNC_0(VAR_1);
    }
    VAR_4->text = VAR_7;
    FUNC_5(VAR_4->text, VAR_6, VAR_8);
    VAR_4->text[VAR_8] = 0;
    FUNC_2(VAR_6, VAR_8);

    return 0;
}
