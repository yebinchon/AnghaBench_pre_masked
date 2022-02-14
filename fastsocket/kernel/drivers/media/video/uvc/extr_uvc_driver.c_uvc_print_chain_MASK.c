
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_chain {int entities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static const char *FUNC_2(struct uvc_video_chain *VAR_2)
{
 static char VAR_3[43];
 char *VAR_4 = VAR_3;

 VAR_4 += FUNC_1(&VAR_2->entities, VAR_0, VAR_4);
 VAR_4 += FUNC_0(VAR_4, " -> ");
 FUNC_1(&VAR_2->entities, VAR_1, VAR_4);

 return VAR_3;
}
