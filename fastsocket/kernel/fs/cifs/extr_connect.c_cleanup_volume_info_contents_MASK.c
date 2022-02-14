
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {scalar_t__ username; scalar_t__ UNC; scalar_t__ UNCip; scalar_t__ domainname; scalar_t__ iocharset; scalar_t__ prepath; int password; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct smb_vol *VAR_0)
{
 FUNC_0(VAR_0->username);
 FUNC_1(VAR_0->password);
 FUNC_0(VAR_0->UNC);
 if (VAR_0->UNCip != VAR_0->UNC + 2)
  FUNC_0(VAR_0->UNCip);
 FUNC_0(VAR_0->domainname);
 FUNC_0(VAR_0->iocharset);
 FUNC_0(VAR_0->prepath);
}
