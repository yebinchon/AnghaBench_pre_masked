
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (char*,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,char*) ;
 unsigned long FUNC_3 (char*,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (char*,char**,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(char *VAR_2, char *VAR_3, char *VAR_4)
{
 char *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;

 if ((!VAR_2) || (!VAR_3) || (!VAR_4)) {
  FUNC_5();
  return(-VAR_0);
 }

 VAR_6 = FUNC_4(VAR_3, &VAR_5, 0);
 VAR_6 = FUNC_2(VAR_6, VAR_5);

 if (*(VAR_4) != '+') {
  VAR_7 = FUNC_4(VAR_4, &VAR_5, 0);
  VAR_7 = FUNC_2(VAR_7, VAR_5) - VAR_6;
  if (VAR_7 < VAR_6)
   goto err_out;

  VAR_7 -= VAR_6;
 } else {
  VAR_7 = FUNC_4(VAR_4 + 1, &VAR_5, 0);
  VAR_7 = FUNC_2(VAR_7, VAR_5);
 }
 FUNC_1("slram: devname=%s, devstart=0x%lx, devlength=0x%lx\n",
   VAR_2, VAR_6, VAR_7);
 if (VAR_7 % VAR_1 != 0)
  goto err_out;

 if ((VAR_6 = FUNC_3(VAR_2, VAR_6, VAR_7))){
  FUNC_5();
  return((int)VAR_6);
 }
 return(0);

err_out:
 FUNC_0("slram: Illegal length parameter.\n");
 return(-VAR_0);
}
