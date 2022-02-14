
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_credentials {int * key; } ;


 int VAR_0 ;
 int * FUNC_0 (int const*,size_t,char const*) ;
 int * FUNC_1 (int const*,size_t,char const*) ;
 int * FUNC_2 (int const*,size_t) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tlsv1_credentials *VAR_1,
    const u8 *VAR_2, size_t VAR_3, const char *VAR_4)
{
 VAR_1->key = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_1->key == ((void*)0))
  VAR_1->key = FUNC_2(VAR_2, VAR_3);
 if (VAR_1->key == ((void*)0))
  VAR_1->key = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_1->key == ((void*)0)) {
  FUNC_3(VAR_0, "TLSv1: Failed to parse private key");
  return -1;
 }
 return 0;
}
