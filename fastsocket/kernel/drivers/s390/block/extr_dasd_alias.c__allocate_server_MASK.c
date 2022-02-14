
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_uid {int serial; int vendor; } ;
struct TYPE_2__ {int serial; int vendor; } ;
struct alias_server {int lculist; int server; TYPE_1__ uid; } ;


 int VAR_0 ;
 struct alias_server* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct alias_server* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static struct alias_server *FUNC_4(struct dasd_uid *VAR_2)
{
 struct alias_server *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 FUNC_3(VAR_3->uid.vendor, VAR_2->vendor, sizeof(VAR_2->vendor));
 FUNC_3(VAR_3->uid.serial, VAR_2->serial, sizeof(VAR_2->serial));
 FUNC_1(&VAR_3->server);
 FUNC_1(&VAR_3->lculist);
 return VAR_3;
}
