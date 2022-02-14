
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X ;
typedef int URL_DATA ;
typedef int BUF ;


 int * FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int ,int ,int *,int,int *,int *,int *,int *,int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,int,int *) ;

X *FUNC_7(char *VAR_2)
{
 BUF *VAR_3;
 URL_DATA VAR_4;
 X *VAR_5 = ((void*)0);

 if (FUNC_5(VAR_2))
 {
  return ((void*)0);
 }

 FUNC_1("Trying to download a cert from %s ...\n", VAR_2);

 if (FUNC_6(&VAR_4, VAR_2, 0, ((void*)0)) == 0)
 {
  FUNC_1("Download failed.\n");
  return ((void*)0);
 }

 VAR_3 = FUNC_3(&VAR_4, ((void*)0), VAR_1, VAR_1,
  ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_0);

 if (VAR_3 == ((void*)0))
 {
  FUNC_1("Download failed.\n");
  return ((void*)0);
 }

 VAR_5 = FUNC_0(VAR_3, FUNC_4(VAR_3));

 FUNC_2(VAR_3);

 FUNC_1("Download ok.\n");
 return VAR_5;
}
