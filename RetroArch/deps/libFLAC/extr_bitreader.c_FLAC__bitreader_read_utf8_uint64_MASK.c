
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__uint64 ;
typedef int FLAC__uint32 ;
typedef scalar_t__ FLAC__byte ;
typedef int FLAC__bool ;
typedef int FLAC__BitReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int) ;

FLAC__bool FUNC_2(FLAC__BitReader *VAR_0, FLAC__uint64 *VAR_1, FLAC__byte *VAR_2, unsigned *VAR_3)
{
 FLAC__uint64 VAR_4 = 0;
 FLAC__uint32 VAR_5;
 unsigned VAR_6;

 if(!FUNC_1(VAR_0, &VAR_5, 8))
  return 0;
 if(VAR_2)
  VAR_2[(*VAR_3)++] = (FLAC__byte)VAR_5;
 if(!(VAR_5 & 0x80)) {
  VAR_4 = VAR_5;
  VAR_6 = 0;
 }
 else if(VAR_5 & 0xC0 && !(VAR_5 & 0x20)) {
  VAR_4 = VAR_5 & 0x1F;
  VAR_6 = 1;
 }
 else if(VAR_5 & 0xE0 && !(VAR_5 & 0x10)) {
  VAR_4 = VAR_5 & 0x0F;
  VAR_6 = 2;
 }
 else if(VAR_5 & 0xF0 && !(VAR_5 & 0x08)) {
  VAR_4 = VAR_5 & 0x07;
  VAR_6 = 3;
 }
 else if(VAR_5 & 0xF8 && !(VAR_5 & 0x04)) {
  VAR_4 = VAR_5 & 0x03;
  VAR_6 = 4;
 }
 else if(VAR_5 & 0xFC && !(VAR_5 & 0x02)) {
  VAR_4 = VAR_5 & 0x01;
  VAR_6 = 5;
 }
 else if(VAR_5 & 0xFE && !(VAR_5 & 0x01)) {
  VAR_4 = 0;
  VAR_6 = 6;
 }
 else {
  *VAR_1 = FUNC_0(0xffffffffffffffff);
  return 1;
 }
 for( ; VAR_6; VAR_6--) {
  if(!FUNC_1(VAR_0, &VAR_5, 8))
   return 0;
  if(VAR_2)
   VAR_2[(*VAR_3)++] = (FLAC__byte)VAR_5;
  if(!(VAR_5 & 0x80) || (VAR_5 & 0x40)) {
   *VAR_1 = FUNC_0(0xffffffffffffffff);
   return 1;
  }
  VAR_4 <<= 6;
  VAR_4 |= (VAR_5 & 0x3F);
 }
 *VAR_1 = VAR_4;
 return 1;
}
