
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct enc_private {int* MyEventBits; int MyCRA; int MyCRB; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int CounterIntEnabs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct comedi_device*,int ,size_t,size_t) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_6, struct enc_private *VAR_7,
   uint16_t VAR_8)
{

 FUNC_0(VAR_6, VAR_7->MyCRB, (uint16_t) (~VAR_2),
      VAR_3 | VAR_4);


 FUNC_0(VAR_6, VAR_7->MyCRA, ~VAR_1,
      (uint16_t) (VAR_8 << VAR_0));


 VAR_5->CounterIntEnabs =
     (VAR_5->CounterIntEnabs & ~VAR_7->
      MyEventBits[3]) | VAR_7->MyEventBits[VAR_8];
}
