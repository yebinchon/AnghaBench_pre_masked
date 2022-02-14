
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VP56mb ;
struct TYPE_7__ {TYPE_1__** frames; } ;
typedef TYPE_2__ VP56Context ;
struct TYPE_6__ {scalar_t__ key_frame; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_2(VP56Context *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    VP56mb VAR_6;

    if (VAR_2->frames[VAR_0]->key_frame)
        VAR_6 = VAR_1;
    else
        VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);

    FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

    return 0;
}
