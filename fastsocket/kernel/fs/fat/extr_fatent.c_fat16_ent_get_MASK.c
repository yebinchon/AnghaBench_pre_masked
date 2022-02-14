
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ent16_p; } ;
struct fat_entry {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct fat_entry *VAR_2)
{
 int VAR_3 = FUNC_1(*VAR_2->u.ent16_p);
 FUNC_0((unsigned long)VAR_2->u.ent16_p & (2 - 1));
 if (VAR_3 >= VAR_0)
  VAR_3 = VAR_1;
 return VAR_3;
}
