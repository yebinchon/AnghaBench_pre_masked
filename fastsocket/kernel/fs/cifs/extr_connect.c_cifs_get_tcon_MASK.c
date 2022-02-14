
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {scalar_t__ seal; int local_lease; int nocase; int retry; scalar_t__ nodfs; int local_nls; int UNC; scalar_t__ password; } ;
struct cifs_tcon {scalar_t__ seal; int Flags; int tcon_list; int local_lease; int nocase; int retry; int password; struct cifs_ses* ses; } ;
struct cifs_ses {int tcon_list; } ;


 int FUNC_0 (int,struct cifs_ses*,int ,struct cifs_tcon*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cifs_tcon* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,...) ;
 struct cifs_tcon* FUNC_6 (struct cifs_ses*,int ) ;
 int FUNC_7 (struct cifs_tcon*) ;
 int FUNC_8 (struct cifs_ses*) ;
 int VAR_4 ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int ,char) ;
 struct cifs_tcon* FUNC_14 () ;
 int FUNC_15 (struct cifs_tcon*) ;

__attribute__((used)) static struct cifs_tcon *
FUNC_16(struct cifs_ses *VAR_5, struct smb_vol *VAR_6)
{
 int VAR_7, VAR_8;
 struct cifs_tcon *VAR_9;

 VAR_9 = FUNC_6(VAR_5, VAR_6->UNC);
 if (VAR_9) {
  FUNC_5(1, "Found match on UNC path");

  FUNC_8(VAR_5);
  if (VAR_9->seal != VAR_6->seal)
   FUNC_4(1, "transport encryption setting "
       "conflicts with existing tid");
  return VAR_9;
 }

 VAR_9 = FUNC_14();
 if (VAR_9 == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto out_fail;
 }

 VAR_9->ses = VAR_5;
 if (VAR_6->password) {
  VAR_9->password = FUNC_9(VAR_6->password, VAR_2);
  if (!VAR_9->password) {
   VAR_7 = -VAR_1;
   goto out_fail;
  }
 }

 if (FUNC_13(VAR_6->UNC + 3, '\\') == ((void*)0)
     && FUNC_13(VAR_6->UNC + 3, '/') == ((void*)0)) {
  FUNC_4(1, "Missing share name");
  VAR_7 = -VAR_0;
  goto out_fail;
 }




 VAR_8 = FUNC_3();
 VAR_7 = FUNC_0(VAR_8, VAR_5, VAR_6->UNC, VAR_9, VAR_6->local_nls);
 FUNC_2(VAR_8);
 FUNC_5(1, "CIFS Tcon rc = %d", VAR_7);
 if (VAR_7)
  goto out_fail;

 if (VAR_6->nodfs) {
  VAR_9->Flags &= ~VAR_3;
  FUNC_5(1, "DFS disabled (%d)", VAR_9->Flags);
 }
 VAR_9->seal = VAR_6->seal;




 VAR_9->retry = VAR_6->retry;
 VAR_9->nocase = VAR_6->nocase;
 VAR_9->local_lease = VAR_6->local_lease;

 FUNC_11(&VAR_4);
 FUNC_10(&VAR_9->tcon_list, &VAR_5->tcon_list);
 FUNC_12(&VAR_4);

 FUNC_7(VAR_9);

 return VAR_9;

out_fail:
 FUNC_15(VAR_9);
 return FUNC_1(VAR_7);
}
