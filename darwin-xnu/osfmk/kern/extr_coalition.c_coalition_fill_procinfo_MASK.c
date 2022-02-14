
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procinfo_coalinfo {int coalition_tasks; int coalition_type; int coalition_id; } ;
struct coalition {int type; int id; } ;


 int FUNC_0 (struct coalition*) ;

__attribute__((used)) static void FUNC_1(struct coalition *VAR_0,
        struct procinfo_coalinfo *VAR_1)
{
 VAR_1->coalition_id = VAR_0->id;
 VAR_1->coalition_type = VAR_0->type;
 VAR_1->coalition_tasks = FUNC_0(VAR_0);
}
