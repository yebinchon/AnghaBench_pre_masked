
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qos_class_t ;


 int VAR_0 ;
 int FUNC_0 (char,char,char*,int ,char*) ;
 int FUNC_1 (unsigned long,unsigned long,char*,int ,char*) ;
 int FUNC_2 (char const*,char*,int ) ;
 int VAR_1 ;
 void* FUNC_3 (int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 unsigned long FUNC_4 (char*,char**,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(qos_class_t VAR_5[], const char *VAR_6[], const char **VAR_7)
{
 char *VAR_8;
 char *VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_8 = FUNC_3(VAR_2[VAR_10]);
  VAR_1; FUNC_2(VAR_8, "getenv(%s)", VAR_2[VAR_10]);

  unsigned long VAR_11 = FUNC_4(VAR_8, &VAR_9, 10);
  VAR_1; FUNC_0(*VAR_9, '\0', "getenv(%s) = '%s' should be an "
    "integer", VAR_2[VAR_10], VAR_8);

  VAR_1; FUNC_1(VAR_11, (unsigned long)100, "getenv(%s) = '%s' should "
    "be less than 100", VAR_2[VAR_10], VAR_8);

  VAR_5[VAR_10] = (qos_class_t)VAR_11;
  VAR_6[VAR_10] = FUNC_3(VAR_3[VAR_10]);
  VAR_1; FUNC_2(VAR_6[VAR_10], "getenv(%s)", VAR_3[VAR_10]);
 }
 *VAR_7 = FUNC_3(VAR_4);
 VAR_1; FUNC_2(*VAR_7, "getenv(%s)", VAR_4);
}
