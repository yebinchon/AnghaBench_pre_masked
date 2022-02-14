
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2() {
    FUNC_0("/abc", FUNC_1("/abc"));
    FUNC_0("/abc/def", FUNC_1("/abc/def"));
    FUNC_0("/abc/def", FUNC_1("/abc///def"));
    FUNC_0("/abc/def", FUNC_1("//abc///def"));
    FUNC_0("/abc/xyz", FUNC_1("/abc/def/../xyz"));
    FUNC_0("/xyz", FUNC_1("/abc/def/../../../xyz"));
    FUNC_0("/xyz", FUNC_1("/abc/def/../../../../xyz"));
}
