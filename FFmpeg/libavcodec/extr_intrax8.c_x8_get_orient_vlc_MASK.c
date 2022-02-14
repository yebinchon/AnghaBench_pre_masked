
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int quant; TYPE_3__* j_orient_vlc; int gb; } ;
typedef TYPE_1__ IntraX8Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_3__** VAR_2 ;

__attribute__((used)) static inline int FUNC_2(IntraX8Context *VAR_3)
{
    if (!VAR_3->j_orient_vlc) {
        int VAR_4 = FUNC_0(VAR_3->gb, 1 + (VAR_3->quant < 13));
        VAR_3->j_orient_vlc = &VAR_2[VAR_3->quant < 13][VAR_4];
    }

    return FUNC_1(VAR_3->gb, VAR_3->j_orient_vlc->table, VAR_0, VAR_1);
}
