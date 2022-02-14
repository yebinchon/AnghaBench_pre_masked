
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tcpconnect; } ;
struct connectdata {scalar_t__* sock; TYPE_1__ bits; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct connectdata*,scalar_t__) ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_1(struct connectdata *VAR_3)
{
  if(VAR_0 != VAR_3->sock[VAR_2]) {
    FUNC_0(VAR_3, VAR_3->sock[VAR_2]);
    VAR_3->sock[VAR_2] = VAR_0;
  }
  VAR_3->bits.tcpconnect[VAR_2] = VAR_1;
}
