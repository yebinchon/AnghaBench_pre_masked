
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int data; } ;
typedef int contenc_writer ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_2,
                                     contenc_writer *VAR_3,
                                     const char *VAR_4, size_t VAR_5)
{
  char *VAR_6 = FUNC_0();

  (void) VAR_3;
  (void) VAR_4;
  (void) VAR_5;

  if(!VAR_6)
    return VAR_1;
  FUNC_1(VAR_2->data, "Unrecognized content encoding type. "
                    "libcurl understands %s content encodings.", VAR_6);
  FUNC_2(VAR_6);
  return VAR_0;
}
