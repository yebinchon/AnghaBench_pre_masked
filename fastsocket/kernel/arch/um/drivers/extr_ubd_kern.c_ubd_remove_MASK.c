
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubd {scalar_t__ count; int pdev; int * file; } ;
struct gendisk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gendisk*) ;
 struct gendisk** VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gendisk*) ;
 struct ubd* VAR_3 ;
 struct gendisk** VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(int VAR_6, char **VAR_7)
{
 struct gendisk *VAR_8 = VAR_4[VAR_6];
 struct ubd *VAR_9;
 int VAR_10 = -VAR_1;

 FUNC_1(&VAR_5);

 VAR_9 = &VAR_3[VAR_6];

 if(VAR_9->file == ((void*)0))
  goto out;


 VAR_10 = -VAR_0;
 if(VAR_9->count > 0)
  goto out;

 VAR_4[VAR_6] = ((void*)0);
 if(VAR_8 != ((void*)0)){
  FUNC_0(VAR_8);
  FUNC_4(VAR_8);
 }

 if(VAR_2[VAR_6] != ((void*)0)){
  FUNC_0(VAR_2[VAR_6]);
  FUNC_4(VAR_2[VAR_6]);
  VAR_2[VAR_6] = ((void*)0);
 }

 VAR_10 = 0;
 FUNC_3(&VAR_9->pdev);
out:
 FUNC_2(&VAR_5);
 return VAR_10;
}
