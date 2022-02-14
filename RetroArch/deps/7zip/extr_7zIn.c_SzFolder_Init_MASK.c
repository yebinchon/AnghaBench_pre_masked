
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ NumUnpackStreams; scalar_t__ UnpackCRC; scalar_t__ UnpackCRCDefined; scalar_t__ NumPackStreams; scalar_t__ NumBindPairs; scalar_t__ NumCoders; scalar_t__ UnpackSizes; scalar_t__ PackStreams; scalar_t__ BindPairs; scalar_t__ Coders; } ;
typedef TYPE_1__ CSzFolder ;



void FUNC_0(CSzFolder *VAR_0)
{
   VAR_0->Coders = 0;
   VAR_0->BindPairs = 0;
   VAR_0->PackStreams = 0;
   VAR_0->UnpackSizes = 0;
   VAR_0->NumCoders = 0;
   VAR_0->NumBindPairs = 0;
   VAR_0->NumPackStreams = 0;
   VAR_0->UnpackCRCDefined = 0;
   VAR_0->UnpackCRC = 0;
   VAR_0->NumUnpackStreams = 0;
}
