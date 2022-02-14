
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cifs_ses {int session_mutex; int Suid; TYPE_3__* server; scalar_t__ need_reconnect; } ;
struct TYPE_6__ {int sec_mode; } ;
struct TYPE_4__ {int Uid; int Flags2; int Mid; } ;
struct TYPE_5__ {int AndXCommand; TYPE_1__ hdr; } ;
typedef TYPE_2__ LOGOFF_ANDX_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int const,struct cifs_ses*,char*,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int *,void**) ;

int
FUNC_6(const int VAR_6, struct cifs_ses *VAR_7)
{
 LOGOFF_ANDX_REQ *VAR_8;
 int VAR_9 = 0;

 FUNC_2(1, "In SMBLogoff for session disconnect");






 if (!VAR_7 || !VAR_7->server)
  return -VAR_1;

 FUNC_3(&VAR_7->session_mutex);
 if (VAR_7->need_reconnect)
  goto session_already_dead;

 VAR_9 = FUNC_5(VAR_5, 2, ((void*)0), (void **)&VAR_8);
 if (VAR_9) {
  FUNC_4(&VAR_7->session_mutex);
  return VAR_9;
 }

 VAR_8->hdr.Mid = FUNC_0(VAR_7->server);

 if (VAR_7->server->sec_mode &
     (VAR_3 | VAR_2))
   VAR_8->hdr.Flags2 |= VAR_4;

 VAR_8->hdr.Uid = VAR_7->Suid;

 VAR_8->AndXCommand = 0xFF;
 VAR_9 = FUNC_1(VAR_6, VAR_7, (char *) VAR_8, 0);
session_already_dead:
 FUNC_4(&VAR_7->session_mutex);




 if (VAR_9 == -VAR_0)
  VAR_9 = 0;
 return VAR_9;
}
