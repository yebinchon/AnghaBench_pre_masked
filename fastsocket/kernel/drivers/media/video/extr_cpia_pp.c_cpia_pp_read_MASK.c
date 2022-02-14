
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct parport {TYPE_1__ ieee1284; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct parport*,int *,int,int ) ;
 int FUNC_1 (struct parport*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct parport *VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4;


 if(VAR_1->ieee1284.mode == VAR_0)
  VAR_4 = FUNC_0(VAR_1,VAR_2,VAR_3,0);
 else {
  int VAR_5;
  for(VAR_4=0; VAR_4<VAR_3; VAR_4 += VAR_5) {
   VAR_5 = FUNC_1(VAR_1, VAR_2+VAR_4,
       VAR_3-VAR_4);
   if(VAR_5 < 0) break;
  }
 }
 return VAR_4;
}
