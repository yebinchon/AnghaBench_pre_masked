
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int wait_sync_queue; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static s32 FUNC_4(s32 VAR_2)
{
 s32 VAR_3;
 u32 VAR_4;
 card_block *VAR_5 = &VAR_1[VAR_2];

 FUNC_2(VAR_4);
 while((VAR_3=FUNC_0(VAR_2))==VAR_0) {
  FUNC_1(VAR_5->wait_sync_queue);
 }
 FUNC_3(VAR_4);
 return VAR_3;
}
