
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int capacity_by_order; unsigned int* parameters; unsigned int* raw_bits; } ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__EntropyCodingMethod_PartitionedRiceContents ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int*,int ,int) ;
 scalar_t__ FUNC_2 (unsigned int*,int) ;

FLAC__bool FUNC_3(FLAC__EntropyCodingMethod_PartitionedRiceContents *VAR_0, unsigned VAR_1)
{
 FUNC_0(0 != VAR_0);

 FUNC_0(VAR_0->capacity_by_order > 0 || (0 == VAR_0->parameters && 0 == VAR_0->raw_bits));

 if(VAR_0->capacity_by_order < VAR_1) {
  if(0 == (VAR_0->parameters = (unsigned int*)FUNC_2(VAR_0->parameters, sizeof(unsigned)*(1 << VAR_1))))
   return 0;
  if(0 == (VAR_0->raw_bits = (unsigned int*)FUNC_2(VAR_0->raw_bits, sizeof(unsigned)*(1 << VAR_1))))
   return 0;
  FUNC_1(VAR_0->raw_bits, 0, sizeof(unsigned)*(1 << VAR_1));
  VAR_0->capacity_by_order = VAR_1;
 }

 return 1;
}
