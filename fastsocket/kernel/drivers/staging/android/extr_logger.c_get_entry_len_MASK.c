
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger_log {size_t size; int buffer; } ;
struct logger_entry {int dummy; } ;
typedef char __u32 ;
typedef char __u16 ;


 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static __u32 FUNC_1(struct logger_log *VAR_0, size_t VAR_1)
{
 __u16 VAR_2;

 switch (VAR_0->size - VAR_1) {
 case 1:
  FUNC_0(&VAR_2, VAR_0->buffer + VAR_1, 1);
  FUNC_0(((char *) &VAR_2) + 1, VAR_0->buffer, 1);
  break;
 default:
  FUNC_0(&VAR_2, VAR_0->buffer + VAR_1, 2);
 }

 return sizeof(struct logger_entry) + VAR_2;
}
