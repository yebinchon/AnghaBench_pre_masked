
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int journal_t ;
struct TYPE_6__ {int h_sync; } ;
typedef TYPE_1__ handle_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(journal_t *VAR_0)
{
 handle_t *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0, 1);
 if (FUNC_0(VAR_1)) {
  VAR_2 = FUNC_1(VAR_1);
 } else {
  VAR_1->h_sync = 1;
  VAR_2 = FUNC_3(VAR_1);
 }
 return VAR_2;
}
