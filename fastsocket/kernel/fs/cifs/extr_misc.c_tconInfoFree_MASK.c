
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {struct cifs_tcon* password; struct cifs_tcon* nativeFileSystem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct cifs_tcon*) ;
 int FUNC_3 (struct cifs_tcon*,int ,int ) ;
 int FUNC_4 (struct cifs_tcon*) ;
 int VAR_0 ;

void
FUNC_5(struct cifs_tcon *VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_1(1, "Null buffer passed to tconInfoFree");
  return;
 }
 FUNC_0(&VAR_0);
 FUNC_2(VAR_1->nativeFileSystem);
 if (VAR_1->password) {
  FUNC_3(VAR_1->password, 0, FUNC_4(VAR_1->password));
  FUNC_2(VAR_1->password);
 }
 FUNC_2(VAR_1);
}
