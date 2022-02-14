
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; int data; } ;
struct TYPE_6__ {int DigestSHA1; int DigestMD5; int Name; TYPE_3__* Serial; } ;
typedef TYPE_1__ CRL ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int) ;

CRL *FUNC_4(CRL *VAR_2)
{
 CRL *VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_3(sizeof(CRL));

 if (VAR_2->Serial != ((void*)0))
 {
  VAR_3->Serial = FUNC_2(VAR_2->Serial->data, VAR_2->Serial->size);
 }

 VAR_3->Name = FUNC_1(VAR_2->Name);

 FUNC_0(VAR_3->DigestMD5, VAR_2->DigestMD5, VAR_0);
 FUNC_0(VAR_3->DigestSHA1, VAR_2->DigestSHA1, VAR_1);

 return VAR_3;
}
