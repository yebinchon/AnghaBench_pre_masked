
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef scalar_t__ byte ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static word FUNC_2 (byte* VAR_1, const char* VAR_2) {
 byte VAR_3;
 byte* VAR_4;

 VAR_3 = (byte)FUNC_1 (VAR_2);

 *VAR_1++ = VAR_0;
 VAR_4 = VAR_1++;
 *VAR_1++ = 0x80;
 *VAR_1++ = 0x00;
 *VAR_1++ = 0x00;
 *VAR_1++ = 0x00;
 *VAR_1++ = 0x00;
 *VAR_1++ = VAR_3;
 FUNC_0 (VAR_1, VAR_2, VAR_3);
 VAR_1 += VAR_3;
 *VAR_4 = VAR_3 + 0x06;

 return ((word)(VAR_3 + 0x08));
}
