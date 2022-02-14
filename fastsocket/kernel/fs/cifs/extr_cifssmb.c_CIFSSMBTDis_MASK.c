
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct cifs_tcon {TYPE_1__* ses; scalar_t__ need_reconnect; } ;
struct TYPE_2__ {scalar_t__ need_reconnect; int * server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const,TYPE_1__*,char*,int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,int ,struct cifs_tcon*,void**) ;

int
FUNC_3(const int VAR_3, struct cifs_tcon *VAR_4)
{
 struct smb_hdr *VAR_5;
 int VAR_6 = 0;

 FUNC_1(1, "In tree disconnect");


 if ((VAR_4->ses == ((void*)0)) || (VAR_4->ses->server == ((void*)0)))
  return -VAR_1;







 if ((VAR_4->need_reconnect) || (VAR_4->ses->need_reconnect))
  return 0;

 VAR_6 = FUNC_2(VAR_2, 0, VAR_4,
       (void **)&VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4->ses, (char *)VAR_5, 0);
 if (VAR_6)
  FUNC_1(1, "Tree disconnect failed %d", VAR_6);



 if (VAR_6 == -VAR_0)
  VAR_6 = 0;

 return VAR_6;
}
