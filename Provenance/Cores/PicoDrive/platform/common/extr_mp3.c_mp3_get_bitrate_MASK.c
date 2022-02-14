
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int,int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char*,int) ;

int FUNC_4(void *VAR_1, int VAR_2)
{
 unsigned char VAR_3[2048];
 FILE *VAR_4 = VAR_1;
 int VAR_5 = -1;
 int VAR_6;

 FUNC_2(VAR_3, 0, sizeof(VAR_3));

 FUNC_1(VAR_4, 0, VAR_0);
 VAR_6 = FUNC_0(VAR_3, 1, sizeof(VAR_3), VAR_4);
 if (VAR_6 != sizeof(VAR_3))
  goto out;

 VAR_6 = FUNC_3(VAR_3, sizeof(VAR_3));
 if (VAR_6 <= 0) {

  FUNC_1(VAR_4, VAR_2 / 2, VAR_0);
  VAR_6 = FUNC_0(VAR_3, 1, sizeof(VAR_3), VAR_4);
  if (VAR_6 == sizeof(VAR_3))
   VAR_6 = FUNC_3(VAR_3, sizeof(VAR_3));
 }
 if (VAR_6 > 0)
  VAR_5 = VAR_6;



out:
 FUNC_1(VAR_4, 0, VAR_0);
 return VAR_5;
}
