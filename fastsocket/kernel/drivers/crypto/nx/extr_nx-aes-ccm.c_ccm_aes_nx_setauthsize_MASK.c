
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct TYPE_2__ {unsigned int authsize; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_1(struct crypto_aead *VAR_1,
      unsigned int VAR_2)
{
 switch (VAR_2) {
 case 4:
 case 6:
 case 8:
 case 10:
 case 12:
 case 14:
 case 16:
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_1)->authsize = VAR_2;

 return 0;
}
