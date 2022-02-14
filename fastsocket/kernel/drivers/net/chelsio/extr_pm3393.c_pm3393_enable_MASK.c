
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cmac {TYPE_1__* instance; } ;
struct TYPE_2__ {int fc; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cmac*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct cmac *VAR_12, int VAR_13)
{
 if (VAR_13 & VAR_0)
  FUNC_0(VAR_12, VAR_9,
   (VAR_4 | VAR_5));

 if (VAR_13 & VAR_1) {
  u32 VAR_14 = VAR_11 | VAR_8;

  if (VAR_12->instance->fc & VAR_2)
   VAR_14 |= VAR_6;
  if (VAR_12->instance->fc & VAR_3)
   VAR_14 |= VAR_7;
  FUNC_0(VAR_12, VAR_10, VAR_14);
 }

 VAR_12->instance->enabled |= VAR_13;
 return 0;
}
