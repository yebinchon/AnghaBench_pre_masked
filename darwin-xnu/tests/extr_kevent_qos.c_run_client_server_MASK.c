
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qos_class_t ;
typedef int dt_helper_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,char**) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (char**,int *,char const**,char const*) ;
 int * VAR_3 ;
 char const** VAR_4 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_5, const char *VAR_6, qos_class_t VAR_7[],
  const char *VAR_8[], const char *VAR_9)
{
 char *VAR_10[2 * VAR_1 + VAR_0 + 1];
 FUNC_3(VAR_10, VAR_7, VAR_8, VAR_9);

 for (int VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_3[VAR_11] = VAR_7[VAR_11];
  VAR_4[VAR_11] = VAR_8[VAR_11];
 }

 dt_helper_t VAR_12[] = {
  FUNC_1("com.apple.xnu.test.kevent_qos.plist",
    VAR_5, VAR_10),
  FUNC_0(VAR_6)
 };
 FUNC_2(VAR_12, 2, VAR_2);
}
