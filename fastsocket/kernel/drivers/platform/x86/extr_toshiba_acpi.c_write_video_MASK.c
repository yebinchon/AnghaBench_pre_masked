
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int*,int ,int) ;
 int FUNC_1 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_4(const char *VAR_7, unsigned long VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_8;
 int VAR_11 = -1;
 int VAR_12 = -1;
 int VAR_13 = -1;
 u32 VAR_14;
 u32 VAR_15;





 while (VAR_10) {
  if (FUNC_2(VAR_7, " lcd_out : %i", &VAR_9) == 1)
   VAR_11 = VAR_9 & 1;
  else if (FUNC_2(VAR_7, " crt_out : %i", &VAR_9) == 1)
   VAR_12 = VAR_9 & 1;
  else if (FUNC_2(VAR_7, " tv_out : %i", &VAR_9) == 1)
   VAR_13 = VAR_9 & 1;

  do {
   ++VAR_7;
   --VAR_10;
  }
  while (VAR_10 && *(VAR_7 - 1) != ';');
 }

 FUNC_1(VAR_2, &VAR_15, &VAR_14);
 if (VAR_14 == VAR_1) {
  unsigned int VAR_16 = VAR_15;
  if (VAR_11 != -1)
   FUNC_0(&VAR_16, VAR_4, VAR_11);
  if (VAR_12 != -1)
   FUNC_0(&VAR_16, VAR_3, VAR_12);
  if (VAR_13 != -1)
   FUNC_0(&VAR_16, VAR_5, VAR_13);


  if (VAR_16 != VAR_15)
   FUNC_3(VAR_6, VAR_16);
 } else {
  return -VAR_0;
 }

 return VAR_8;
}
