
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehca_shca {int dummy; } ;
struct ehca_mr_pginfo {int dummy; } ;
struct ehca_mr {int dummy; } ;
struct TYPE_6__ {TYPE_2__** top; } ;
struct TYPE_5__ {TYPE_1__** dir; } ;
struct TYPE_4__ {int * ent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int,int,scalar_t__*,struct ehca_shca*,struct ehca_mr*,struct ehca_mr_pginfo*) ;

__attribute__((used)) static u64 FUNC_2(int VAR_4, int VAR_5, u64 *VAR_6,
    struct ehca_shca *VAR_7, struct ehca_mr *VAR_8,
    struct ehca_mr_pginfo *VAR_9)
{
 u64 VAR_10 = VAR_2;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if (!FUNC_0(VAR_3->top[VAR_4]->dir[VAR_5]->ent[VAR_11]))
   continue;

  VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_11, VAR_6, VAR_7, VAR_8,
        VAR_9);
  if ((VAR_10 != VAR_2) && (VAR_10 != VAR_1))
    return VAR_10;
 }
 return VAR_10;
}
