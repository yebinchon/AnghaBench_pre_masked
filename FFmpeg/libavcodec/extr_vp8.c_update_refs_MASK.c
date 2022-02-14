
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* update_altref; void* update_golden; int c; } ;
typedef TYPE_1__ VP8Context ;
typedef int VP56RangeCoder ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(VP8Context *VAR_2)
{
    VP56RangeCoder *VAR_3 = &VAR_2->c;

    int VAR_4 = FUNC_1(VAR_3);
    int VAR_5 = FUNC_1(VAR_3);

    VAR_2->update_golden = FUNC_0(VAR_2, VAR_4, VAR_0);
    VAR_2->update_altref = FUNC_0(VAR_2, VAR_5, VAR_1);
}
