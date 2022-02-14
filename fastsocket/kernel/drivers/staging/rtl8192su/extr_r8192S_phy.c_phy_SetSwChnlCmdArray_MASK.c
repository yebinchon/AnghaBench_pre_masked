
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ msDelay; scalar_t__ Para2; scalar_t__ Para1; int CmdID; } ;
typedef int SwChnlCmdID ;
typedef TYPE_1__ SwChnlCmd ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(
 SwChnlCmd* VAR_2,
 u32 VAR_3,
 u32 VAR_4,
 SwChnlCmdID VAR_5,
 u32 VAR_6,
 u32 VAR_7,
 u32 VAR_8
 )
{
 SwChnlCmd* VAR_9;

 if(VAR_2 == ((void*)0))
 {

  return VAR_0;
 }
 if(VAR_3 >= VAR_4)
 {



  return VAR_0;
 }

 VAR_9 = VAR_2 + VAR_3;
 VAR_9->CmdID = VAR_5;
 VAR_9->Para1 = VAR_6;
 VAR_9->Para2 = VAR_7;
 VAR_9->msDelay = VAR_8;

 return VAR_1;
}
