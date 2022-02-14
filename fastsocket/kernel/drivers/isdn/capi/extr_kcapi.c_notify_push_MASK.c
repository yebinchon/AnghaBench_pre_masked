
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct capi_notifier {unsigned int cmd; int work; void* ncci; int applid; void* controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct capi_notifier* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_3, u32 VAR_4, u16 VAR_5, u32 VAR_6)
{
 struct capi_notifier *VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);

 if (!VAR_7)
  return -VAR_0;

 FUNC_0(&VAR_7->work, VAR_2);
 VAR_7->cmd = VAR_3;
 VAR_7->controller = VAR_4;
 VAR_7->applid = VAR_5;
 VAR_7->ncci = VAR_6;

 FUNC_2(&VAR_7->work);
 return 0;
}
