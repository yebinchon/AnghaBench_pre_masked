
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct segment_info {int segment_type; int lh; int segment_name; int end; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct segment_info* FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct segment_info*) ;
 struct segment_info* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ,int *,int *) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(char *VAR_5, struct segment_info **VAR_6)
{
 int VAR_7;


 FUNC_2(&VAR_4);
 *VAR_6 = FUNC_1(VAR_5);
 FUNC_8(&VAR_4);
 if (*VAR_6 != ((void*)0))
  return -VAR_0;


 *VAR_6 = FUNC_4(sizeof(struct segment_info), VAR_2);
 if (*VAR_6 == ((void*)0))
  return -VAR_1;

 FUNC_7((*VAR_6)->segment_name, VAR_5);


 VAR_7 = FUNC_5(VAR_5, VAR_3,
   &(*VAR_6)->start, &(*VAR_6)->end);
 if (VAR_7 < 0) {
  FUNC_6(VAR_7, (*VAR_6)->segment_name);
  FUNC_3(*VAR_6);
 } else {
  FUNC_0(&(*VAR_6)->lh);
  (*VAR_6)->segment_type = VAR_7;
 }
 return VAR_7;
}
