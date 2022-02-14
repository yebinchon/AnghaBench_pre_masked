
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;


 int VAR_0 ;
 unsigned char* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  unsigned char *VAR_4, *VAR_5;
  int VAR_6;
  VAR_5 = VAR_4 = FUNC_0( VAR_2*4 );
  if( VAR_4==0 ){
    FUNC_1(VAR_1);
    return;
  }
  for(VAR_6=0; VAR_6<VAR_2; VAR_6++){
    sqlite3_int64 VAR_7;
    unsigned VAR_8;
    VAR_7 = FUNC_3(VAR_3[VAR_6]);
    if( VAR_7<0 || VAR_7>0x10ffff ) VAR_7 = 0xfffd;
    VAR_8 = (unsigned)(VAR_7 & 0x1fffff);
    if( VAR_8<0x00080 ){
      *VAR_5++ = (u8)(VAR_8&0xFF);
    }else if( VAR_8<0x00800 ){
      *VAR_5++ = 0xC0 + (u8)((VAR_8>>6)&0x1F);
      *VAR_5++ = 0x80 + (u8)(VAR_8 & 0x3F);
    }else if( VAR_8<0x10000 ){
      *VAR_5++ = 0xE0 + (u8)((VAR_8>>12)&0x0F);
      *VAR_5++ = 0x80 + (u8)((VAR_8>>6) & 0x3F);
      *VAR_5++ = 0x80 + (u8)(VAR_8 & 0x3F);
    }else{
      *VAR_5++ = 0xF0 + (u8)((VAR_8>>18) & 0x07);
      *VAR_5++ = 0x80 + (u8)((VAR_8>>12) & 0x3F);
      *VAR_5++ = 0x80 + (u8)((VAR_8>>6) & 0x3F);
      *VAR_5++ = 0x80 + (u8)(VAR_8 & 0x3F);
    } }

  FUNC_2(VAR_1, (char*)VAR_4, (int)(VAR_5-VAR_4), VAR_0);
}
