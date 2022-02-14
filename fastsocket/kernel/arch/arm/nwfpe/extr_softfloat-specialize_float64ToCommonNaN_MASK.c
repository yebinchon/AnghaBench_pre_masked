
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int float64 ;
struct TYPE_3__ {int sign; int high; scalar_t__ low; } ;
typedef TYPE_1__ commonNaNT ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static commonNaNT FUNC_2( float64 VAR_1 )
{
    commonNaNT VAR_2;

    if ( FUNC_0( VAR_1 ) ) FUNC_1( VAR_0 );
    VAR_2.sign = VAR_1>>63;
    VAR_2.low = 0;
    VAR_2.high = VAR_1<<12;
    return VAR_2;

}
