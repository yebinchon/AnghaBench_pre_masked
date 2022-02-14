
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mptcp_key_t ;
typedef int SHA1_CTX ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;

__attribute__((used)) static void
FUNC_3(mptcp_key_t *VAR_0, char *VAR_1)
{
 SHA1_CTX VAR_2;
 const unsigned char *VAR_3;
 int VAR_4;

 VAR_3 = (const unsigned char *) VAR_0;
 VAR_4 = sizeof (mptcp_key_t);
 FUNC_1(&VAR_2);
 FUNC_2(&VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_1, &VAR_2);
}
