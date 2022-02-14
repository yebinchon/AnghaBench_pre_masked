
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hwrng {unsigned long priv; } ;
typedef unsigned long s32 ;
struct TYPE_5__ {int completion; scalar_t__ present; int address; } ;
struct TYPE_4__ {unsigned long expires; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 unsigned long VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_3, u32 *VAR_4)
{
 unsigned long VAR_5;
 s32 VAR_6;

 *VAR_4 = FUNC_2(VAR_1->address);

 if (VAR_3->priv != 0) {
  VAR_5 = VAR_0;

  VAR_6 = VAR_5 - VAR_2.expires;
  VAR_6 = VAR_3->priv - (VAR_6 % VAR_3->priv);

  VAR_2.expires = VAR_5 + VAR_6;
  VAR_1->present = 0;

  FUNC_1(&VAR_1->completion);
  FUNC_0(&VAR_2);
 }

 return 4;
}
