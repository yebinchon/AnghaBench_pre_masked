
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int YuiFileEntryClass ;
struct TYPE_3__ {int get_property; int set_property; } ;
typedef int GParamSpec ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int * FUNC_2 (char*,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3 (YuiFileEntryClass * VAR_7) {
 GParamSpec * VAR_8;

 FUNC_0(VAR_7)->set_property = VAR_6;
 FUNC_0(VAR_7)->get_property = VAR_5;

 VAR_8 = FUNC_2("key-file", 0, 0, VAR_0 | VAR_1);
 FUNC_1(FUNC_0(VAR_7), VAR_4, VAR_8);

 VAR_8 = FUNC_2("group", 0, 0, VAR_0 | VAR_1);
 FUNC_1(FUNC_0(VAR_7), VAR_2, VAR_8);

 VAR_8 = FUNC_2("key", 0, 0, VAR_0 | VAR_1);
 FUNC_1(FUNC_0(VAR_7), VAR_3, VAR_8);
}
