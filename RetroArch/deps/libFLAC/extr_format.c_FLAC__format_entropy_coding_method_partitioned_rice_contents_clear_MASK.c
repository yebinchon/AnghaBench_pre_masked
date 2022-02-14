
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ parameters; scalar_t__ raw_bits; } ;
typedef TYPE_1__ FLAC__EntropyCodingMethod_PartitionedRiceContents ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(FLAC__EntropyCodingMethod_PartitionedRiceContents *VAR_0)
{
 FUNC_0(0 != VAR_0);

 if(0 != VAR_0->parameters)
  FUNC_2(VAR_0->parameters);
 if(0 != VAR_0->raw_bits)
  FUNC_2(VAR_0->raw_bits);
 FUNC_1(VAR_0);
}
