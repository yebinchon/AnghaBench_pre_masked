
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_2__ {int offset; scalar_t__ sync; scalar_t__ srambuf; } ;


 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static s32 FUNC_1(s32 VAR_1,s32 VAR_2)
{
 VAR_0.sync = FUNC_0(VAR_0.srambuf+VAR_0.offset,VAR_0.offset,(64-VAR_0.offset));
 if(VAR_0.sync) VAR_0.offset = 64;

 return 1;
}
