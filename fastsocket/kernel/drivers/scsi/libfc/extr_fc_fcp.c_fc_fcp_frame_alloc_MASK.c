
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;


 int FUNC_0 (struct fc_lport*) ;
 struct fc_frame* FUNC_1 (struct fc_lport*,size_t) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;

__attribute__((used)) static inline struct fc_frame *FUNC_3(struct fc_lport *VAR_0,
        size_t VAR_1)
{
 struct fc_frame *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_2(VAR_2))
  return VAR_2;


 FUNC_0(VAR_0);
 return ((void*)0);
}
