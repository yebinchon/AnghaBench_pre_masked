
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_4__ {scalar_t__ result; int * card_api_cb; int attached; } ;
typedef TYPE_1__ card_block ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static s32 FUNC_2(s32 VAR_7,card_block **VAR_8)
{
 s32 VAR_9;
 u32 VAR_10;
 card_block *VAR_11 = ((void*)0);

 if(VAR_7<VAR_4 || VAR_7>=VAR_5) return VAR_1;

 FUNC_0(VAR_10);
 VAR_11 = &VAR_6[VAR_7];
 if(!VAR_11->attached) {
  FUNC_1(VAR_10);
  return VAR_2;
 }

 VAR_9 = VAR_0;
 if(VAR_11->result!=VAR_0) {
  VAR_11->result = VAR_0;
  VAR_11->card_api_cb = ((void*)0);
  *VAR_8 = VAR_11;
  VAR_9 = VAR_3;
 }
 FUNC_1(VAR_10);
 return VAR_9;
}
