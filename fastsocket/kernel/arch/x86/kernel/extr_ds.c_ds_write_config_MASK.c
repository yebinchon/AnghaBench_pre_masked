
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds_trace {scalar_t__ ith; scalar_t__ end; scalar_t__ top; scalar_t__ begin; } ;
struct ds_context {unsigned char* ds; } ;
typedef enum ds_qualifier { ____Placeholder_ds_qualifier } ds_qualifier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int,int ,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct ds_context *VAR_4,
       struct ds_trace *VAR_5, enum ds_qualifier VAR_6)
{
 unsigned char *VAR_7 = VAR_4->ds;

 FUNC_0(VAR_7, VAR_6, VAR_1, (unsigned long)VAR_5->begin);
 FUNC_0(VAR_7, VAR_6, VAR_2, (unsigned long)VAR_5->top);
 FUNC_0(VAR_7, VAR_6, VAR_0, (unsigned long)VAR_5->end);
 FUNC_0(VAR_7, VAR_6, VAR_3, (unsigned long)VAR_5->ith);
}
