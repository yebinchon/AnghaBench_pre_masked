
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idal_buffer {int dummy; } ;
struct ccw1 {int flags; int cmd_code; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct idal_buffer*,struct ccw1*) ;

__attribute__((used)) static inline struct ccw1 *
FUNC_1(struct ccw1 *VAR_1, __u8 VAR_2, struct idal_buffer *VAR_3)
{
 VAR_1->cmd_code = VAR_2;
 VAR_1->flags = VAR_0;
 FUNC_0(VAR_3, VAR_1);
 return VAR_1++;
}
