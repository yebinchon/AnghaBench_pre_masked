
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct nw_info_struct {TYPE_1__ nfs; void* lastAccessDate; void* modifyDate; void* creationDate; void* modifyTime; void* creationTime; int attributes; scalar_t__ nameLen; int entryName; int DosDirNum; int dirEntNum; int volNumber; } ;
struct ncp_server {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,scalar_t__) ;
 int FUNC_2 (struct nw_info_struct*,int ,int) ;
 int FUNC_3 (struct ncp_server*,char const*,int *,int *,int *) ;
 scalar_t__ FUNC_4 (char const*) ;

int
FUNC_5(struct ncp_server *VAR_1, const char *VAR_2,
    struct nw_info_struct *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_4 = FUNC_3(VAR_1, VAR_2,
   &VAR_3->volNumber, &VAR_3->dirEntNum, &VAR_3->DosDirNum);
 if (VAR_4) {
  return VAR_4;
 }
 VAR_3->nameLen = FUNC_4(VAR_2);
 FUNC_1(VAR_3->entryName, VAR_2, VAR_3->nameLen+1);
 VAR_3->attributes = VAR_0;

 VAR_3->creationTime = VAR_3->modifyTime = FUNC_0(0x0000);
 VAR_3->creationDate = VAR_3->modifyDate = VAR_3->lastAccessDate = FUNC_0(0x0C21);
 VAR_3->nfs.mode = 0;
 return 0;
}
