
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num; } ;
typedef TYPE_1__ FT_Hashkey ;
typedef int FT_Bool ;



__attribute__((used)) static FT_Bool
  FUNC_0( FT_Hashkey* VAR_0,
                    FT_Hashkey* VAR_1 )
  {
    if ( VAR_0->num == VAR_1->num )
      return 1;

    return 0;
  }
