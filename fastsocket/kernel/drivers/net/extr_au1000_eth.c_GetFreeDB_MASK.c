
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct au1000_private {TYPE_1__* pDBfree; } ;
struct TYPE_3__ {struct TYPE_3__* pnext; } ;
typedef TYPE_1__ db_dest_t ;



__attribute__((used)) static db_dest_t *FUNC_0(struct au1000_private *VAR_0)
{
 db_dest_t *VAR_1;
 VAR_1 = VAR_0->pDBfree;

 if (VAR_1) {
  VAR_0->pDBfree = VAR_1->pnext;
 }
 return VAR_1;
}
