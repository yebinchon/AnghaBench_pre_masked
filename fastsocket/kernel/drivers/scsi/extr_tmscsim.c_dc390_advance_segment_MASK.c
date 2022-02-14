
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct dc390_srb {void* SGToBeXferLen; unsigned long SGBusAddr; unsigned long TotalXferredLen; } ;



__attribute__((used)) static unsigned long inline FUNC_0(struct dc390_srb* VAR_0, u32 VAR_1)
{
 unsigned long VAR_2 = VAR_0->SGToBeXferLen - VAR_1;


 VAR_0->SGBusAddr += VAR_2;
 VAR_0->TotalXferredLen += VAR_2;
 VAR_0->SGToBeXferLen = VAR_1;

 return VAR_2;
}
