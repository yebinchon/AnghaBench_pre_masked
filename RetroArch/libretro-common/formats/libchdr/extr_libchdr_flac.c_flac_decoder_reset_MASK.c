
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int s_header_template ;
struct TYPE_4__ {int* custom_header; int compressed_length; int compressed2_length; int const* compressed2_start; int const* compressed_start; } ;
typedef TYPE_1__ flac_decoder ;
typedef int FLAC__byte ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int*,int const*,int) ;

int FUNC_2(flac_decoder* VAR_0, uint32_t VAR_1, uint8_t VAR_2, uint32_t VAR_3, const void *VAR_4, uint32_t VAR_5)
{

 static const uint8_t VAR_6[0x2a] =
 {
  0x66, 0x4C, 0x61, 0x43,
  0x80,

  0x00, 0x00, 0x22,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00, 0x00,
  0x00, 0x00, 0x00,
  0x0A, 0xC4, 0x42, 0xF0, 0x00, 0x00, 0x00, 0x00,


  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };
 FUNC_1(VAR_0->custom_header, VAR_6, sizeof(VAR_6));
 VAR_0->custom_header[0x08] = VAR_0->custom_header[0x0a] = VAR_3 >> 8;
 VAR_0->custom_header[0x09] = VAR_0->custom_header[0x0b] = VAR_3 & 0xff;
 VAR_0->custom_header[0x12] = VAR_1 >> 12;
 VAR_0->custom_header[0x13] = VAR_1 >> 4;
 VAR_0->custom_header[0x14] = (VAR_1 << 4) | ((VAR_2 - 1) << 1);


 VAR_0->compressed_start = (const FLAC__byte *)(VAR_0->custom_header);
 VAR_0->compressed_length = sizeof(VAR_0->custom_header);
 VAR_0->compressed2_start = (const FLAC__byte *)(VAR_4);
 VAR_0->compressed2_length = VAR_5;
 return FUNC_0(VAR_0);
}
