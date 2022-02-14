
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct v9fs_cookie {TYPE_1__* qid; int inode; } ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int ) ;
 int FUNC_1 (void*,int *,int) ;

__attribute__((used)) static uint16_t FUNC_2(const void *VAR_1,
      void *VAR_2, uint16_t VAR_3)
{
 const struct v9fs_cookie *VAR_4 = VAR_1;
 FUNC_1(VAR_2, &VAR_4->qid->version, sizeof(VAR_4->qid->version));

 FUNC_0(VAR_0, "inode %p get aux %u", &VAR_4->inode,
     VAR_4->qid->version);
 return sizeof(VAR_4->qid->version);
}
