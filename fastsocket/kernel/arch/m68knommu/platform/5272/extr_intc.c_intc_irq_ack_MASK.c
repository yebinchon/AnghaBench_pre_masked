
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int index; scalar_t__ icr; scalar_t__ ack; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_4)
{

 if ((VAR_4 >= VAR_0) && (VAR_4 <= VAR_1)) {
  VAR_4 -= VAR_0;
  if (VAR_3[VAR_4].ack) {
   u32 VAR_5;
   VAR_5 = 0xd << VAR_3[VAR_4].index;
   FUNC_0(VAR_5, VAR_2 + VAR_3[VAR_4].icr);
  }
 }
}
