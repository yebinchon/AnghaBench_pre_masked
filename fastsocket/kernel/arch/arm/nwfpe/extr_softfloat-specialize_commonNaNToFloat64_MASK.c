
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int float64 ;
struct TYPE_3__ {int high; scalar_t__ sign; } ;
typedef TYPE_1__ commonNaNT ;
typedef int bits64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static float64 FUNC_1( commonNaNT VAR_0 )
{

    return
          ( ( (bits64) VAR_0.sign )<<63 )
        | FUNC_0( 0x7FF8000000000000 )
        | ( VAR_0.high>>12 );

}
