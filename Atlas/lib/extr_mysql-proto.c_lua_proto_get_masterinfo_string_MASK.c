
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ offset; TYPE_3__* data; } ;
typedef TYPE_1__ network_packet ;
struct TYPE_11__ {int master_lines; } ;
typedef TYPE_2__ network_mysqld_masterinfo_t ;
typedef int lua_State ;
struct TYPE_12__ {char* str; size_t len; } ;
typedef TYPE_3__ GString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 () ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_16) {
 size_t VAR_17;
 const char *VAR_18 = FUNC_2(VAR_16, 1, &VAR_17);
 network_mysqld_masterinfo_t *VAR_19;

 network_packet VAR_20;
 GString VAR_21;
 int VAR_22 = 0;

 VAR_21.str = (char *)VAR_18;
 VAR_21.len = VAR_17;

 VAR_20.data = &VAR_21;
 VAR_20.offset = 0;

 VAR_19 = FUNC_7();

 VAR_22 = VAR_22 || FUNC_6(&VAR_20, VAR_19);

 if (VAR_22) {
  FUNC_5(VAR_19);
  FUNC_3(VAR_16, "%s: network_mysqld_masterinfo_get() failed", VAR_0);
  return 0;
 }

 FUNC_4(VAR_16);

        FUNC_0(VAR_19, VAR_3);
 FUNC_1(VAR_19, VAR_4);
 FUNC_0(VAR_19, VAR_5);
 FUNC_1(VAR_19, VAR_2);
 FUNC_1(VAR_19, VAR_15);
 FUNC_1(VAR_19, VAR_6);
 FUNC_0(VAR_19, VAR_7);
 FUNC_0(VAR_19, VAR_1);
 FUNC_0(VAR_19, VAR_8);
        FUNC_1(VAR_19, VAR_9);
        FUNC_1(VAR_19, VAR_10);
        FUNC_1(VAR_19, VAR_11);
        FUNC_1(VAR_19, VAR_12);
        FUNC_1(VAR_19, VAR_13);
        if (VAR_19->master_lines >= 15) {
  FUNC_0(VAR_19, VAR_14);
 }

 FUNC_5(VAR_19);

 return 1;
}
