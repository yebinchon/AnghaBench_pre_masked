
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_ses {int session_mutex; int tcon_list; int smb_ses_list; int ses_count; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cifs_ses* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

struct cifs_ses *
FUNC_4(void)
{
 struct cifs_ses *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct cifs_ses), VAR_1);
 if (VAR_3) {
  FUNC_1(&VAR_2);
  VAR_3->status = VAR_0;
  ++VAR_3->ses_count;
  FUNC_0(&VAR_3->smb_ses_list);
  FUNC_0(&VAR_3->tcon_list);
  FUNC_3(&VAR_3->session_mutex);
 }
 return VAR_3;
}
