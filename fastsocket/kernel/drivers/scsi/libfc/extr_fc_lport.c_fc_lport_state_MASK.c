
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {size_t state; } ;


 char** VAR_0 ;

__attribute__((used)) static const char *FUNC_0(struct fc_lport *VAR_1)
{
 const char *VAR_2;

 VAR_2 = VAR_0[VAR_1->state];
 if (!VAR_2)
  VAR_2 = "unknown";
 return VAR_2;
}
