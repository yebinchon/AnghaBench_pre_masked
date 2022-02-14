
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_chunk {int dummy; } ;
struct TYPE_3__ {int recover; } ;
struct stripe {int sc; TYPE_1__ idx; } ;
struct TYPE_4__ {scalar_t__ stats; } ;


 struct stripe_chunk* FUNC_0 (struct stripe*,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct stripe*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct stripe_chunk*) ;

__attribute__((used)) static int FUNC_5(struct stripe *VAR_2, int VAR_3)
{
 struct stripe_chunk *VAR_4 = FUNC_0(VAR_2, VAR_3);







 FUNC_4(VAR_4);
 VAR_2->idx.recover = VAR_3;
 FUNC_2(VAR_2);


 FUNC_3(FUNC_1(VAR_2->sc)->stats + VAR_1);
 return -VAR_0;
}
