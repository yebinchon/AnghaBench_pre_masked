
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct dc390_srb {int SGToBeXferLen; int SGBusAddr; struct scatterlist* pSegmentList; } ;


 int FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static void inline FUNC_2(struct dc390_srb* VAR_0)
{
 struct scatterlist *VAR_1 = VAR_0->pSegmentList;


 VAR_0->SGBusAddr = FUNC_0(VAR_1);
 VAR_0->SGToBeXferLen = FUNC_1(VAR_1);
}
