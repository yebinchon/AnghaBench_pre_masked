
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int handle_t ;
struct TYPE_2__ {int * journal_info; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static handle_t *FUNC_1(void)
{
 handle_t *VAR_2 = VAR_1->journal_info;
 unsigned long VAR_3 = (unsigned long)VAR_2;

 FUNC_0(VAR_3 >= VAR_0);

 VAR_3++;
 VAR_2 = (handle_t *)VAR_3;

 VAR_1->journal_info = VAR_2;
 return VAR_2;
}
