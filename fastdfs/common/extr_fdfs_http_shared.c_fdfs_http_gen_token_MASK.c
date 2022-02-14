
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buff ;
struct TYPE_3__ {int length; char const* buff; } ;
typedef TYPE_1__ BufferInfo ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,int,unsigned char*) ;
 scalar_t__ FUNC_3 (char*,char*,int const) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const BufferInfo *VAR_1, const char *VAR_2, const int VAR_3, char *VAR_4)

{
 char VAR_5[256 + 64];
 unsigned char VAR_6[16];
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7 + VAR_1->length + 12 > sizeof(VAR_5))
 {
  return VAR_0;
 }

 FUNC_1(VAR_5, VAR_2, VAR_7);
 VAR_8 = VAR_7;
 FUNC_1(VAR_5 + VAR_8, VAR_1->buff, VAR_1->length);
 VAR_8 += VAR_1->length;
 VAR_8 += FUNC_3(VAR_5 + VAR_8, "%d", VAR_3);

 FUNC_2(VAR_5, VAR_8, VAR_6);
 FUNC_0((char *)VAR_6, 16, VAR_4);
 return 0;
}
