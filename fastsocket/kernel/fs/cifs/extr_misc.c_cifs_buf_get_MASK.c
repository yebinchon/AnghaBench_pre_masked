
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct smb_hdr* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct smb_hdr*,int ,int) ;
 int VAR_3 ;

struct smb_hdr *
FUNC_3(void)
{
 struct smb_hdr *VAR_4 = ((void*)0);





 VAR_4 = FUNC_1(VAR_2, VAR_0);



 if (VAR_4) {
  FUNC_2(VAR_4, 0, sizeof(struct smb_hdr) + 3);
  FUNC_0(&VAR_1);



 }

 return VAR_4;
}
