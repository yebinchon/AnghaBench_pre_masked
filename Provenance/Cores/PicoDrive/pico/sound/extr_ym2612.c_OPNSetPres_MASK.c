
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {double freqbase; double rate; scalar_t__ clock; } ;
struct TYPE_5__ {int eg_timer_add; double* lfo_freq; TYPE_1__ ST; } ;
struct TYPE_6__ {TYPE_2__ OPN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (int ) ;
 double* VAR_5 ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static void FUNC_1(int VAR_7)
{
 int VAR_8;


 VAR_6 = (VAR_6) ? ((double)VAR_6 / VAR_6) / VAR_7 : 0;

 VAR_6 = (1<<VAR_0) * VAR_6;


 FUNC_0( VAR_3 );




 for(VAR_8 = 0; VAR_8 < 4096; VAR_8++)
 {


  VAR_4[VAR_8] = (UINT32)( (double)VAR_8 * 32 * VAR_6 * (1<<(VAR_1-10)) );
 }


 for(VAR_8 = 0; VAR_8 < 8; VAR_8++)
 {


  VAR_6[VAR_8] = (1.0 / VAR_5[VAR_8]) * (1<<VAR_2) * VAR_6;
 }
}
