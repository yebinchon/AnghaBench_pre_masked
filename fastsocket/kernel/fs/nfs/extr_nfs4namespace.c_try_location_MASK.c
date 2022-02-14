
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char vfsmount ;
struct sockaddr_storage {int dummy; } ;
struct nfs_clone_mount {char* mnt_path; char* hostname; int * addr; int addrlen; } ;
struct nfs4_string {unsigned int len; int data; } ;
struct nfs4_fs_location {unsigned int nservers; struct nfs4_string* servers; int rootpath; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t const,int ) ;
 scalar_t__ FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (char*,int ,unsigned int) ;
 char* FUNC_7 (int *,char*,int ) ;
 int VAR_6 ;
 int FUNC_8 (int ,unsigned int,int *,size_t const) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char*,int ,char*,char*,char*) ;
 char* FUNC_11 (int *,int ,char*,struct nfs_clone_mount*) ;

__attribute__((used)) static struct vfsmount *FUNC_12(struct nfs_clone_mount *VAR_7,
         char *VAR_8, char *VAR_9,
         const struct nfs4_fs_location *VAR_10)
{
 const size_t VAR_11 = sizeof(struct sockaddr_storage);
 struct vfsmount *VAR_12 = FUNC_1(-VAR_0);
 char *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;

 VAR_13 = FUNC_7(&VAR_10->rootpath, VAR_9, VAR_5);
 if (FUNC_2(VAR_13))
  return FUNC_0(VAR_13);
 VAR_7->mnt_path = VAR_13;
 VAR_14 = VAR_13 - 1 - VAR_9;

 VAR_7->addr = FUNC_4(VAR_11, VAR_2);
 if (VAR_7->addr == ((void*)0))
  return FUNC_1(-VAR_1);

 for (VAR_15 = 0; VAR_15 < VAR_10->nservers; VAR_15++) {
  const struct nfs4_string *VAR_16 = &VAR_10->servers[VAR_15];

  if (VAR_16->len <= 0 || VAR_16->len >= VAR_14)
   continue;

  if (FUNC_5(VAR_16->data, VAR_3, VAR_16->len))
   continue;

  VAR_7->addrlen = FUNC_8(VAR_16->data, VAR_16->len,
    VAR_7->addr, VAR_11);
  if (VAR_7->addrlen == 0)
   continue;

  FUNC_9(VAR_7->addr, VAR_4);

  FUNC_6(VAR_9, VAR_16->data, VAR_16->len);
  VAR_9[VAR_16->len] = '\0';
  VAR_7->hostname = VAR_9;

  FUNC_10(VAR_8, VAR_5, "%s:%s",
    VAR_7->hostname,
    VAR_7->mnt_path);

  VAR_12 = FUNC_11(&VAR_6, 0, VAR_8, VAR_7);
  if (!FUNC_2(VAR_12))
   break;
 }
 FUNC_3(VAR_7->addr);
 return VAR_12;
}
