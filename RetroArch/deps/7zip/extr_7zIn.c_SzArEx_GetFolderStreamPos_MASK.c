
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {size_t* FolderStartPackStreamIndex; scalar_t__* PackStreamStartPositions; scalar_t__ dataPos; } ;
typedef TYPE_1__ CSzArEx ;



uint64_t FUNC_0(const CSzArEx *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
   return VAR_0->dataPos +
      VAR_0->PackStreamStartPositions[VAR_0->FolderStartPackStreamIndex[VAR_1] + VAR_2];
}
