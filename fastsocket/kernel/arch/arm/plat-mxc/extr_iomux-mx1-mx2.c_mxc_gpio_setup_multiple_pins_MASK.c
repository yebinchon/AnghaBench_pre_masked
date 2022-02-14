
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,char const*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int const*,int) ;

int FUNC_3(const int *VAR_4, unsigned VAR_5,
  const char *VAR_6)
{
 const int *VAR_7 = VAR_4;
 int VAR_8;
 unsigned VAR_9;
 unsigned VAR_10;
 int VAR_11 = -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_9 = *VAR_7 & (VAR_1 | VAR_2);
  VAR_10 = *VAR_7 & ~(VAR_1 | VAR_2);

  if (VAR_9 >= (VAR_3 + 1) * 32)
   goto setup_error;

  VAR_11 = FUNC_0(VAR_9, VAR_6);
  if (VAR_11)
   goto setup_error;

  FUNC_1(VAR_9 | VAR_10);

  VAR_7++;
 }
 return 0;

setup_error:
 FUNC_2(VAR_4, VAR_8);
 return VAR_11;
}
