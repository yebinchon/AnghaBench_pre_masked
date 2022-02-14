
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cssid; int id; } ;
struct chp_link {int fla; TYPE_1__ chpid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct chp_link*) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*,int,...) ;

__attribute__((used)) static void FUNC_4(struct chp_link *VAR_2)
{
 char VAR_3[15];

 FUNC_3(VAR_3, "accpr%x.%02x", VAR_2->chpid.cssid,
  VAR_2->chpid.id);
 FUNC_0( 2, VAR_3);
 if (VAR_2->fla != 0) {
  FUNC_3(VAR_3, "fla%x", VAR_2->fla);
  FUNC_0( 2, VAR_3);
 }

 FUNC_1();







 FUNC_2(VAR_0,
       VAR_1, VAR_2);
}
