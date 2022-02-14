
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_cookie {int inode; int * qid; int * fscache; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct v9fs_cookie *VAR_1 = (struct v9fs_cookie *) VAR_0;
 VAR_1->fscache = ((void*)0);
 VAR_1->qid = ((void*)0);
 FUNC_0(&VAR_1->inode);
}
