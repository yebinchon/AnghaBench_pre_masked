
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_21__ {int face; } ;
struct TYPE_20__ {int horiResolution; int vertResolution; scalar_t__ type; } ;
struct TYPE_19__ {scalar_t__ (* set_sbit_strike ) (TYPE_4__*,TYPE_6__*,int *) ;} ;
struct TYPE_18__ {int sfnt; } ;
struct TYPE_16__ {int ppem; } ;
struct TYPE_17__ {int strike_index; TYPE_2__ ttmetrics; int point_size; TYPE_1__* metrics; } ;
struct TYPE_15__ {scalar_t__ x_ppem; scalar_t__ y_ppem; } ;
typedef TYPE_3__* TT_Size ;
typedef TYPE_4__* TT_Face ;
typedef TYPE_5__* SFNT_Service ;
typedef int FT_ULong ;
typedef int FT_UInt ;
typedef TYPE_6__* FT_Size_Request ;
typedef TYPE_7__* FT_Size ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_6__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_7__*,int ) ;

__attribute__((used)) static FT_Error
  FUNC_7( FT_Size VAR_2,
                   FT_Size_Request VAR_3 )
  {
    TT_Size VAR_4 = (TT_Size)VAR_2;
    FT_Error VAR_5 = VAR_0;
    FUNC_3( VAR_2->face, VAR_3 );

    if ( FUNC_1( VAR_2->face ) )
    {
      VAR_5 = FUNC_5( VAR_4, 0 );
    }

    return VAR_5;
  }
