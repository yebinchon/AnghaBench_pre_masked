
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int stat_lock; int tcon_list; int openFileList; int tc_count; int tidStatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cifs_tcon* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

struct cifs_tcon *
FUNC_4(void)
{
 struct cifs_tcon *VAR_3;
 VAR_3 = FUNC_2(sizeof(struct cifs_tcon), VAR_1);
 if (VAR_3) {
  FUNC_1(&VAR_2);
  VAR_3->tidStatus = VAR_0;
  ++VAR_3->tc_count;
  FUNC_0(&VAR_3->openFileList);
  FUNC_0(&VAR_3->tcon_list);



 }
 return VAR_3;
}
