
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,unsigned long) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__,int,int,int*,unsigned int,int ,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_5(char *VAR_8, size_t VAR_9, loff_t *VAR_10)
{
 unsigned int VAR_11;
 unsigned long VAR_12;
 int VAR_13;
 unsigned long VAR_14;
 char *VAR_15 = VAR_8;


 if (VAR_7 == 0 || VAR_5 == VAR_3)
  return -VAR_1;

 if (*VAR_10 >= VAR_7)
  return 0;

 VAR_11 = *VAR_10;
 if (VAR_11 + VAR_9 > VAR_7)
  VAR_9 = VAR_7 - VAR_11;

 FUNC_3(&VAR_6, VAR_14);

 for (; VAR_9 != 0; VAR_9 -= VAR_12) {
  VAR_12 = VAR_9;
  if (VAR_12 > VAR_2)
   VAR_12 = VAR_2;

  if ((FUNC_2(VAR_5, 3, 2, &VAR_13, VAR_11, FUNC_0(VAR_4),
          VAR_12) != 0) || VAR_12 != VAR_13) {
   FUNC_4(&VAR_6, VAR_14);
   return -VAR_0;
  }

  FUNC_1(VAR_15, VAR_4, VAR_12);

  VAR_15 += VAR_12;
  VAR_11 += VAR_12;
 }

 FUNC_4(&VAR_6, VAR_14);

 *VAR_10 = VAR_11;
 return VAR_15 - VAR_8;
}
