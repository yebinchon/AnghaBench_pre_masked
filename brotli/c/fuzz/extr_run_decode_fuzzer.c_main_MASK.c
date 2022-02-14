
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 size_t FUNC_6 (unsigned char*,int,size_t,int *) ;
 int FUNC_7 (unsigned char*) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (unsigned char*,unsigned char*,size_t) ;
 int VAR_2 ;

int FUNC_10(int VAR_3, char* *VAR_4) {
  if (VAR_3 != 2) {
    FUNC_5(VAR_2, "Exactly one argument is expected.\n");
    FUNC_1(VAR_0);
  }

  FILE* VAR_5 = FUNC_4(VAR_4[1], "r");
  if (!VAR_5) {
    FUNC_5(VAR_2, "Failed to open input file.");
    FUNC_1(VAR_0);
  }

  size_t VAR_6 = 1 << 20;
  unsigned char* VAR_7 = (unsigned char*)FUNC_8(VAR_6);
  size_t VAR_8 = FUNC_6(VAR_7, 1, VAR_6, VAR_5);
  if (FUNC_3(VAR_5)) {
    FUNC_2(VAR_5);
    FUNC_5(VAR_2, "Failed read input file.");
    FUNC_1(VAR_0);
  }

  unsigned char* VAR_9 = (unsigned char*)FUNC_8(VAR_8);
  FUNC_9(VAR_9, VAR_7, VAR_8);
  FUNC_7(VAR_7);

  FUNC_0(VAR_9, VAR_8);
  FUNC_7(VAR_9);
  FUNC_1(VAR_1);
}
