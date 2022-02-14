
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnx2x {int * gunzip_buf; int gunzip_mapping; TYPE_1__* pdev; TYPE_2__* strm; } ;
struct TYPE_5__ {int * workspace; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct bnx2x *VAR_3)
{
 VAR_3->gunzip_buf = FUNC_1(&VAR_3->pdev->dev, VAR_1,
         &VAR_3->gunzip_mapping, VAR_2);
 if (VAR_3->gunzip_buf == ((void*)0))
  goto gunzip_nomem1;

 VAR_3->strm = FUNC_4(sizeof(*VAR_3->strm), VAR_2);
 if (VAR_3->strm == ((void*)0))
  goto gunzip_nomem2;

 VAR_3->strm->workspace = FUNC_5(FUNC_6());
 if (VAR_3->strm->workspace == ((void*)0))
  goto gunzip_nomem3;

 return 0;

gunzip_nomem3:
 FUNC_3(VAR_3->strm);
 VAR_3->strm = ((void*)0);

gunzip_nomem2:
 FUNC_2(&VAR_3->pdev->dev, VAR_1, VAR_3->gunzip_buf,
     VAR_3->gunzip_mapping);
 VAR_3->gunzip_buf = ((void*)0);

gunzip_nomem1:
 FUNC_0("Cannot allocate firmware buffer for un-compression\n");
 return -VAR_0;
}
