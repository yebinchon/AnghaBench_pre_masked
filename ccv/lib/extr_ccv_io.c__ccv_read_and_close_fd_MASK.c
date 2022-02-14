
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_dense_matrix_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,int **,int) ;
 int FUNC_1 (int *,int **,int) ;
 int FUNC_2 (int *,int **,int) ;
 int FUNC_3 (int *,int **,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*,int,int,int *) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (unsigned char*,char*,int) ;

__attribute__((used)) static int FUNC_9(FILE* VAR_4, ccv_dense_matrix_t** VAR_5, int VAR_6)
{
 int VAR_7 = (VAR_6 & 0xF00) ? VAR_0 | ((VAR_6 & 0xF00) >> 8) : 0;
 if ((VAR_6 & 0XFF) == VAR_1)
 {
  unsigned char VAR_8[8];
  (void) FUNC_6(VAR_8, 1, 8, VAR_4);
  if (FUNC_8(VAR_8, "\x89\x50\x4e\x47\xd\xa\x1a\xa", 8) == 0)
   VAR_6 = 128;
  else if (FUNC_8(VAR_8, "\xff\xd8\xff", 3) == 0)
   VAR_6 = 129;
  else if (FUNC_8(VAR_8, "BM", 2) == 0)
   VAR_6 = 130;
  else if (FUNC_8(VAR_8, "CCVBINDM", 8) == 0)
   VAR_6 = 131;
  FUNC_7(VAR_4, 0, VAR_3);
 }
 switch (VAR_6 & 0XFF)
 {
  case 130:
   FUNC_1(VAR_4, VAR_5, VAR_7);
   break;
  case 131:
   FUNC_0(VAR_4, VAR_5, VAR_7);
 }
 if (*VAR_5 != 0)
  FUNC_4(*VAR_5);
 if (VAR_6 & VAR_1)
  FUNC_5(VAR_4);
 return VAR_2;
}
