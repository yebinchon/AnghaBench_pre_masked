
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_devmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dasd_devmap*) ;
 struct dasd_devmap* FUNC_2 (char*,int) ;
 int FUNC_3 (char**,int*,int*,int*) ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int,int,int ) ;

__attribute__((used)) static char *
FUNC_8( char *VAR_3 ) {

 struct dasd_devmap *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;
 char VAR_13[VAR_0+1], *VAR_14;

 VAR_14 = VAR_3;
 VAR_12 = FUNC_3(&VAR_14, &VAR_6, &VAR_7, &VAR_5);
 if (VAR_12 == 0) {
  VAR_8 = VAR_5;
  VAR_9 = VAR_6;
  VAR_10 = VAR_7;
  if (*VAR_14 == '-') {
   VAR_14++;
   VAR_12 = FUNC_3(&VAR_14, &VAR_9, &VAR_10, &VAR_8);
  }
 }
 if (VAR_12 == 0 &&
     (VAR_6 != VAR_9 || VAR_7 != VAR_10 || VAR_5 > VAR_8))
  VAR_12 = -VAR_2;
 if (VAR_12) {
  FUNC_5("%s is not a valid device range\n", VAR_3);
  return FUNC_0(VAR_12);
 }
 VAR_11 = FUNC_4(VAR_14, &VAR_14);
 if (VAR_11 < 0)
  return FUNC_0(-VAR_2);

 VAR_11 |= VAR_1;
 while (VAR_5 <= VAR_8) {
  FUNC_7(VAR_13, "%01x.%01x.%04x",
   VAR_6, VAR_7, VAR_5++);
  VAR_4 = FUNC_2(VAR_13, VAR_11);
  if (FUNC_1(VAR_4))
   return (char *)VAR_4;
 }
 if (*VAR_14 == ',')
  return VAR_14 + 1;
 if (*VAR_14 == '\0')
  return VAR_14;
 FUNC_6("The dasd= parameter value %s has an invalid ending\n",
     VAR_14);
 return FUNC_0(-VAR_2);
}
