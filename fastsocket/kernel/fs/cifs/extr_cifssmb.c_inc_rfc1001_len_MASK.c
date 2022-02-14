
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int smb_buf_length; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_0, int VAR_1)
{
 struct smb_hdr *VAR_2 = (struct smb_hdr *)VAR_0;

 FUNC_0(&VAR_2->smb_buf_length, VAR_1);
}
