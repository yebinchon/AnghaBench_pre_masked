
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reflen; scalar_t__ data; } ;
typedef TYPE_1__ yxml_t ;
typedef int yxml_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,unsigned int) ;

__attribute__((used)) static yxml_ret_t FUNC_1(yxml_t *VAR_2, unsigned VAR_3) {
 if(VAR_2->reflen >= sizeof(VAR_2->data)-1)
  return VAR_0;
 FUNC_0(VAR_2->data+VAR_2->reflen, VAR_3);
 VAR_2->reflen++;
 return VAR_1;
}
