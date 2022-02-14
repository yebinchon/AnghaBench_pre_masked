
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eni_dev {int tx_bw; } ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int const VAR_1 ;

__attribute__((used)) static int FUNC_2(struct eni_dev *VAR_2,int *VAR_3,int VAR_4,int *VAR_5,
    int *VAR_6,int VAR_7)
{
 static const int VAR_8[] = { 4,16,128,2048 };


 if (VAR_7) *VAR_5 = *VAR_6 = 0;
 else {
  if (*VAR_3 > 0) {
   int VAR_9;

   for (*VAR_5 = 0; *VAR_5 < 3; (*VAR_5)++)
    if (VAR_1/VAR_8[*VAR_5]/64 <= *VAR_3) break;
   VAR_9 = VAR_8[*VAR_5]**VAR_3;
   FUNC_1("min div %d\n",VAR_9);
   *VAR_6 = VAR_1/VAR_9-1;
  }
  else {
   int VAR_10;

   if (!*VAR_3) *VAR_3 = VAR_2->tx_bw+VAR_4;
   for (*VAR_5 = 3; *VAR_5 >= 0; (*VAR_5)--)
    if (VAR_1/VAR_8[*VAR_5]/64 > -*VAR_3) break;
   if (*VAR_5 < 3) (*VAR_5)++;
   VAR_10 = VAR_8[*VAR_5]*-*VAR_3;
   FUNC_1("max div %d\n",VAR_10);
   *VAR_6 = FUNC_0(VAR_1, VAR_10)-1;
  }
  if (*VAR_6 < 0) *VAR_6 = 0;
  if (*VAR_6 > VAR_0) *VAR_6 = VAR_0;
 }
 *VAR_3 = VAR_1/VAR_8[*VAR_5]/(*VAR_6+1);
 FUNC_1("out pcr: %d (%d:%d)\n",*VAR_3,*VAR_5,*VAR_6);
 return 0;
}
