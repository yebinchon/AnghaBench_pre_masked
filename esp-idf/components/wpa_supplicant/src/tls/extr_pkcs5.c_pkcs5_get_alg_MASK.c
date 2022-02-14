
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_oid {int len; int* oid; } ;
typedef enum pkcs5_alg { ____Placeholder_pkcs5_alg } pkcs5_alg ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum pkcs5_alg FUNC_0(struct asn1_oid *VAR_2)
{
 if (VAR_2->len == 7 &&
     VAR_2->oid[0] == 1 &&
     VAR_2->oid[1] == 2 &&
     VAR_2->oid[2] == 840 &&
     VAR_2->oid[3] == 113549 &&
     VAR_2->oid[4] == 1 &&
     VAR_2->oid[5] == 5 &&
     VAR_2->oid[6] == 3 )
  return VAR_0;

 return VAR_1;
}
