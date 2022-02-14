
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
typedef int int32 ;
struct TYPE_2__ {int splitPointCount; int * splitPointArray; int * comparisonFunction; } ;
typedef TYPE_1__ RangePartitionContext ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint32
FUNC_2(Datum VAR_0, const void *VAR_1)
{
 RangePartitionContext *VAR_2 = (RangePartitionContext *) VAR_1;
 FmgrInfo *VAR_3 = VAR_2->comparisonFunction;
 Datum *VAR_4 = VAR_2->splitPointArray;
 int32 VAR_5 = VAR_2->splitPointCount;
 int32 VAR_6 = 0;
 uint32 VAR_7 = 0;
 while (VAR_5 > 0)
 {
  uint32 VAR_8 = 0;
  Datum VAR_9 = 0;
  Datum VAR_10 = 0;
  int VAR_11 = 0;

  VAR_6 = VAR_5 >> 1;
  VAR_8 = VAR_7;
  VAR_8 += VAR_6;

  VAR_9 = VAR_4[VAR_8];

  VAR_10 = FUNC_0(VAR_3, VAR_0, VAR_9);
  VAR_11 = FUNC_1(VAR_10);


  if (VAR_11 < 0)
  {
   VAR_5 = VAR_6;
  }
  else
  {
   VAR_7 = VAR_8;
   VAR_7++;
   VAR_5 = VAR_5 - VAR_6 - 1;
  }
 }

 return VAR_7;
}
