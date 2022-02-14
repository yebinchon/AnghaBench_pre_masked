
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct v9fs_cookie {int inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(const void *VAR_1,
          uint64_t *VAR_2)
{
 const struct v9fs_cookie *VAR_3 = VAR_1;
 *VAR_2 = FUNC_1(&VAR_3->inode);

 FUNC_0(VAR_0, "inode %p get attr %llu", &VAR_3->inode,
     *VAR_2);
}
