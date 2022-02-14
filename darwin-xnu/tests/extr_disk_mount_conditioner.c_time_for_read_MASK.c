
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (int ,long,char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static uint64_t FUNC_8(int VAR_2, const char *VAR_3) {
 int VAR_4;
 ssize_t VAR_5;
 char VAR_6[VAR_0];
 uint64_t VAR_7, VAR_8;

 FUNC_3(VAR_6, sizeof(VAR_6));
 FUNC_5(VAR_2, 0, VAR_1);

 VAR_7 = FUNC_4();
 VAR_5 = FUNC_7(VAR_2, VAR_6, VAR_0);
 VAR_8 = FUNC_4();

 FUNC_2(VAR_5, 0L, "read from temporary file");
 FUNC_1(VAR_5, VAR_0, "read %ld bytes from temporary file", VAR_0);
 VAR_4 = FUNC_6(VAR_6, VAR_3, sizeof(VAR_6));
 FUNC_0(0, VAR_4, "read expected contents from temporary file");

 return (VAR_8 - VAR_7);
}
