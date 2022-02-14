
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehca_shca {int dummy; } ;
struct ehca_mr_pginfo {int dummy; } ;
struct ehca_mr {int dummy; } ;
struct TYPE_4__ {TYPE_1__** top; } ;
struct TYPE_3__ {int * dir; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int,scalar_t__*,struct ehca_shca*,struct ehca_mr*,struct ehca_mr_pginfo*) ;

__attribute__((used)) static u64 FUNC_2(int VAR_4, u64 *VAR_5, struct ehca_shca *VAR_6,
        struct ehca_mr *VAR_7,
        struct ehca_mr_pginfo *VAR_8)
{
 u64 VAR_9 = VAR_2;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (!FUNC_0(VAR_3->top[VAR_4]->dir[VAR_10]))
   continue;

  VAR_9 = FUNC_1(VAR_4, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8);
  if ((VAR_9 != VAR_2) && (VAR_9 != VAR_1))
    return VAR_9;
 }
 return VAR_9;
}
