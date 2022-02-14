
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int dummy; } ;
struct cifs_tcon {int num_smbs_sent; } ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smb_hdr*,int,struct cifs_tcon*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, int VAR_2, struct cifs_tcon *VAR_3,
   void **VAR_4, void **VAR_5)
{
 *VAR_4 = FUNC_0();
 if (*VAR_4 == ((void*)0)) {

  return -VAR_0;
 }




 if (VAR_5)
  *VAR_5 = *VAR_4;

 FUNC_2((struct smb_hdr *) *VAR_4, VAR_1, VAR_3,
   VAR_2);

 if (VAR_3 != ((void*)0))
  FUNC_1(&VAR_3->num_smbs_sent);

 return 0;
}
