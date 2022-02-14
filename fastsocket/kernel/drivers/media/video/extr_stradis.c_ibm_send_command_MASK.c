
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct saa7146*,int ,int ,int) ;
 int FUNC_1 (struct saa7146*,int ,int ,int,int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct saa7146 *VAR_4,
       int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_7)
  FUNC_1(VAR_4, VAR_3, VAR_2, (VAR_5 << 1)| 1,2);
 else
  FUNC_1(VAR_4, VAR_3, VAR_2, VAR_5 << 1, 2);
 FUNC_1(VAR_4, VAR_3, VAR_0, VAR_6, 2);
 FUNC_1(VAR_4, VAR_3, VAR_1, 1, 2);
 for (VAR_8 = 0; VAR_8 < 100 &&
      (FUNC_0(VAR_4, VAR_3, VAR_1, 2) & 1); VAR_8++)
  FUNC_2();
 if (VAR_8 == 100)
  return -1;
 return 0;
}
