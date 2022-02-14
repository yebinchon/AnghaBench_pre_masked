
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int journal_t ;
struct TYPE_11__ {int h_ref; TYPE_1__* h_transaction; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_12__ {TYPE_2__* journal_info; } ;
struct TYPE_10__ {int * t_journal; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_8__* VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_2__*) ;

handle_t *FUNC_6(journal_t *VAR_3, int VAR_4)
{
 handle_t *VAR_5 = FUNC_3();
 int VAR_6;

 if (!VAR_3)
  return FUNC_0(-VAR_1);

 if (VAR_5) {
  FUNC_1(VAR_5->h_transaction->t_journal == VAR_3);
  VAR_5->h_ref++;
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_2->journal_info = VAR_5;

 VAR_6 = FUNC_5(VAR_3, VAR_5);
 if (VAR_6 < 0) {
  FUNC_2(VAR_5);
  VAR_2->journal_info = ((void*)0);
  VAR_5 = FUNC_0(VAR_6);
  goto out;
 }
out:
 return VAR_5;
}
