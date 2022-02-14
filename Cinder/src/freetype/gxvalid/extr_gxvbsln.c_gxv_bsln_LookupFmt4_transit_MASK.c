
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ u; } ;
struct TYPE_8__ {int u; } ;
struct TYPE_7__ {int lookuptbl_head; } ;
typedef TYPE_1__* GXV_Validator ;
typedef TYPE_2__ GXV_LookupValueDesc ;
typedef TYPE_3__* GXV_LookupValueCPtr ;
typedef int FT_UShort ;
typedef int FT_Bytes ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static GXV_LookupValueDesc
  FUNC_2( FT_UShort VAR_0,
                               GXV_LookupValueCPtr VAR_1,
                               FT_Bytes VAR_2,
                               GXV_Validator VAR_3 )
  {
    FT_Bytes VAR_4;
    FT_Bytes VAR_5;
    FT_UShort VAR_6;
    GXV_LookupValueDesc VAR_7;


    VAR_6 = (FT_UShort)( VAR_1->u +
                          ( VAR_0 * sizeof ( FT_UShort ) ) );

    VAR_4 = VAR_3->lookuptbl_head + VAR_6;
    VAR_5 = VAR_2;
    FUNC_1( 2 );

    VAR_7.u = FUNC_0( VAR_4 );

    return VAR_7;
  }
