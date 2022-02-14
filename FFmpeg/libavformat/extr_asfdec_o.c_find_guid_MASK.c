
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ff_asf_guid ;
struct TYPE_5__ {int guid; } ;
typedef TYPE_1__ GUIDParseTable ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static const GUIDParseTable *FUNC_3(ff_asf_guid VAR_1)
{
    int VAR_2, VAR_3;
    const GUIDParseTable *VAR_4;

    FUNC_2(VAR_1);
    VAR_4 = VAR_0;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if (!(VAR_3 = FUNC_1(VAR_1, VAR_4->guid, sizeof(VAR_4->guid))))
            return VAR_4;
        VAR_4++;
    }

    return ((void*)0);
}
