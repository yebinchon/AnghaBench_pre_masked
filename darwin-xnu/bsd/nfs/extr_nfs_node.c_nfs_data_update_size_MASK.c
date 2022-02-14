
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int off_t ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_10__ {scalar_t__ n_newsize; scalar_t__ n_size; int n_flag; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;

void
FUNC_11(nfsnode_t VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_2(272, VAR_3, VAR_3->n_flag, VAR_3->n_size, VAR_3->n_newsize);
 if (!VAR_4) {
  FUNC_6(VAR_3, VAR_0);

  FUNC_7(VAR_3);
  FUNC_1(272, VAR_3, VAR_3->n_flag, VAR_3->n_size, VAR_3->n_newsize);
  return;
 }
 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5 || !FUNC_3(VAR_3->n_flag, VAR_2)) {
  if (!VAR_5)
   FUNC_9(VAR_3);
  FUNC_1(272, VAR_3, VAR_3->n_flag, VAR_3->n_size, VAR_3->n_newsize);
  return;
 }
 FUNC_0(VAR_3->n_flag, VAR_2);
 VAR_3->n_size = VAR_3->n_newsize;

 FUNC_5(VAR_3->n_flag, VAR_1);
 FUNC_9(VAR_3);
 FUNC_10(FUNC_4(VAR_3), (off_t)VAR_3->n_size);
 FUNC_1(272, VAR_3, VAR_3->n_flag, VAR_3->n_size, VAR_3->n_newsize);
}
