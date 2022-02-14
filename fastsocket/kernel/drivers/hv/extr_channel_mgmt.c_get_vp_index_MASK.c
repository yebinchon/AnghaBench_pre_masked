
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b; } ;
typedef TYPE_1__ uuid_le ;
typedef size_t u32 ;
struct TYPE_7__ {int guid; } ;
struct TYPE_6__ {size_t* vp_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 size_t VAR_6 ;
 size_t FUNC_1 () ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static u32 FUNC_2(uuid_le *VAR_8)
{
 u32 VAR_9;
 int VAR_10;
 bool VAR_11 = 0;
 u32 VAR_12 = FUNC_1();

 for (VAR_10 = VAR_0; VAR_10 < VAR_1; VAR_10++) {
  if (!FUNC_0(VAR_8->b, VAR_4[VAR_10].guid,
     sizeof(uuid_le))) {
   VAR_11 = 1;
   break;
  }
 }
 if ((VAR_7 == VAR_3) ||
     (VAR_7 == VAR_2) || (!VAR_11)) {






  return 0;
 }
 VAR_9 = (++VAR_6 % VAR_12);
 return VAR_5.vp_index[VAR_9];
}
