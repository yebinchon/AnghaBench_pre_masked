
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;

int FUNC_2(char *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = 0, VAR_10;

 if (VAR_6 && !VAR_7)
  VAR_9 = VAR_1;
 else if (!VAR_6 && VAR_7)
  VAR_9 = VAR_3;
 else if (VAR_6 && VAR_7)
  VAR_9 = VAR_2;
 else FUNC_1("Impossible mode in open_file");

 if (VAR_8)
  VAR_9 |= VAR_0;
 VAR_10 = FUNC_0(VAR_5, VAR_9);
 if (VAR_10 < 0)
  return -VAR_4;
 else return VAR_10;
}
