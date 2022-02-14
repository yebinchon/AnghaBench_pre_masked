
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static char * FUNC_0 (char * VAR_3, Node * VAR_4)
{
 char * VAR_5 = VAR_3;
 int VAR_6 = 1;


 while (VAR_6) {
  switch (*VAR_5) {
   case 'P':
    VAR_5++;
    VAR_4->flags |= VAR_2;
    break;
   case 'O':
    VAR_5++;
    VAR_4->flags |= VAR_1;
    break;
   case 'C':
    VAR_5++;


    VAR_4->flags |= (VAR_0 |
      VAR_1);
    break;
   default:
    VAR_6 = 0;
  }
 }

 return VAR_5;
}
