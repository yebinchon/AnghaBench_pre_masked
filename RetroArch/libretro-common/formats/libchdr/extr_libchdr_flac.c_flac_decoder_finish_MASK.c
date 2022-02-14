
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ compressed_length; scalar_t__ custom_header; int const* compressed_start; int decoder; } ;
typedef TYPE_1__ flac_decoder ;
typedef scalar_t__ FLAC__uint64 ;
typedef int FLAC__byte ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*) ;

uint32_t FUNC_2(flac_decoder* VAR_0)
{

 FLAC__uint64 VAR_1 = 0;
 FUNC_1(VAR_0->decoder, &VAR_1);
 FUNC_0(VAR_0->decoder);


 if (VAR_1 == 0)
  return 0;
 if (VAR_0->compressed_start == (const FLAC__byte *)(VAR_0->custom_header))
  VAR_1 -= VAR_0->compressed_length;
 return (uint32_t)VAR_1;
}
