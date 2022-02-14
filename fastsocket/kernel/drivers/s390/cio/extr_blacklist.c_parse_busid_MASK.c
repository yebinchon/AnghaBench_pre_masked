
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char**,unsigned int*,int,int,int) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_3, unsigned int *VAR_4, unsigned int *VAR_5,
         unsigned int *VAR_6, int VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_10 = 1;

 if (*VAR_3 == '\0')
  goto out;


 VAR_8 = VAR_3;
 VAR_9 = FUNC_2(VAR_3, &VAR_8, 16);

 if (*VAR_8 == '\0') {
  if (VAR_9 <= VAR_2) {
   *VAR_6 = VAR_9;
   *VAR_5 = 0;
   *VAR_4 = 0;
   VAR_10 = 0;
  }
  goto out;
 }


 VAR_8 = VAR_3;
 VAR_11 = FUNC_1(&VAR_8, VAR_4, 1, 2, VAR_0);
 if (VAR_11 || (VAR_8[0] != '.'))
  goto out;
 VAR_8++;
 VAR_11 = FUNC_1(&VAR_8, VAR_5, 1, 1, VAR_1);
 if (VAR_11 || (VAR_8[0] != '.'))
  goto out;
 VAR_8++;
 VAR_11 = FUNC_1(&VAR_8, VAR_6, 4, 4, VAR_2);
 if (VAR_11 || (VAR_8[0] != '\0'))
  goto out;

 VAR_10 = 0;
out:
 if (VAR_10 && VAR_7)
  FUNC_0("%s is not a valid device for the cio_ignore "
      "kernel parameter\n", VAR_3);

 return VAR_10;
}
