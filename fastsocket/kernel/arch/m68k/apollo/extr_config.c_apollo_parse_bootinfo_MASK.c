
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bi_record {unsigned long* data; int tag; } ;



 unsigned long VAR_0 ;

int FUNC_0(const struct bi_record *VAR_1) {

 int VAR_2 = 0;
 const unsigned long *VAR_3 = VAR_1->data;

 switch(VAR_1->tag) {
  case 128:
   VAR_0=*VAR_3;
   break;

  default:
    VAR_2=1;
 }

 return VAR_2;
}
