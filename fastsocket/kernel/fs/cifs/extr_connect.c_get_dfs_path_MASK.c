
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
struct dfs_info3_param {int dummy; } ;
struct cifs_ses {char* serverName; int ipc_tid; } ;


 int FUNC_0 (int,struct cifs_ses*,char const*,struct dfs_info3_param**,unsigned int*,struct nls_table const*,int) ;
 int FUNC_1 (int,struct cifs_ses*,char*,int *,struct nls_table const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,int) ;

int
FUNC_8(int VAR_3, struct cifs_ses *VAR_4, const char *VAR_5,
      const struct nls_table *VAR_6, unsigned int *VAR_7,
      struct dfs_info3_param **VAR_8, int VAR_9)
{
 char *VAR_10;
 int VAR_11 = 0;

 *VAR_7 = 0;
 *VAR_8 = ((void*)0);

 if (VAR_4->ipc_tid == 0) {
  VAR_10 = FUNC_4(2 +
   FUNC_7(VAR_4->serverName,
    VAR_2 * 2)
     + 1 + 4 + 2,
    VAR_1);
  if (VAR_10 == ((void*)0))
   return -VAR_0;
  VAR_10[0] = '\\';
  VAR_10[1] = '\\';
  FUNC_5(VAR_10 + 2, VAR_4->serverName);
  FUNC_5(VAR_10 + 2 + FUNC_6(VAR_4->serverName), "\\IPC$");
  VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_10, ((void*)0), VAR_6);
  FUNC_2(1, "CIFS Tcon rc = %d ipc_tid = %d", VAR_11, VAR_4->ipc_tid);
  FUNC_3(VAR_10);
 }
 if (VAR_11 == 0)
  VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_8,
         VAR_7, VAR_6, VAR_9);



 return VAR_11;
}
