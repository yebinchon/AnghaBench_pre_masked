
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_channel {TYPE_1__* ccws; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_1(struct lcs_channel *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_0(5, VAR_3, "rdybits");
 VAR_6 = (VAR_5 - 1) & (VAR_2 - 1);
 VAR_7 = (VAR_5 + 1) & (VAR_2 - 1);

 if (VAR_4->ccws[VAR_7].flags & VAR_1) {

  if (!(VAR_4->ccws[VAR_6].flags & VAR_1))

   VAR_4->ccws[VAR_5].flags |= VAR_0;

  VAR_4->ccws[VAR_5].flags &= ~VAR_1;
 }
}
