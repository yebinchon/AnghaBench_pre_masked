
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct bd_addr {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {size_t num_registered; TYPE_1__* registered; } ;
struct TYPE_3__ {int * bdaddr; } ;


 int FUNC_0 (struct bd_addr*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int *,struct bd_addr*,int ) ;

__attribute__((used)) static s32 FUNC_2(s32 VAR_6,void *VAR_7)
{
 u32 VAR_8;
 struct bd_addr VAR_9;



   if(VAR_6==VAR_0) {
      for(VAR_8=0; VAR_8<VAR_3.num_registered;VAR_8++) {
         FUNC_0(&(VAR_9),VAR_3.registered[VAR_8].bdaddr[5],VAR_3.registered[VAR_8].bdaddr[4],VAR_3.registered[VAR_8].bdaddr[3],VAR_3.registered[VAR_8].bdaddr[2],VAR_3.registered[VAR_8].bdaddr[1],VAR_3.registered[VAR_8].bdaddr[0]);
         FUNC_1(&VAR_5[VAR_8],&(VAR_9),VAR_2);
      }
   }
   VAR_4 = VAR_1;
 return VAR_0;
}
