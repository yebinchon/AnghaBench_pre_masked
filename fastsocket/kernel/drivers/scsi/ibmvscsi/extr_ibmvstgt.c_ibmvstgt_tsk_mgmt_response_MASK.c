
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tsk_mgmt_func; } ;
struct TYPE_4__ {TYPE_1__ tsk_mgmt; } ;
union viosrp_iu {TYPE_2__ srp; } ;
typedef scalar_t__ u64 ;
struct iu_entry {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;

 int FUNC_0 (char*,struct iu_entry*,int) ;
 int FUNC_1 (struct iu_entry*,int *,unsigned char,unsigned char) ;
 int FUNC_2 (struct iu_entry*) ;
 union viosrp_iu* FUNC_3 (struct iu_entry*) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_2,
          u64 VAR_3, u64 VAR_4, int VAR_5)
{
 struct iu_entry *VAR_6 = (struct iu_entry *) ((void *) VAR_4);
 union viosrp_iu *VAR_7 = FUNC_3(VAR_6);
 unsigned char VAR_8, VAR_9;

 FUNC_0("%p %d\n", VAR_6, VAR_5);
 VAR_8 = VAR_1;
 VAR_9 = 0;

 switch (VAR_7->srp.tsk_mgmt.tsk_mgmt_func) {
 case 128:
  VAR_9 = 0x14;
  if (VAR_5)
   VAR_8 = VAR_0;
  break;
 default:
  break;
 }

 FUNC_1(VAR_6, ((void*)0), VAR_8, VAR_9);
 FUNC_2(VAR_6);

 return 0;
}
