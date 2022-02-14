
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int ecd_length; char* ecd; int fp; } ;
typedef TYPE_1__ ZIP ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int*) ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(ZIP* VAR_1) {
 char* VAR_2;
 int VAR_3 = 1024;

 while (1) {
  int VAR_4;

  if (VAR_3 > VAR_1->length)
   VAR_3 = VAR_1->length;

  if (FUNC_3(VAR_1->fp, VAR_1->length - VAR_3, VAR_0) != 0) {
   return -1;
  }


  VAR_2 = (char*)FUNC_5( VAR_3 );
  if (!VAR_2) {
   return -1;
  }

  if (FUNC_1( VAR_2, VAR_3, 1, VAR_1->fp ) != 1) {
   FUNC_2(VAR_2);
   return -1;
  }

  if (FUNC_0(VAR_2, VAR_3, &VAR_4)) {
   VAR_1->ecd_length = VAR_3 - VAR_4;

   VAR_1->ecd = (char*)FUNC_5( VAR_1->ecd_length );
   if (!VAR_1->ecd) {
    FUNC_2(VAR_2);
    return -1;
   }

   FUNC_6(VAR_1->ecd, VAR_2 + VAR_4, VAR_1->ecd_length);

   FUNC_2(VAR_2);
   return 0;
  }

  FUNC_2(VAR_2);

  if (VAR_3 < VAR_1->length) {

   VAR_3 = 2*VAR_3;

   FUNC_4("Retry reading of zip ecd for %d bytes\n",VAR_3);

  } else {
   return -1;
  }
 }
}
