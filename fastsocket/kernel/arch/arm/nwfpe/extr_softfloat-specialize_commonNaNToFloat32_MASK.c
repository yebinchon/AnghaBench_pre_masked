
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int float32 ;
struct TYPE_3__ {int high; scalar_t__ sign; } ;
typedef TYPE_1__ commonNaNT ;
typedef int bits32 ;



__attribute__((used)) static float32 FUNC_0( commonNaNT VAR_0 )
{

    return ( ( (bits32) VAR_0.sign )<<31 ) | 0x7FC00000 | ( VAR_0.high>>41 );

}
