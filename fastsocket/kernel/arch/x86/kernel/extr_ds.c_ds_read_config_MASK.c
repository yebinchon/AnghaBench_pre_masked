
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds_trace {void* ith; void* end; void* top; void* begin; } ;
struct ds_context {unsigned char* ds; } ;
typedef enum ds_qualifier { ____Placeholder_ds_qualifier } ds_qualifier ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ds_context *VAR_4,
      struct ds_trace *VAR_5, enum ds_qualifier VAR_6)
{
 unsigned char *VAR_7 = VAR_4->ds;

 VAR_5->begin = (void *)FUNC_0(VAR_7, VAR_6, VAR_1);
 VAR_5->top = (void *)FUNC_0(VAR_7, VAR_6, VAR_2);
 VAR_5->end = (void *)FUNC_0(VAR_7, VAR_6, VAR_0);
 VAR_5->ith = (void *)FUNC_0(VAR_7, VAR_6, VAR_3);
}
