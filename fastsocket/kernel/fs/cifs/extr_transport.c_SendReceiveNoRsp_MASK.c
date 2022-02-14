
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {char* iov_base; scalar_t__ iov_len; } ;
struct cifs_ses {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int const,struct cifs_ses*,struct kvec*,int,int*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (char*) ;

int
FUNC_3(const unsigned int VAR_2, struct cifs_ses *VAR_3,
   char *VAR_4, int VAR_5)
{
 int VAR_6;
 struct kvec VAR_7[1];
 int VAR_8;

 VAR_7[0].iov_base = VAR_4;
 VAR_7[0].iov_len = FUNC_2(VAR_4) + 4;
 VAR_5 |= VAR_0;
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_7, 1, &VAR_8, VAR_5);
 FUNC_1(VAR_1, "SendRcvNoRsp flags %d rc %d", VAR_5, VAR_6);

 return VAR_6;
}
