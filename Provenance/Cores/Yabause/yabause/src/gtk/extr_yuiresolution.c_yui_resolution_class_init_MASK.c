
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int YuiResolutionClass ;
struct TYPE_3__ {int get_property; int set_property; } ;
typedef int GParamSpec ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int * FUNC_2 (char*,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3 (YuiResolutionClass *VAR_6) {
 GParamSpec * VAR_7;

 FUNC_0(VAR_6)->set_property = VAR_5;
 FUNC_0(VAR_6)->get_property = VAR_4;

 VAR_7 = FUNC_2("key-file", 0, 0, VAR_0 | VAR_1);
 FUNC_1(FUNC_0(VAR_6), VAR_3, VAR_7);

 VAR_7 = FUNC_2("group", 0, 0, VAR_0 | VAR_1);
 FUNC_1(FUNC_0(VAR_6), VAR_2, VAR_7);
}
