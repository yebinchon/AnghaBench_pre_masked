
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_hba {int hba_id; TYPE_1__* transport; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,int,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(
 struct se_hba *VAR_1,
 char *VAR_2)
{
 return FUNC_0(VAR_2, "HBA Index: %d plugin: %s version: %s\n",
   VAR_1->hba_id, VAR_1->transport->name,
   VAR_0);
}
