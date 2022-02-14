
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLUcode ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*,char const*) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static CURLUcode FUNC_2(char *VAR_2)
{
  if(VAR_2) {
    static const char VAR_3[]={
            0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
      0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
      0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
      0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
      0x7f,
      0x00
    };
    size_t VAR_4 = FUNC_1(VAR_2);
    size_t VAR_5 = FUNC_0(VAR_2, VAR_3);
    if(VAR_5 != VAR_4)


      return VAR_0;
  }
  return VAR_1;
}
