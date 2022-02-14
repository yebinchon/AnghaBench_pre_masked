
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int guid_hi; TYPE_3__* rom; } ;
struct hpsb_host {int update_config_rom; TYPE_2__ csr; TYPE_1__* driver; } ;
struct csr1212_keyval {int dummy; } ;
struct TYPE_6__ {struct csr1212_keyval* root_kv; } ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csr1212_keyval*,struct csr1212_keyval*) ;
 int FUNC_1 (struct csr1212_keyval*,struct csr1212_keyval*) ;
 int FUNC_2 (TYPE_3__*) ;
 struct csr1212_keyval* FUNC_3 (int ,int) ;
 struct csr1212_keyval* FUNC_4 (char*) ;
 int FUNC_5 (struct csr1212_keyval*) ;
 int FUNC_6 (char*,char*,char*) ;

int FUNC_7(struct hpsb_host *VAR_3)
{
 struct csr1212_keyval *VAR_4;
 struct csr1212_keyval *VAR_5 = ((void*)0);
 struct csr1212_keyval *VAR_6 = ((void*)0);
 char VAR_7[128];
 int VAR_8;

 FUNC_6(VAR_7, "Linux - %s", VAR_3->driver->name);
 VAR_4 = VAR_3->csr.rom->root_kv;

 VAR_5 = FUNC_3(VAR_0, VAR_3->csr.guid_hi >> 8);
 VAR_6 = FUNC_4(VAR_7);

 if (!VAR_5 || !VAR_6) {
  if (VAR_5)
   FUNC_5(VAR_5);
  if (VAR_6)
   FUNC_5(VAR_6);
  FUNC_2(VAR_3->csr.rom);
  return -VAR_2;
 }

 FUNC_0(VAR_5, VAR_6);
 FUNC_5(VAR_6);
 VAR_8 = FUNC_1(VAR_4, VAR_5);
 FUNC_5(VAR_5);
 if (VAR_8 != VAR_1) {
  FUNC_2(VAR_3->csr.rom);
  return -VAR_2;
 }

 VAR_3->update_config_rom = 1;

 return 0;
}
