
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct cifs_tcon {struct cifs_ses* ses; } ;
struct cifs_ses {int server; } ;
struct TYPE_3__ {int Mid; } ;
struct TYPE_4__ {int LockType; TYPE_1__ hdr; scalar_t__ Timeout; } ;
typedef TYPE_2__ LOCK_REQ ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int const,struct cifs_ses*,struct smb_hdr*,struct smb_hdr*,int*,int ) ;

__attribute__((used)) static int
FUNC_2(const unsigned int VAR_2, struct cifs_tcon *VAR_3,
   struct smb_hdr *VAR_4,
   struct smb_hdr *VAR_5)
{
 int VAR_6;
 struct cifs_ses *VAR_7 = VAR_3->ses;
 LOCK_REQ *VAR_8 = (LOCK_REQ *)VAR_4;






 VAR_8->LockType = VAR_0|VAR_1;
 VAR_8->Timeout = 0;
 VAR_8->hdr.Mid = FUNC_0(VAR_7->server);

 return FUNC_1(VAR_2, VAR_7, VAR_4, VAR_5,
   &VAR_6, 0);
}
